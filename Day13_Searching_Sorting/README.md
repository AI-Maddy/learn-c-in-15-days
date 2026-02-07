# **Day 13 — Searching & Sorting Algorithms**

Searching and sorting are fundamental operations in computer science.  
They help us organize data and retrieve information efficiently.

This chapter covers the most common searching and sorting algorithms used in C.

---

## **Topics Covered**

- Linear search  
- Binary search  
- Bubble sort  
- Selection sort  
- Insertion sort  
- Sorting + searching combined  
- Time complexity intuition  
- Exercises (4 minimum)

---

# **1. Searching Algorithms**

Searching means finding an element in a list.

---

## **1.1 Linear Search**

Checks each element one by one.

- Works on **unsorted** arrays  
- Simple but slow for large data  
- Time complexity: **O(n)**  

Example file: `examples/linear_search.c`

---

## **1.2 Binary Search**

Much faster — but requires **sorted** array.

- Repeatedly divides the array in half  
- Time complexity: **O(log n)**  
- Cannot be used on unsorted data  

Example file: `examples/binary_search.c`

---

# **2. Sorting Algorithms**

Sorting means arranging data in ascending or descending order.

---

## **2.1 Bubble Sort**

Repeatedly swaps adjacent elements if they are in the wrong order.

- Very simple  
- Very slow for large data  
- Time complexity: **O(n²)**  

Example file: `examples/bubble_sort.c`

---

## **2.2 Selection Sort**

Repeatedly selects the smallest element and places it in the correct position.

- Fewer swaps than bubble sort  
- Still **O(n²)**  

Example file: `examples/selection_sort.c`

---

## **2.3 Insertion Sort**

Builds the sorted array one element at a time.

- Efficient for small or nearly sorted data  
- Time complexity: **O(n²)** worst case  
- **O(n)** best case (already sorted)

Example file: `examples/insertion_sort.c`

---

# **3. Combining Sorting + Searching**

A common pattern:

1. Sort the array  
2. Use binary search for fast lookup  

Example file: `examples/sort_and_search_combined.c`

This is the foundation of many real‑world systems.

---

# **4. Time Complexity Intuition**

| Algorithm | Best | Average | Worst |
|----------|------|---------|-------|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |

Learners don’t need deep Big‑O mastery yet — just the intuition that:

- **Binary search is fast**  
- **Simple sorts are slow**  
- **Sorting helps searching**

---

# **5. Common Pitfalls**

### **1. Using binary search on unsorted data**
It will not work.

### **2. Off‑by‑one errors**
Especially in binary search mid‑calculation.

### **3. Forgetting to swap correctly in bubble/selection sort**

### **4. Not understanding stability**
Insertion sort is stable; selection sort is not.

### **5. Confusing in‑place vs not in‑place**
All three sorts here are in‑place.

---

# **6. Exercises**

Below are the 4 required exercises for Day 13.

---

## **Exercise 1 — Linear Search**
File: `exercises/exercise1.md`

Write a program to perform linear search on an array.

---

## **Exercise 2 — Binary Search**
File: `exercises/exercise2.md`

Write a program to perform binary search on a sorted array.

---

## **Exercise 3 — Bubble Sort**
File: `exercises/exercise3.md`

Write a program to sort an array using bubble sort.

---

## **Exercise 4 — Sort + Search**
File: `exercises/exercise4.md`

Write a program that:

1. Sorts an array using insertion sort  
2. Searches for an element using binary search  

---