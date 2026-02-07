# **Day 12 — Recursion in C**

Recursion is a programming technique where a function calls itself to solve a problem.  
It is especially useful for problems that can be broken into smaller subproblems of the same type.

Understanding recursion requires two key ideas:

- **Base case** — when to stop  
- **Recursive case** — when the function calls itself  

---

## **Topics Covered**

- What is recursion  
- Base case and recursive case  
- Stack behavior  
- Classic recursive problems  
- Tail recursion  
- Recursion vs iteration  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. What is Recursion?**

A recursive function is one that calls itself.

Example:
```c
int fact(int n) {
    if (n == 0) return 1;     // base case
    return n * fact(n - 1);   // recursive case
}
```

Example file: `examples/factorial_recursive.c`

---

# **2. Base Case and Recursive Case**

### **Base Case**
Stops the recursion.

### **Recursive Case**
Breaks the problem into smaller parts.

Example:
```c
if (n == 0) return 1;   // base case
return n + sum(n - 1);  // recursive case
```

---

# **3. How Recursion Works Internally (Call Stack)**

Each recursive call is pushed onto the **stack**.

Example: `fact(3)`  
- fact(3) → waits for fact(2)  
- fact(2) → waits for fact(1)  
- fact(1) → waits for fact(0)  
- fact(0) returns 1  
- stack unwinds back up  

---

# **4. Classic Recursive Problems**

### **4.1 Factorial**
`n! = n × (n-1)!`

File: `examples/factorial_recursive.c`

### **4.2 Fibonacci**
`fib(n) = fib(n-1) + fib(n-2)`

File: `examples/fibonacci_recursive.c`

### **4.3 Sum of digits**
File: `examples/sum_of_digits.c`

### **4.4 Power function**
File: `examples/power_function.c`

---

# **5. Tail Recursion**

A recursive function is **tail‑recursive** if the recursive call is the last operation.

Example:
```c
int tailSum(int n, int acc) {
    if (n == 0) return acc;
    return tailSum(n - 1, acc + n);
}
```

File: `examples/tail_recursion_demo.c`

---

# **6. Recursion vs Iteration**

| Feature | Recursion | Iteration |
|--------|-----------|-----------|
| Uses call stack | Yes | No |
| Memory usage | Higher | Lower |
| Code readability | Often simpler | Sometimes longer |
| Speed | Slower | Faster |
| Risk | Stack overflow | None |

File: `examples/recursion_vs_iteration.c`

---

# **7. Common Pitfalls**

### **1. Missing base case**
Leads to infinite recursion.

### **2. Wrong base case**
Function may never stop.

### **3. Too much recursion**
Deep recursion → stack overflow.

### **4. Inefficient recursion**
Fibonacci without memoization is slow.

### **5. Using recursion when iteration is simpler**
Not all problems need recursion.

---

# **8. Exercises**

Below are the 4 required exercises for Day 12.

---

## **Exercise 1 — Factorial Using Recursion**
File: `exercises/exercise1.md`

Write a recursive function to compute factorial of a number.

---

## **Exercise 2 — Reverse a String Recursively**
File: `exercises/exercise2.md`

Write a recursive function to print a string in reverse.

---

## **Exercise 3 — Count Digits Recursively**
File: `exercises/exercise3.md`

Write a recursive function:

```c
int countDigits(int n);
```

---

## **Exercise 4 — Sum of Array Elements Recursively**
File: `exercises/exercise4.md`

Write a recursive function to compute the sum of an array.

---