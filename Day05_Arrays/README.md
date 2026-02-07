# **Day 5 — Arrays in C**

Arrays allow you to store multiple values of the same type under a single variable name. They are essential for handling collections of data, performing computations, and building more advanced structures like strings, matrices, and data buffers.

Day 5 introduces 1D and 2D arrays, initialization, traversal, passing arrays to functions, and common pitfalls.

---

## **Topics Covered**

- What is an array  
- Declaring and initializing arrays  
- Accessing array elements  
- Input and output with arrays  
- Summing array elements  
- Finding maximum and minimum  
- Passing arrays to functions  
- 2D arrays (matrices)  
- Traversing 2D arrays  
- Common pitfalls  

---

# **1. What is an Array?**

An array is a collection of elements of the **same data type**, stored in **contiguous memory locations**.

Example:
```c
int numbers[5];
```

This creates space for 5 integers.

Example file: `examples/array_basics.c`

---

# **2. Declaring and Initializing Arrays**

### **2.1 Declaration**
```c
int arr[5];
```

### **2.2 Initialization**
```c
int arr[5] = {1, 2, 3, 4, 5};
```

### **2.3 Partial Initialization**
```c
int arr[5] = {10, 20};   // remaining become 0
```

### **2.4 Automatic Size Detection**
```c
int arr[] = {3, 6, 9};
```

Example file: `examples/array_initialization.c`

---

# **3. Accessing Array Elements**

Arrays use **zero‑based indexing**.

```c
printf("%d", arr[0]);  // first element
arr[2] = 50;           // modify element
```

---

# **4. Input and Output with Arrays**

Reading values:
```c
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
```

Printing values:
```c
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
```

Example file: `examples/array_input_output.c`

---

# **5. Summing Array Elements**

A common operation in array processing.

```c
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```

Example file: `examples/array_sum.c`

---

# **6. Finding Maximum and Minimum**

```c
int max = arr[0];
for (int i = 1; i < n; i++) {
    if (arr[i] > max)
        max = arr[i];
}
```

Example file: `examples/array_max_min.c`

---

# **7. Passing Arrays to Functions**

Arrays are always passed **by reference**, meaning the function receives the memory address.

Function prototype:
```c
void printArray(int arr[], int size);
```

Example file: `examples/array_passing_to_function.c`

---

# **8. 2D Arrays (Matrices)**

A 2D array is an array of arrays.

Declaration:
```c
int matrix[3][3];
```

Initialization:
```c
int matrix[2][2] = {
    {1, 2},
    {3, 4}
};
```

Example file: `examples/2d_array_basics.c`

---

# **9. Traversing a 2D Array**

Use nested loops:

```c
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
```

Example file: `examples/2d_array_traversal.c`

---

# **10. Common Pitfalls**

### **1. Out‑of‑bounds access**
```c
arr[5] = 10;   // invalid for size 5
```

### **2. Uninitialized arrays**
May contain garbage values.

### **3. Wrong loop limits**
Using `<=` instead of `<`.

### **4. Forgetting array size when passing to functions**

### **5. Misunderstanding array decay**
Arrays become pointers when passed to functions.

---

# **11. Exercises**

---

## **Exercise 1 — Count Even and Odd Numbers**
File: `exercises/exercise1.md`

Write a program that:
- Reads `n` integers into an array  
- Counts how many are even and how many are odd  
- Prints the results  

Solution: `exercises/solutions/solution1.c`

---

## **Exercise 2 — 2D Matrix Addition**
File: `exercises/exercise2.md`

Write a program that:
- Reads two 2×2 matrices  
- Adds them  
- Prints the resulting matrix  

Solution: `exercises/solutions/solution2.c`

---