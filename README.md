# MockScreening2024_Solutions
Solutions for the Mock Screening Test organized by CodeClub JUSL.

#### For the 3rd question , rejudging will be done for all the codes submitted as there was a glitch on the checking of multiple arrangements of the fans standing.Even correct arrangements with the same minimum southgateness value as that of the answer were shown as wrong answer because of the test case checker not considering various possible permutation.
**Like for the input**
- **3**
-**30 10 20** 
**The correct expected answer is showing :10 30 20 (which has a southgateness value of 30 [abs(10-30)+abs(30-20)]
Other possible permutations which should and are correct would be: 30 10 20 which has the same southgateness value as the expected answer 30**

# Topics of the Questions

## 1. Binary Search on Answer Space

### Overview
- **Purpose**: Efficiently find the optimal solution within a large range.
- **Approach**: Perform binary search on the possible answer space on time(e.g., 1 to INT_MAX) and use a predicate function to check feasibility at each step and move the start and end pointer accordingly.

### Problem Statement Summed Up
- **PS:**: Determine the minimum time required to achieve a task under specific constraints, such as dating all individuals within a given timeframe.

---

## 2. Knapsack Dynamic Programming (DP)

### Overview
- **Purpose**: Maximize or minimize a value under certain constraints.
- **Approach**: Use dynamic programming to solve the knapsack problem where you pick items to maximize the total value without exceeding a given capacity.

### Problem Statement Summed Up
- **PS:**: Given a list of offers with their respective durations and salaries, pick the offers such that the total playing duration does not exceed a specified number of years, maximizing the total salary earned.

---

## 3. Two-Pointer Technique

### Overview
- **Purpose**: Efficiently process data in a sorted manner.
- **Approach**: Use two pointers to traverse the array, placing elements with similar values close to each other to minimize the absolute difference.

### Problem Statement Summed Up
- **PS:**: Arrange elements in a way that minimizes the maximum absolute difference between any two adjacent elements.

---

## 4. Dynamic Programming on Trees

### Overview
- **Purpose**: Solve problems related to paths and subtrees within a tree structure.
- **Approach**: Use dynamic programming to count the number of paths in a tree that meet certain criteria.

###  Problem Statement Summed Up
- **PS:**: Count the number of paths in a k-tree with a total sum of weights equal to `n` and including at least one edge with a weight of `d` or more.

---
