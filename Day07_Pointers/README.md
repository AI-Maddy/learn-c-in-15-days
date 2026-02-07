# **Day 7 — Pointers in C**

Pointers are one of the most powerful and important concepts in C. They allow you to work directly with memory, build dynamic data structures, manipulate arrays efficiently, and pass large data to functions without copying.

Understanding pointers unlocks everything that comes later: strings, dynamic memory, structures, file handling, and more.

---

## **Topics Covered**

- What is a pointer  
- Declaring and initializing pointers  
- Dereferencing  
- Pointer arithmetic  
- Pointers and arrays  
- Pointer to pointer  
- Passing pointers to functions  
- Difference between arrays and pointers  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. What is a Pointer?**

A pointer is a variable that stores the **memory address** of another variable.

```c
int x = 10;
int *p = &x;
```

- `x` → stores value `10`  
- `&x` → address of `x`  
- `p` → stores that address  
- `*p` → value stored at that address (10)

Example file: `examples/pointer_basics.c`

---

# **2. Declaring and Initializing Pointers**

### **2.1 Declaration**
```c
int *p;
char *c;
float *f;
```

### **2.2 Initialization**
```c
int x = 5;
int *p = &x;
```

### **2.3 Null pointer**
```c
int *ptr = NULL;
```

---

# **3. Dereferencing**

Dereferencing means accessing the value stored at the address.

```c
int x = 20;
int *p = &x;

printf("%d", *p);  // prints 20
```

---

# **4. Pointer Arithmetic**

Pointers move in steps of the data type size.

If `p` is an `int*`:

- `p + 1` moves ahead by 4 bytes (on most systems)
- `p - 1` moves back by 4 bytes

Example:
```c
int arr[3] = {10, 20, 30};
int *p = arr;

printf("%d", *(p + 1));  // 20
```

Example file: `examples/pointer_arithmetic.c`

---

# **5. Pointers and Arrays**

Arrays naturally behave like pointers.

```c
int arr[5] = {1,2,3,4,5};
int *p = arr;

printf("%d", *(p + 2));  // 3
```

Key idea:  
`arr` → address of first element  
`arr[i]` == `*(arr + i)`

Example file: `examples/pointer_and_arrays.c`

---

# **6. Pointer to Pointer**

A pointer can store the address of another pointer.

```c
int x = 10;
int *p = &x;
int **pp = &p;
```

Example file: `examples/pointer_to_pointer.c`

---

# **7. Passing Pointers to Functions**

Pointers allow functions to modify variables outside their scope.

```c
void increment(int *p) {
    (*p)++;
}
```

Example file: `examples/passing_pointers_to_functions.c`

---

# **8. Pointer vs Array — Key Differences**

| Feature | Array | Pointer |
|--------|--------|---------|
| Memory | Fixed size | Can point anywhere |
| Reassignment | Not allowed | Allowed |
| sizeof | Size of entire array | Size of pointer |
| Storage | Contiguous | Not guaranteed |

Example file: `examples/pointer_vs_array_difference.c`

---

# **9. Common Pointer Pitfalls**

### **1. Dereferencing NULL**
```c
int *p = NULL;
printf("%d", *p);  // crash
```

### **2. Uninitialized pointers**
```c
int *p;  // garbage address
```

### **3. Dangling pointers**
Pointer pointing to freed memory.

### **4. Out-of-bounds pointer arithmetic**

### **5. Confusing `*p++` vs `(*p)++`**

---

# **10. Exercises**

Below are the 4 required exercises for Day 7.

---

## **Exercise 1 — Swap Two Numbers Using Pointers**
File: `exercises/exercise1.md`

Write a function:

```c
void swap(int *a, int *b);
```

Use it to swap two integers.

---

## **Exercise 2 — Count Even Numbers Using Pointer Traversal**
File: `exercises/exercise2.md`

- Read `n` integers  
- Use a pointer to traverse the array  
- Count how many are even  

---

## **Exercise 3 — Find Length of String Using Pointer**
File: `exercises/exercise3.md`

Write a function:

```c
int strLength(char *s);
```

Compute length manually using pointer arithmetic.

---

## **Exercise 4 — Pointer to Pointer Demo**
File: `exercises/exercise4.md`

- Declare an integer  
- Create a pointer to it  
- Create a pointer to that pointer  
- Print values at each level  

---