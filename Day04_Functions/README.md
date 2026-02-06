# **Day 4 — Functions in C**

Functions are the building blocks of modular programming in C. They help you break large programs into smaller, reusable pieces, improve readability, and reduce repetition. Day 4 focuses on understanding how functions work, how data flows through them, and how scope and lifetime affect variables.

---

## **Topics Covered**

- What is a function  
- Function declaration, definition, and calling  
- Function parameters  
- Return values  
- Function prototypes  
- Variable scope and lifetime  
- Recursion  
- Common pitfalls  

---

# **1. What is a Function?**

A function is a block of code designed to perform a specific task.  
It has:

- A **name**  
- A **return type**  
- Optional **parameters**  
- A **body**  

Example:
```c
int add(int a, int b) {
    return a + b;
}
```

Example file: `examples/function_basics.c`

---

# **2. Function Declaration, Definition, and Calling**

### **Declaration (Prototype)**  
Tells the compiler the function’s name, return type, and parameters.

```c
int add(int, int);
```

### **Definition**  
Contains the actual code.

```c
int add(int x, int y) {
    return x + y;
}
```

### **Calling**  
Executes the function.

```c
int result = add(5, 3);
```

Example file: `examples/function_prototypes.c`

---

# **3. Function Parameters**

Parameters allow data to be passed into a function.

### **3.1 Pass by Value (default in C)**  
A copy of the variable is passed.

```c
void modify(int x) {
    x = 10;   // does NOT affect original
}
```

Example file: `examples/function_with_parameters.c`

---

# **4. Return Values**

Functions can return values using the `return` keyword.

```c
float multiply(float a, float b) {
    return a * b;
}
```

Example file: `examples/function_return_values.c`

---

# **5. Function Prototypes**

Prototypes allow functions to be used before they are defined.

```c
int sum(int, int);  // prototype

int main() {
    printf("%d", sum(3, 4));
}

int sum(int a, int b) {
    return a + b;
}
```

Why prototypes matter:
- Prevents compiler errors  
- Enables modular programming  
- Allows splitting code across multiple files  

Example file: `examples/function_prototypes.c`

---

# **6. Scope and Lifetime**

Scope determines **where** a variable can be accessed.  
Lifetime determines **how long** it exists.

### **6.1 Local Variables**
Declared inside a function → exist only during function execution.

### **6.2 Global Variables**
Declared outside all functions → accessible everywhere.

### **6.3 Static Variables**
Retain their value between function calls.

```c
void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}
```

Example file: `examples/scope_and_lifetime.c`

---

# **7. Recursion**

A function calling itself.

```c
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

Used for:
- Factorial  
- Fibonacci  
- Tree traversal  
- Divide‑and‑conquer algorithms  

Example file: `examples/recursion.c`

---

# **8. Common Pitfalls**

### **1. Missing return statement**
```c
int add(int a, int b) {
    a + b;   // wrong
}
```

### **2. Forgetting prototypes**
Leads to implicit declaration warnings.

### **3. Infinite recursion**
No base case → stack overflow.

### **4. Confusing local and global variables**
Local variables shadow globals.

### **5. Passing wrong data types**
Compiler may not warn without prototypes.

---

# **9. Exercises**

---

## **Exercise 1 — Sum of Digits**
File: `exercises/exercise1.md`

Write a function:

```c
int sumOfDigits(int n);
```

The function should:
- Take an integer  
- Return the sum of its digits  

Example:
```
Input: 1234
Output: 10
```

Solution: `exercises/solutions/solution1.c`

---

## **Exercise 2 — Recursive Factorial**
File: `exercises/exercise2.md`

Write a recursive function:

```c
int factorial(int n);
```

The program should:
- Accept a number  
- Print its factorial  
- Handle invalid input (negative numbers)  

Solution: `exercises/solutions/solution2.c`

---