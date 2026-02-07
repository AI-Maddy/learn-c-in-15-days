# **Day 6 — Strings in C**

Strings in C are sequences of characters stored in **character arrays** and terminated by a special character: the **null character** `'\0'`.  
Understanding strings is essential because they form the basis of text processing, user input, file handling, and many real‑world applications.

Day 6 covers string basics, input/output, manual operations, standard library functions, traversal, and common pitfalls.

---

## **Topics Covered**

- What is a string  
- Declaring and initializing strings  
- String input and output  
- Manual string operations  
- Using `<string.h>` functions  
- Traversing strings  
- Passing strings to functions  
- Common pitfalls  

---

# **1. What is a String?**

A string in C is a **character array** ending with a null terminator `'\0'`.

Example:
```c
char name[10] = "John";
```

Memory layout:
```
J   o   h   n   \0
```

Example file: `examples/string_basics.c`

---

# **2. Declaring and Initializing Strings**

### **2.1 Character array**
```c
char str[20] = "Hello";
```

### **2.2 Character-by-character**
```c
char str[] = {'H', 'i', '\0'};
```

### **2.3 Empty string**
```c
char str[50] = "";
```

---

# **3. String Input and Output**

### **3.1 Using `scanf`**
```c
scanf("%s", str);   // stops at space
```

### **3.2 Using `gets` (unsafe, avoid)**  
Not recommended due to buffer overflow.

### **3.3 Using `fgets` (safe)**
```c
fgets(str, sizeof(str), stdin);
```

### **3.4 Printing strings**
```c
printf("%s", str);
```

Example file: `examples/string_input_output.c`

---

# **4. String Length (Manual & Library)**

### **4.1 Manual length calculation**
```c
int len = 0;
while (str[len] != '\0')
    len++;
```

### **4.2 Using `strlen()`**
```c
int len = strlen(str);
```

Example file: `examples/string_length.c`

---

# **5. Copying Strings**

### **5.1 Manual copy**
```c
int i = 0;
while ((dest[i] = src[i]) != '\0')
    i++;
```

### **5.2 Using `strcpy()`**
```c
strcpy(dest, src);
```

Example file: `examples/string_copy.c`

---

# **6. Concatenating Strings**

### **6.1 Manual concatenation**
```c
int i = 0, j = 0;
while (dest[i] != '\0') i++;
while ((dest[i++] = src[j++]) != '\0');
```

### **6.2 Using `strcat()`**
```c
strcat(dest, src);
```

Example file: `examples/string_concatenate.c`

---

# **7. Comparing Strings**

### **7.1 Manual comparison**
```c
int i = 0;
while (str1[i] == str2[i]) {
    if (str1[i] == '\0')
        break;
    i++;
}
```

### **7.2 Using `strcmp()`**
```c
if (strcmp(str1, str2) == 0)
    printf("Equal");
```

Example file: `examples/string_compare.c`

---

# **8. Traversing Strings**

```c
for (int i = 0; str[i] != '\0'; i++) {
    printf("%c ", str[i]);
}
```

Example file: `examples/string_traversal.c`

---

# **9. Passing Strings to Functions**

Strings decay to pointers when passed to functions.

```c
void printString(char s[]) {
    printf("%s", s);
}
```

Example file: `examples/string_with_functions.c`

---

# **10. Common Pitfalls**

### **1. Forgetting the null terminator**
```c
char s[4] = {'T','e','s','t'};  // missing '\0'
```

### **2. Buffer overflow**
Writing beyond array size.

### **3. Using `scanf("%s")` without size limit**
Unsafe for long input.

### **4. Comparing strings with `==`**
```c
if (str1 == str2)   // WRONG
```

### **5. Using uninitialized strings**
May contain garbage.

---

# **11. Exercises**

---

## **Exercise 1 — Count Vowels in a String**
File: `exercises/exercise1.md`

Write a program that:
- Reads a string  
- Counts the number of vowels (a, e, i, o, u)  
- Prints the count  

Solution: `exercises/solutions/solution1.c`

---

## **Exercise 2 — Reverse a String (Manual)**
File: `exercises/exercise2.md`

Write a program that:
- Reads a string  
- Reverses it manually (without `strrev`)  
- Prints the reversed string  

Solution: `exercises/solutions/solution2.c`

---