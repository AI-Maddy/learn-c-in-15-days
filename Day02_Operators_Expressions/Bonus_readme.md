# **✨ Bonus Content (Optional but Useful)**

# **🔍 Truth Tables for Logical Operators**

Logical operators make more sense when you see how they behave with all possible inputs.

### AND (`&&`)

| A | B | A && B |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### OR (`\|\|`)

| A | B | A \|\| B |
|---|---|----------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### NOT (`!`)

| A | !A |
|---|----|
| 0 | 1 |
| 1 | 0 |

This section helps beginners visualize how conditions combine.

---

# **🧠 Bitwise Operator Visual Guide**

Bitwise operations are easier to grasp with binary examples.

### Example values  
```
a = 6 → 110  
b = 3 → 011
```

### AND (`&`)
```
110
011
---
010 → 2
```

### OR (`|`)
```
110
011
---
111 → 7
```

### XOR (`^`)
```
110
011
---
101 → 5
```

### Left Shift (`<<`)
```
110 << 1 → 1100 → 12
```

### Right Shift (`>>`)
```
110 >> 1 → 011 → 3
```

This visual block is great for learners who struggle with binary.

---

# **⚠️ More Expression Evaluation Pitfalls**

You already listed the major ones, but here are a few more subtle issues that trip up beginners.

### **1. Mixed-type arithmetic**
```
int a = 5;
float b = 2;
printf("%f", a / b);   // prints 2.000000, not 2.5
```
Because `a / b` is promoted to float **after** integer division.

### **2. Chained comparisons don’t work**
```
if (10 < x < 20)   // WRONG
```
C evaluates left to right:
- `10 < x` becomes 0 or 1  
- Then compares that to 20  

Correct version:
```
if (x > 10 && x < 20)
```

### **3. Undefined behavior with multiple increments**
```
int x = 5;
int y = x++ + ++x;   // undefined behavior
```
Never modify a variable more than once in a single expression.

### **4. Assignment returns a value**
```
if (x = 0)   // assigns 0, condition becomes false
```

### **5. Operator precedence surprises**
```
int x = 3 + 2 * 5;   // 13, not 25
```

These additions make Day 2 feel more complete and practical.

---

# **📝 Mini Quiz (Optional Section)**

You can add this at the bottom of the README.

### **1. What is the output?**
```
int x = 5;
printf("%d", x++ * ++x);
```

### **2. What does this print?**
```
printf("%d", 5 && 0 || 1);
```

### **3. Predict the result:**
```
int a = 4;   // 100
int b = 1;   // 001
printf("%d", a ^ b);
```

### **4. True or False**
`!5` evaluates to 0.

These help reinforce learning.

---

# **📌 Optional: Add a “Cheat Table” Summary**

A compact operator summary at the end helps learners revise quickly.

### Arithmetic  
`+  -  *  /  %`

### Relational  
`==  !=  >  <  >=  <=`

### Logical  
`&&  \|\|  !`

### Assignment  
`=  +=  -=  *=  /=  %=`

### Bitwise  
`&  |  ^  <<  >>  ~`

### Ternary  
`?:`

### Increment/Decrement  
`++  --`

This is great for exam prep.

---