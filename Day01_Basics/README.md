## **Day 1 — Basics, Setup, and First Program**

Day 1 introduces the foundation of C programming. You’ll learn how a C program is structured, how to compile it, and how to write your first few programs.

---

## **Topics Covered**

- What is C and why it matters  
- Installing a compiler (GCC)  
- Structure of a C program  
- `main()` function  
- `printf()` and `scanf()`  
- Variables & basic data types  
- Comments  
- Compiling and running a program  

---

## **What is C and Why It Matters**

C is a general‑purpose, procedural programming language created in the early 1970s. Despite its age, it remains one of the most influential languages ever designed.

Key reasons C still matters:

- **Foundation for modern languages**  
  C directly influenced C++, Java, C#, Go, Rust, and many others.

- **Close to hardware**  
  You control memory, pointers, and low‑level operations — essential for embedded systems, OS kernels, and performance‑critical software.

- **Portable and efficient**  
  C programs run on almost every platform with minimal changes.

- **Industry relevance**  
  Used in operating systems, compilers, embedded devices, databases, networking stacks, and more.

- **Interview importance**  
  Many core CS concepts (memory, pointers, data structures) are best understood through C.

Learning C gives you a strong foundation for everything else.

---

## **Installing a Compiler (GCC)**

To run C programs, you need a compiler. The most common one is **GCC (GNU Compiler Collection)**.

### **If you're using WSL (Ubuntu/Debian)**  
You already have the perfect environment.

Install GCC:

```bash
sudo apt update
sudo apt install build-essential
```

Verify installation:

```bash
gcc --version
```

You should see version details printed.

### **If you're using Windows without WSL**  
(You can skip this since you’re already on WSL, but adding it for completeness.)

Options include:

- **MinGW-w64**
- **TDM-GCC**
- **MSYS2**
- **Visual Studio Build Tools**

But WSL + GCC is the cleanest setup for learning.

---

## **1. Structure of a C Program**

```c
#include <stdio.h>

int main() {
    // code goes here
    return 0;
}
```

- `#include <stdio.h>` → imports standard I/O functions  
- `main()` → entry point  
- `return 0;` → indicates successful execution  

---

## **2. Your First Program**

File: `examples/hello_world.c`

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## **3. Variables and Data Types**

File: `examples/variables.c`

```c
#include <stdio.h>

int main() {
    int age = 20;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

## **4. Input and Output**

File: `examples/input_output.c`

```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("You entered: %d\n", num);
    return 0;
}
```

## **Common Mistakes**

- Forgetting `&` in `scanf()`  
- Missing semicolon  
- Using wrong format specifier (`%d`, `%f`, `%c`)  
- Not including `<stdio.h>`  

---