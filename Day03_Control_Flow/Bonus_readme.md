# **Loop Comparison — When to Use Which Loop**

Loops all repeat code, but each one has a different purpose and ideal use case.

## **for loop**
Best when:
- You know the number of iterations in advance  
- You’re iterating over a range  
- You want initialization, condition, and update in one place  

Typical pattern:
```c
for (int i = 0; i < n; i++) { ... }
```

### Strengths
- Clean and compact  
- Perfect for counting loops  
- Easy to read  

### Pitfalls
- Off‑by‑one errors (`i <= n` vs `i < n`)  
- Updating the loop variable inside the loop body  

---

## **while loop**
Best when:
- You *don’t* know how many times the loop will run  
- You loop until a condition becomes false  
- Input‑driven or state‑driven loops  

Typical pattern:
```c
while (condition) { ... }
```

### Strengths
- Great for “run until something happens”  
- Good for reading input until EOF or sentinel values  

### Pitfalls
- Forgetting to update the condition → infinite loop  
- Condition may be false on the first check → loop never runs  

---

## **do‑while loop**
Best when:
- You want the loop to run **at least once**  
- Menu systems, retry prompts, input validation  

Typical pattern:
```c
do {
    ...
} while (condition);
```

### Strengths
- Guaranteed one execution  
- Ideal for user‑driven loops  

### Pitfalls
- Beginners forget the semicolon after `while(condition);`  
- Can accidentally run when not intended if logic is wrong  

---

# **Summary Table — Loop Selection**

| Loop Type | Use When | Runs At Least Once | Common Pitfall |
|----------|----------|--------------------|----------------|
| **for** | Known iteration count | No | Off‑by‑one errors |
| **while** | Condition‑driven repetition | No | Infinite loops |
| **do‑while** | Must run once before checking | Yes | Missing semicolon |

---

# **Conditional Branching Comparison — if/else vs switch**

Both are used for decision‑making, but they shine in different situations.

## **if / else if / else**
Best when:
- Conditions are **ranges**, **complex expressions**, or **multiple variables**  
- Logic requires relational or logical operators  

Example:
```c
if (x > 10 && y < 5) { ... }
```

### Strengths
- Extremely flexible  
- Can handle any boolean expression  

### Pitfalls
- Long chains become hard to read  
- Easy to mis‑order conditions  
- Beginners sometimes forget braces  

---

## **switch**
Best when:
- You’re checking **one variable**  
- Against **multiple constant values**  
- Like menu choices, key presses, states  

Example:
```c
switch (option) {
    case 1: ...
    case 2: ...
}
```

### Strengths
- Cleaner than long if‑else chains  
- Faster in some cases  
- Easy to maintain  

### Pitfalls
- Only works with integers, chars, enums (not ranges)  
- Forgetting `break` → fall‑through bugs  
- Duplicate case values cause compile errors  

---

# **Summary Table — Conditional Branching**

| Construct | Use When | Supports Ranges? | Supports Expressions? | Pitfalls |
|-----------|----------|------------------|------------------------|----------|
| **if / else** | Complex conditions | Yes | Yes | Hard to read when long |
| **switch** | Many fixed values | No | No | Missing `break` |

---

# **Common Pitfalls Across Control Flow**

- Infinite loops due to missing updates  
- Using `=` instead of `==` in conditions  
- Misplaced braces changing logic  
- Forgetting that `switch` cannot evaluate expressions  
- Using floating‑point values in `switch` (not allowed)  
- Nested loops without clear exit conditions  

---