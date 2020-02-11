#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Testing subtract N", "[SubtractN]"){
    std::vector<int> p{1};
    std::vector<int> q{0};
    int n = 1;
    REQUIRE(SubtractN(p, n) == q);
}
