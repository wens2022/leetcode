# Testing Guide | 测试指南

> How to write and run tests for Python and C++ solutions.

---

## Python Testing | Python测试

```python
# test_solution.py
import pytest
from solution import Solution1, Solution2

SOLUTIONS = [Solution1(), Solution2()]

@pytest.mark.parametrize("sol", SOLUTIONS)
class TestSolution:
    def test_basic(self, sol):
        assert sol.twoSum([2,7,11,15], 9) == [0,1]

    def test_edge_case(self, sol):
        assert sol.twoSum([3,3], 6) == [0,1]
```

**Key concept | 关键概念:** `@pytest.mark.parametrize` runs every test against every solution automatically | 自动对所有解法跑所有测试.

### Running Tests | 运行测试

```bash
uv run pytest test_solution.py -v
uv run pytest test_solution.py -v -s    # show print output
```

### Performance Test | 性能测试

```python
def test_performance():
    import time
    nums = list(range(10000))
    target = 19997
    for sol in SOLUTIONS:
        start = time.perf_counter()
        for _ in range(1000):
            sol.twoSum(nums, target)
        elapsed = time.perf_counter() - start
        print(f"\n{sol.__class__.__name__}: {elapsed:.4f}s")
```

---

## C++ Testing | C++测试

```cpp
// test_solution.cpp
#include <gtest/gtest.h>
#include "solution.cpp"

template <typename T>
class SolutionTest : public testing::Test {
protected:
    T sol;
};

using Implementations = testing::Types<Solution1, Solution2>;
TYPED_TEST_SUITE(SolutionTest, Implementations);

TYPED_TEST(SolutionTest, Basic) {
    vector<int> nums = {2,7,11,15};
    EXPECT_EQ(this->sol.twoSum(nums, 9), (vector<int>{0,1}));
}
```

### Build & Run | 构建与运行

```bash
cd cpp/build
cmake ..
make
ctest --output-on-failure
```

---

## Concepts | 关键概念

| Concept | 概念 | Python | C++ |
|---|---|---|---|
| Test framework | 测试框架 | pytest | GoogleTest |
| Multi-solution test | 多解法测试 | parametrize | TYPED_TEST |
| Assertion | 断言 | assert | EXPECT_EQ |
| Test runner | 测试运行器 | pytest | ctest |
