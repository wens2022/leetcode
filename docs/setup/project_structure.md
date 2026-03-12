# Project Structure | 项目结构

> Architecture and conventions for this LeetCode practice repository.

---

## Directory Layout | 目录结构

```
leetcode/
├── problems/                    # All solutions | 所有题目
│   └── {topic}/
│       └── {problem_name}/
│           ├── solution.py      # Python solutions (all in one file)
│           ├── solution.cpp     # C++ solutions (all in one file)
│           ├── test_solution.py # Python tests
│           ├── test_solution.cpp# C++ tests
│           └── notes.md         # Complexity, insights, comparisons
│
├── template/                    # Scaffold for new problems | 新题模板
│   ├── solution.py
│   ├── solution.cpp
│   ├── test_solution.py
│   ├── test_solution.cpp
│   └── notes.md
│
├── tracks/                      # Progress tracking | 进度追踪
│   ├── neetcode.md
│   └── crash_course.md
│
├── cpp/                         # C++ build system | C++构建系统
│   └── CMakeLists.txt
│
├── python/                      # Python project config | Python项目配置
│   └── pyproject.toml
│
├── docs/                        # Documentation | 文档
│   ├── setup/
│   ├── guides/
│   └── notes/
│
└── .gitignore
```

---

## Key Design Decisions | 关键设计决策

### One folder per problem | 每道题一个文件夹

```
problems/arrays/two_sum/   ← all related files together
```

### Multiple solutions in one file | 多个解法在同一文件

```python
class Solution1:   # Brute Force - O(n²)
class Solution2:   # Optimal - O(n)
```

Never create separate files per solution.

### Language order | 语言顺序

```
Step 1: Python first  → focus on algorithm | 专注算法思路
Step 2: C++ after     → practice STL/syntax | 练习语法
```

### Problem deduplication | 题目去重

Same problem in Neetcode and Crash Course:
- Code stored once in `problems/` | 代码只存一份
- Both `tracks/` files mark it done | 两个进度都标记
- `notes.md` lists both sources | notes标注两个来源

---

## Adding a New Problem | 添加新题

```bash
cp -r template/ problems/{topic}/{problem_name}/
code problems/{topic}/{problem_name}/
# 1. Write Python solution, run tests
# 2. Translate to C++, run tests
# 3. Update notes.md
# 4. Update tracks/
git add . && git commit -m "solve: {problem_name} - {topic}"
```

---

## Commit Convention | 提交规范

```
solve:     two_sum - arrays
fix:       two_sum - edge case with negatives
refactor:  two_sum - optimize C++ solution
docs:      update neetcode progress
```
