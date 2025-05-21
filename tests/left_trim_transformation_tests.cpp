#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/left_trim_transformations.h"


TEST_CASE("Left trim text test", "[transformation]")
{
     LeftTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform(" some text") == "some text");
}

TEST_CASE("Left trim text empty string", "[transformation]")
{
    LeftTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("") == "");
}


TEST_CASE("Left trim no whitespace", "[transformation]")
{
    LeftTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("some text") == "some text");
}


TEST_CASE("Left trim only whitespace", "[transformation]")
{
    LeftTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform(" ") == "");
}

TEST_CASE("Left trim only tabs and new line as white spaces", "[transformation]")
{
    LeftTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("\tsome-text") == "some-text");

    REQUIRE(capitalize_text_obj.Transform("\nsome-text") == "some-text");
}

TEST_CASE("Left trim multiple white spaces test", "[transformation]")
{
    LeftTrimTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("      some text") == "some text");

    REQUIRE(capitalize_text_obj.Transform("   \t\t   some text") == "some text");

    REQUIRE(capitalize_text_obj.Transform("   \t\n   some text") == "some text");

}
