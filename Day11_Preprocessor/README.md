# **Day 11 — Preprocessor Directives in C**

The C preprocessor runs **before** the compiler. It processes commands that begin with `#` and performs tasks like macro expansion, file inclusion, and conditional compilation.

Understanding the preprocessor is essential for writing modular programs, avoiding repetition, and controlling compilation behavior.

---

## **Topics Covered**

- What is the preprocessor  
- `#define` macros  
- Macro functions  
- `#include`  
- Conditional compilation  
- Header guards  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. What is the Preprocessor?**

The preprocessor modifies your code *before* compilation.  
It handles:

- Macros  
- File inclusion  
- Conditional compilation  
- Symbolic constants  

It does **not** check types or syntax — it simply performs text substitution.

---

# **2. #define — Macros and Constants**

### **2.1 Symbolic constants**
```c
#define PI 3.14
#define MAX 100
```

### **2.2 Multi‑word replacement**
```c
#define MSG "Hello World"
```

Example file: `examples/macro_basics.c`

---

# **3. Macro Functions**

Macros can behave like functions but are expanded inline.

```c
#define SQUARE(x) ((x) * (x))
```

Important: Always use parentheses to avoid precedence issues.

Example file: `examples/macro_functions.c`

---

# **4. #include — File Inclusion**

### **4.1 Standard headers**
```c
#include <stdio.h>
```

### **4.2 User‑defined headers**
```c
#include "myheader.h"
```

Example file: `examples/include_demo.c`

---

# **5. Conditional Compilation**

Used to compile code selectively.

### **5.1 #ifdef**
```c
#ifdef DEBUG
printf("Debug mode\n");
#endif
```

### **5.2 #ifndef**
```c
#ifndef LIMIT
#define LIMIT 100
#endif
```

### **5.3 #if / #elif / #else**
```c
#if VERSION == 1
    printf("Version 1\n");
#elif VERSION == 2
    printf("Version 2\n");
#else
    printf("Unknown version\n");
#endif
```

Example file: `examples/conditional_compilation.c`

---

# **6. Header Guards**

Prevents multiple inclusion of the same header file.

```c
#ifndef MYHEADER_H
#define MYHEADER_H

// declarations

#endif
```

Example files:  
- `examples/header_guard_demo.h`  
- `examples/header_guard_usage.c`

---

# **7. Common Pitfalls**

### **1. Missing parentheses in macro functions**
```c
#define SQUARE(x) x*x   // wrong
```

### **2. Using macros instead of real functions unnecessarily**

### **3. Forgetting header guards in custom headers**

### **4. Debug macros left enabled in production**

### **5. Macro name collisions**
Macros have global scope.

---

# **8. Exercises**

Below are the 4 required exercises for Day 11.

---

## **Exercise 1 — Define Constants Using Macros**
File: `exercises/exercise1.md`

Define macros for:
- PI  
- MAX_SIZE  
- A welcome message  

Print them in a program.

---

## **Exercise 2 — Macro Function: Maximum of Two Numbers**
File: `exercises/exercise2.md`

Create a macro:

```c
#define MAX(a,b)
```

Use it to find the maximum of two numbers.

---

## **Exercise 3 — Conditional Compilation Demo**
File: `exercises/exercise3.md`

Use:

- `#ifdef DEBUG`  
- `#ifndef RELEASE`  

Print different messages based on which macro is defined.

---

## **Exercise 4 — Header Guard Practice**
File: `exercises/exercise4.md`

Create a header file with:

- A macro  
- A function declaration  
- Proper header guards  

Include it in a `.c` file and call the function.

---