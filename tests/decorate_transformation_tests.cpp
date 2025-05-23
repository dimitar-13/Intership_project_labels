#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_approx.hpp>

#include "transformations/decorate_transformations.h"


TEST_CASE("Decoration text test", "[transformation]")
{
     DecorateTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("abc") == "-={ abc }=-");
}

TEST_CASE("Decoration text empty string", "[transformation]")
{
    DecorateTransformation capitalize_text_obj;

    REQUIRE(capitalize_text_obj.Transform("") == "");
}
