# **Day 3 — Control Flow in C**

Control flow determines *how* a program makes decisions and repeats actions. This is where C starts to feel powerful — you can branch logic, loop through data, and control exactly how your program behaves.

Day 3 covers all major decision‑making and looping constructs in C, along with examples, pitfalls, and best practices.

---

## **Topics Covered**

- `if`, `else if`, `else`  
- Nested `if`  
- `switch` statements  
- `for` loops  
- `while` loops  
- `do‑while` loops  
- `break` and `continue`  
- Common pitfalls in control flow  
- Choosing the right control structure (bonus in separate README)

---

# **1. Conditional Statements**

Conditional statements allow your program to make decisions based on conditions.

---

## **1.1 if / else if / else**

Used when you want to execute code based on boolean expressions.

```c
if (condition) {
    // executes if condition is true
} else if (another_condition) {
    // executes if previous condition was false
} else {
    // executes if none of the above are true
}
```

Example file: `examples/if_else.c`

---

## **1.2 Nested if**

Useful when decisions depend on multiple layers of conditions.

Example file: `examples/nested_if.c`

---

## **1.3 Common pitfalls**

- Using `=` instead of `==`  
- Forgetting braces in multi‑line blocks  
- Deep nesting → unreadable code  
- Overusing `if` chains instead of `switch`  

---

# **2. switch Case Statements**

`switch` is ideal when checking a single variable against multiple constant values.

```c
switch (value) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    default:
        // fallback
}
```

Example file: `examples/switch_case.c`

### **When to use switch**
- Menu systems  
- Key input handling  
- State machines  
- Multiple fixed integer/char options  

### **Pitfalls**
- Forgetting `break` → fall‑through  
- Cannot use ranges or expressions  
- Only works with integers, chars, enums  

---

# **3. Loops**

Loops allow you to repeat actions until a condition changes.

---

## **3.1 for Loop**

Best when the number of iterations is known.

```c
for (int i = 0; i < n; i++) {
    // repeated code
}
```

Example file: `examples/for_loop.c`

---

## **3.2 while Loop**

Runs as long as the condition is true.

```c
while (condition) {
    // repeated code
}
```

Example file: `examples/while_loop.c`

---

## **3.3 do‑while Loop**

Runs **at least once**, then checks the condition.

```c
do {
    // code
} while (condition);
```

Example file: `examples/do_while_loop.c`

---

## **3.4 break and continue**

### **break**
Exits the loop immediately.

### **continue**
Skips the current iteration and moves to the next.

Example file: `examples/break_continue.c`

---

# **4. Common Pitfalls in Control Flow**

### **Infinite loops**
```c
while (x < 10) {
    // forgetting to update x
}
```

### **Misplaced semicolons**
```c
while (x < 10);   // loop ends immediately
```

### **Switch fall‑through**
```c
case 1:
    doSomething();   // missing break
```

### **Nested if complexity**
Deep nesting reduces readability — consider restructuring.

### **Using floating‑point in switch**
Not allowed.

---

# **5. Exercises**

---

## **Exercise 1 — Number Classification**
File: `exercises/exercise1.md`

Write a program that:
- Takes an integer input  
- Prints whether it is:
  - Positive  
  - Negative  
  - Zero  
- If positive, also print whether it is even or odd  

Solution: `exercises/solutions/solution1.c`

---

## **Exercise 2 — Simple Menu System**
File: `exercises/exercise2.md`

Create a menu:

```
1. Add
2. Subtract
3. Multiply
4. Exit
```

- Use `switch`  
- Perform the selected operation  
- Loop until the user chooses Exit  

Solution: `exercises/solutions/solution2.c`

---

# **6. Bonus Material**
(Provided in your separate bonus README)

- Loop comparison (for vs while vs do‑while)  
- Conditional branching comparison (if/else vs switch)  
- Pitfalls and best practices  

---