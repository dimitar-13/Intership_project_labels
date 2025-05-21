#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/right_trim_transformations.h"


TEST_CASE("Right trim text test", "[transformation]")
{
     RightTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("some text ") == "some text");
}

TEST_CASE("Right trim text empty string", "[transformation]")
{
    RightTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("") == "");
}


TEST_CASE("Right trim no whitespace", "[transformation]")
{
    RightTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("some-text") == "some-text");
}


TEST_CASE("Right trim only whitespace", "[transformation]")
{
    RightTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform(" ") == "");
}

TEST_CASE("Right trim only tabs and new line as white spaces", "[transformation]")
{
    RightTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("some-text\t") == "some-text");

    REQUIRE(capitalize_text_obj.Transform("some-text\n") == "some-text");
}

TEST_CASE("Right trim multiple end spaces", "[transformation]")
{
    RightTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("some-text     ") == "some-text");

    REQUIRE(capitalize_text_obj.Transform("some-text  \n \t ") == "some-text");
}