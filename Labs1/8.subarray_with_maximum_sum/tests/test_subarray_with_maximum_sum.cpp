#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "subarray_with_maximum_sum.h"

TEST_CASE("SubarrayWithMaxSum tests") {
    SUBCASE("Simple cases") {
        auto result = SubarrayWithMaxSum({-2, 1, -3, 4, -1, 2, 1, -5, 4});
        CHECK(result.first == 6); // Maximum sum
        CHECK(result.second == std::vector<int>({4, -1, 2, 1})); // Subarray

        result = SubarrayWithMaxSum({1, 2, 3, 4, 5});
        CHECK(result.first == 15);
        CHECK(result.second == std::vector<int>({1, 2, 3, 4, 5}));

        result = SubarrayWithMaxSum({-1, -2, -3, -4});
        CHECK(result.first == -1);
        CHECK(result.second == std::vector<int>({-1}));
    }

    SUBCASE("Edge cases") {
        auto result = SubarrayWithMaxSum({});
        CHECK(result.first == 0); // Empty array
        CHECK(result.second.empty());

        result = SubarrayWithMaxSum({5});
        CHECK(result.first == 5);
        CHECK(result.second == std::vector<int>({5}));

        result = SubarrayWithMaxSum({-5});
        CHECK(result.first == -5);
        CHECK(result.second == std::vector<int>({-5}));
    }
}
