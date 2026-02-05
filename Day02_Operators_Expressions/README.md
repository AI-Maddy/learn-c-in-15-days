# **Day 2 — Operators and Expressions**

Operators form the backbone of expression evaluation in C. They allow you to perform calculations, compare values, make decisions, manipulate bits, and control how expressions are evaluated. Understanding operators deeply is essential for writing correct, efficient, and predictable C programs.

---

## **Topics Covered**

- Arithmetic operators  
- Relational operators  
- Logical operators  
- Assignment operators  
- Increment & decrement  
- Bitwise operators  
- Ternary operator  
- **Operator precedence**  
- **Expression evaluation pitfalls**

---

## **1. Arithmetic Operators**

Used for basic mathematical operations.

| Operator | Meaning |
|---------|---------|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Modulus (remainder) |

Example file: `examples/arithmetic_ops.c`

---

## **2. Relational Operators**

Used to compare values. The result is either **true (1)** or **false (0)**.

| Operator | Meaning |
|---------|---------|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater or equal |
| `<=` | Less or equal |

Example file: `examples/relational_ops.c`

---

## **3. Logical Operators**

Used to combine or invert conditions.

| Operator | Meaning |
|---------|---------|
| `&&` | Logical AND |
| `\|\|` | Logical OR |
| `!` | Logical NOT |

Example file: `examples/logical_ops.c`

---

## **4. Assignment Operators**

Shortcuts for updating variable values.

| Operator | Equivalent To |
|---------|----------------|
| `a += b` | `a = a + b` |
| `a -= b` | `a = a - b` |
| `a *= b` | `a = a * b` |
| `a /= b` | `a = a / b` |
| `a %= b` | `a = a % b` |

Example file: `examples/assignment_ops.c`

---

## **5. Increment & Decrement**

| Operator | Meaning |
|---------|---------|
| `++x` | Pre-increment |
| `x++` | Post-increment |
| `--x` | Pre-decrement |
| `x--` | Post-decrement |

Example file: `examples/increment_decrement.c`

---

## **6. Bitwise Operators**

Operate directly on binary representations — essential in embedded systems, flags, and low-level programming.

| Operator | Meaning |
|---------|---------|
| `&` | AND |
| `|` | OR |
| `^` | XOR |
| `<<` | Left shift |
| `>>` | Right shift |
| `~` | Bitwise NOT |

Example file: `examples/bitwise_ops.c`

---

## **7. Ternary Operator**

A compact alternative to `if-else`.

```
condition ? value_if_true : value_if_false
```

Example file: `examples/ternary_operator.c`

---

## **8. Operator Precedence**

Determines which operator is evaluated first in an expression.

High → Low:

1. `()`  
2. `++` `--`  
3. `*` `/` `%`  
4. `+` `-`  
5. `<` `>` `<=` `>=`  
6. `==` `!=`  
7. `&&`  
8. `||`  
9. `=` `+=` `-=`  

Example file: `examples/operator_precedence.c`

---

## **9. Expression Evaluation Pitfalls**

These are common mistakes that lead to bugs:

### **Integer division truncation**
`5 / 2` gives `2`, not `2.5`.

### **Post-increment confusion**
`x++` returns old value, then increments.

### **Assignment inside conditions**
`if (x = 5)` is valid but wrong — it assigns, not compares.

### **Bitwise vs logical**
- `&` is bitwise  
- `&&` is logical  

### **Undefined order of evaluation**
C does not guarantee left-to-right evaluation in all expressions.

---

## **Exercises**

### **Exercise 1 — Grade Checker**  
File: `exercises/exercise1.md`

Write a program that:
- Takes a score (0–100)
- Prints `"Pass"` if score ≥ 50  
- Prints `"Fail"` otherwise  

Use relational and logical operators.

Solution: `exercises/solutions/solution1.c`

---

### **Exercise 2 — Bitwise Flag Manipulation**  
File: `exercises/exercise2.md`

Given an integer representing flags:
- Set bit 2  
- Clear bit 1  
- Toggle bit 0  

Print the result after each operation.

Solution: `exercises/solutions/solution2.c`

---