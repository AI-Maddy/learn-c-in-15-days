# **Day 8 — Dynamic Memory Allocation in C**

Dynamic memory allocation allows programs to request memory **at runtime**, instead of relying only on fixed‑size arrays. This makes your programs flexible, efficient, and capable of handling unpredictable data sizes.

C provides four key functions for dynamic memory management:

- `malloc()`  
- `calloc()`  
- `realloc()`  
- `free()`  

Understanding these functions is essential for building advanced data structures and avoiding memory leaks.

---

## **Topics Covered**

- Why dynamic memory is needed  
- `malloc()`  
- `calloc()`  
- `realloc()`  
- `free()`  
- Dynamic arrays  
- Dangling pointers  
- Memory leaks  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. Why Dynamic Memory?**

Static arrays have fixed size:

```c
int arr[100];  // always 100 integers
```

But what if:
- You don’t know the size beforehand?  
- The size needs to grow or shrink?  
- You want to allocate memory only when needed?

Dynamic memory solves this.

---

# **2. malloc() — Memory Allocation**

Allocates a block of memory of given size (in bytes).

```c
int *p = (int*) malloc(5 * sizeof(int));
```

Characteristics:
- Memory is uninitialized (contains garbage values)
- Returns `NULL` if allocation fails

Example file: `examples/malloc_basics.c`

---

# **3. calloc() — Contiguous Allocation**

Allocates memory for **multiple elements** and initializes them to **0**.

```c
int *p = (int*) calloc(5, sizeof(int));
```

Characteristics:
- All values start as 0
- Useful for arrays

Example file: `examples/calloc_basics.c`

---

# **4. realloc() — Resize Memory**

Used to grow or shrink previously allocated memory.

```c
p = realloc(p, newSize * sizeof(int));
```

Characteristics:
- Preserves old data
- May move memory to a new location
- Returns `NULL` on failure

Example file: `examples/realloc_usage.c`

---

# **5. free() — Release Memory**

Frees dynamically allocated memory.

```c
free(p);
p = NULL;   // good practice
```

Characteristics:
- Prevents memory leaks
- Accessing freed memory is dangerous

Example file: `examples/free_memory.c`

---

# **6. Dynamic Arrays**

You can create arrays at runtime:

```c
int n;
scanf("%d", &n);

int *arr = malloc(n * sizeof(int));
```

Example file: `examples/dynamic_array.c`

---

# **7. Dangling Pointers**

A pointer becomes **dangling** when the memory it points to is freed.

```c
int *p = malloc(10 * sizeof(int));
free(p);
printf("%d", *p);  // ❌ undefined behavior
```

Example file: `examples/dangling_pointer_demo.c`

---

# **8. Common Pitfalls**

### **1. Forgetting to free memory**
Leads to memory leaks.

### **2. Using memory after free**
Dangling pointer access.

### **3. Not checking for NULL**
```c
int *p = malloc(1000000000);
if (p == NULL) { /* handle error */ }
```

### **4. Incorrect realloc usage**
```c
p = realloc(p, newSize);  // if fails, original pointer is lost
```

### **5. Mixing malloc/calloc with stack memory**
Never free stack memory.

---

# **9. Exercises**

Below are the 4 required exercises for Day 8.

---

## **Exercise 1 — Dynamic Array Input and Sum**
File: `exercises/exercise1.md`

Write a program that:
- Reads `n` from the user  
- Dynamically allocates an array of size `n`  
- Reads values  
- Computes and prints the sum  

---

## **Exercise 2 — Resize Array Using realloc()**
File: `exercises/exercise2.md`

Steps:
- Allocate an array of size `n`  
- Fill it  
- Ask user for new size  
- Use `realloc()` to resize  
- Print updated array  

---

## **Exercise 3 — calloc() Zero Initialization Demo**
File: `exercises/exercise3.md`

Write a program that:
- Allocates an array using `calloc()`  
- Prints all values to show they start at 0  

---

## **Exercise 4 — Avoiding Dangling Pointers**
File: `exercises/exercise4.md`

Write a program that:
- Allocates memory  
- Frees it  
- Sets pointer to NULL  
- Demonstrates safe handling  

---