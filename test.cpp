#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "sub/config/config.hpp"
#include "verbose.hpp"



TEST_SUITE("simple test") {
    TEST_CASE("set config") {
         cppConfig::set("verbose", "8");
    };
    TEST_CASE("message with level") {
        cpp_verbose::msg("test with ", " level ", 2);
    };
    TEST_CASE("message with error and level") {
        cpp_verbose::msg("test with ", " level ", "error",  2);
    };
    TEST_CASE("message") {
        cpp_verbose::msg("test with ", " nothing ");
    };
    TEST_CASE("message with error ") {
        cpp_verbose::msg("test with ", " just ", "error");
    };
};
