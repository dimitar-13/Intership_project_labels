#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/replace_transformations.h"


TEST_CASE("Replace text test", "[transformation]")
{
    ReplaceTransformation replace_text_obj("abc","d");

    REQUIRE(replace_text_obj.Transform("abc abcdef") == "d ddef");
}

TEST_CASE("Replace text no occurrence test", "[transformation]")
{
    ReplaceTransformation replace_text_obj("abc", "d");

    REQUIRE(replace_text_obj.Transform("No special word but replacing word 'd'") == "No special word but replacing word 'd'");
}

TEST_CASE("Replace text empty string test", "[transformation]")
{
    ReplaceTransformation replace_text_obj("abc", "d");

    REQUIRE(replace_text_obj.Transform("") == "");
}

TEST_CASE("Replace text case sensitive test", "[transformation]")
{
    ReplaceTransformation replace_text_obj("abc", "d");

    REQUIRE(replace_text_obj.Transform("We will replace Abc only when its exaclty the same like abc") == "We will replace Abc only when its exaclty the same like d");
}
