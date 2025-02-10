#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "customSort.h"

TEST_CASE("Testing generateSubsets function") {
    vector<int> testSet = {1, 2};
    vector<vector<int>> expectedSubsets = {{}, {2}, {1}, {1, 2}};
    vector<vector<int>> generatedSubsets;
    
    auto collectSubsets = [&](const vector<int>& subset) {
        generatedSubsets.push_back(subset);
    };
    
    vector<int> current;
    generateSubsets(testSet, current, 0, collectSubsets);
    
    CHECK(generatedSubsets == expectedSubsets);
}