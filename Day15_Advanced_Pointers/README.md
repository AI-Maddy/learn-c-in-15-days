# **Day 15 — Advanced Pointers in C**

Pointers are one of the most powerful features of C.  
Today you go beyond the basics and explore advanced pointer concepts used in real‑world systems, libraries, and interviews.

This chapter covers:

- Pointer to pointer  
- Pointer arrays vs array of pointers  
- Function pointers  
- Callback functions  
- Void pointers  
- Pointer arithmetic pitfalls  

By the end of this day, learners will understand how C handles memory at a deeper level.

---

## **Topics Covered**

- Pointer to pointer (`int **p`)  
- Pointer arrays  
- Array of pointers  
- Function pointers  
- Callback functions  
- Void pointers  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. Pointer to Pointer (`int **p`)**

A pointer can store the address of another pointer.

```c
int x = 10;
int *p = &x;
int **pp = &p;
```

Useful for:

- Dynamic 2D arrays  
- Linked list operations (modifying head)  
- Functions that need to update a pointer  

Example file: `examples/pointer_to_pointer.c`

---

# **2. Pointer Arrays**

An array where each element is a pointer.

```c
int *arr[5];
```

Used for:

- Storing addresses of variables  
- Storing strings  
- Managing dynamic memory blocks  

Example file: `examples/pointer_arrays.c`

---

# **3. Array of Pointers vs Pointer to Array**

These two look similar but behave differently.

### **Array of pointers**
```c
int *arr[3];
```
- `arr` is an array  
- Each element is a pointer  

### **Pointer to an array**
```c
int (*ptr)[3];
```
- `ptr` points to an entire array  

Example file: `examples/array_of_pointers.c`

---

# **4. Function Pointers**

A pointer that stores the address of a function.

```c
int add(int a, int b) { return a + b; }

int (*fp)(int, int) = add;
```

Used in:

- Callbacks  
- Event‑driven systems  
- Sorting with custom comparators  
- State machines  

Example file: `examples/function_pointers.c`

---

# **5. Callback Functions**

A callback is a function passed as an argument to another function.

```c
void process(int x, int (*func)(int)) {
    printf("%d\n", func(x));
}
```

Example file: `examples/callback_demo.c`

---

# **6. Void Pointers**

A pointer that can hold the address of any data type.

```c
void *ptr;
int x = 10;
ptr = &x;
```

Must be cast before dereferencing.

Used in:

- Generic functions  
- Memory management (`malloc`, `calloc`)  
- Libraries that handle multiple data types  

Example file: `examples/void_pointers.c`

---

# **7. Common Pitfalls**

### **1. Dereferencing without casting**
Especially with void pointers.

### **2. Losing track of pointer levels**
`int *p`, `int **pp`, `int ***ppp`

### **3. Incorrect function pointer signatures**
The parameters must match exactly.

### **4. Confusing array‑pointer equivalence**
Arrays decay to pointers, but they are not the same.

### **5. Dangling pointers**
Using memory after `free()`.

---

# **8. Exercises**

Below are the 4 required exercises for Day 15.

---

## **Exercise 1 — Pointer to Pointer**
File: `exercises/exercise1.md`

Write a program using `int **pp` to modify a variable through two levels of indirection.

---

## **Exercise 2 — Array of Pointers**
File: `exercises/exercise2.md`

Create an array of string pointers and print all strings.

---

## **Exercise 3 — Function Pointer Calculator**
File: `exercises/exercise3.md`

Use function pointers to implement a simple calculator with:

- add  
- subtract  
- multiply  
- divide  

---

## **Exercise 4 — Callback Function**
File: `exercises/exercise4.md`

Write a function that accepts a callback and applies it to each element of an array.

---