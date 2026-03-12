# Python vs C++ Patterns | Python与C++对比

> Updated as new problems are solved | 随着刷题不断更新.

---

## Data Structures | 数据结构

| Concept | 概念 | Python | C++ |
|---|---|---|---|
| Dynamic array | 动态数组 | `list` | `vector<int>` |
| Hash map | 哈希表 | `dict` | `unordered_map<int,int>` |
| Hash set | 哈希集合 | `set` | `unordered_set<int>` |
| Stack | 栈 | `list` (append/pop) | `stack<int>` |
| Queue | 队列 | `collections.deque` | `queue<int>` |
| Heap | 堆 | `heapq` | `priority_queue<int>` |

---

## Common Operations | 常用操作

| Operation | 操作 | Python | C++ |
|---|---|---|---|
| Iterate with index | 带index遍历 | `enumerate(arr)` | `for(int i=0; i<n; i++)` |
| Sort | 排序 | `arr.sort()` | `sort(arr.begin(), arr.end())` |
| Length | 长度 | `len(arr)` | `arr.size()` |
| Append | 添加 | `arr.append(x)` | `arr.push_back(x)` |
| Check membership | 检查成员 | `x in d` | `map.count(x)` |
| Integer max | 最大整数 | `float('inf')` | `INT_MAX` |

---

## Return Syntax | 返回语法

```python
# Python
return [i, j]
```

```cpp
// C++
return {i, j};
```

---

## Problem-Specific | 题目对比

### Two Sum (#1)

| | Python | C++ |
|---|---|---|
| HashMap | `dict` | `unordered_map<int,int>` |
| Check key | `if comp in seen` | `if seen.count(comp)` |
| Store | `seen[num] = i` | `seen[nums[i]] = i` |

---

*Add a new section for each problem solved | 每道新题后添加对比*
