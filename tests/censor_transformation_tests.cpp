#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/censor_transformations.h"


TEST_CASE("Censor text test", "[transformation]")
{
     CensorTransformation censor_text_obj("abc");

    REQUIRE(censor_text_obj.Transform("some abc text") == "some *** text");
}

TEST_CASE("Censor only with censor text test", "[transformation]")
{
    CensorTransformation censor_text_obj("abc");

    REQUIRE(censor_text_obj.Transform("abc") == "***");
}
TEST_CASE("Censor text empty string", "[transformation]")
{
    CensorTransformation censor_text_obj("abc");

    REQUIRE(censor_text_obj.Transform("") == "");
}

TEST_CASE("Censor text mixed in original text test", "[transformation]")
{
    CensorTransformation censor_text_obj("abc");

    REQUIRE(censor_text_obj.Transform("some teabcxt is tabco be censoredabc") == "some te***xt is t***o be censored***");
}

TEST_CASE("Censor text empty censoring word", "[transformation]")
{
    CensorTransformation censor_text_obj("");

    REQUIRE(censor_text_obj.Transform("some text") == "some text");
}

TEST_CASE("Censor text to lower test ", "[transformation]")
{
    CensorTransformation censor_text_obj("abc");

    REQUIRE(censor_text_obj.Transform("some AbC text") == "some *** text");
}

TEST_CASE("Censor text single character censoring word", "[transformation]")
{
    CensorTransformation censor_text_obj("a");

    REQUIRE(censor_text_obj.Transform("a is a cool character from the alphabet") == "* is * cool ch*r*cter from the *lph*bet");
}