#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/normalize_space_transformations.h"

TEST_CASE("Normalize space text test", "[transformation]")
{
    NormalizeSpaceTransformation normalize_text_obj;

    REQUIRE(normalize_text_obj.Transform("some         text") == "some text");
}

TEST_CASE("Normalize space text empty string", "[transformation]")
{
    NormalizeSpaceTransformation normalize_text_obj;

    REQUIRE(normalize_text_obj.Transform("") == "");
}

TEST_CASE("Normalize space single space", "[transformation]")
{
    NormalizeSpaceTransformation normalize_text_obj;

    REQUIRE(normalize_text_obj.Transform("some text") == "some text");
}

TEST_CASE("Normalize space single space but in different places", "[transformation]")
{
    NormalizeSpaceTransformation normalize_text_obj;

    REQUIRE(normalize_text_obj.Transform("this is some text") == "this is some text");
}

TEST_CASE("Normalize space only spaces", "[transformation]")
{
    NormalizeSpaceTransformation normalize_text_obj;

    REQUIRE(normalize_text_obj.Transform("     ") == " ");
}

TEST_CASE("Normalize space multiple times text test", "[transformation]")
{
    NormalizeSpaceTransformation normalize_text_obj;

    REQUIRE(normalize_text_obj.Transform("This   is   some         text") == "This is some text");
}