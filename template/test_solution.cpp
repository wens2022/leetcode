#include <gtest/gtest.h>
#include "solution.cpp"

template <typename T>
class SolutionTest : public testing::Test {
protected:
    T sol;
};

using Implementations = testing::Types<Solution1, Solution2>;
TYPED_TEST_SUITE(SolutionTest, Implementations);

TYPED_TEST(SolutionTest, Case1) {
    // TODO: replace with real test
}
