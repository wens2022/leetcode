import pytest
from solution import Solution1, Solution2

SOLUTIONS = [Solution1(), Solution2()]

@pytest.mark.parametrize("sol", SOLUTIONS)
class TestSolution:
    def test_case1(self, sol):
        pass  # TODO: replace with real test

    def test_case2(self, sol):
        pass  # TODO: replace with real test
