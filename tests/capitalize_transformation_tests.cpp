#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/capitalize_transformations.h"


TEST_CASE("Capitalize text test", "[transformation]")
{
    CapitalizeTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("some-text").compare("Some-text") == 0);
}

TEST_CASE("Capitalize text first character symbol", "[transformation]")
{
    CapitalizeTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform(" some-text").compare(" some-text") == 0);

    REQUIRE(capitalize_text_obj.Transform("-some-text").compare("-some-text") == 0);

    REQUIRE(capitalize_text_obj.Transform("^some-text").compare("^some-text") == 0);
}

TEST_CASE("Capitalize text empty string", "[transformation]")
{
    CapitalizeTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("").compare("") == 0);
}


TEST_CASE("Capitalize text single letter", "[transformation]")
{
    CapitalizeTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("a").compare("A") == 0);
}