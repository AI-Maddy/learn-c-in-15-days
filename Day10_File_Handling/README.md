# **Day 10 — File Handling in C**

File handling allows C programs to store data permanently on disk and retrieve it later. This is essential for applications like databases, logging systems, configuration files, and report generation.

C provides a set of functions for working with files through the `FILE*` pointer and the `fopen()` family of functions.

---

## **Topics Covered**

- What is a file  
- File modes (`r`, `w`, `a`, `r+`, `w+`, `a+`)  
- Opening and closing files  
- Writing to files  
- Reading from files  
- Appending to files  
- Checking if a file exists  
- Working with binary files  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. What is a File?**

A file is a collection of data stored on disk.  
C interacts with files using a pointer of type:

```c
FILE *fp;
```

---

# **2. Opening a File**

Use `fopen()`:

```c
FILE *fp = fopen("data.txt", "r");
```

If the file cannot be opened, `fopen()` returns `NULL`.

---

# **3. File Modes**

| Mode | Meaning |
|------|---------|
| `"r"` | Read (file must exist) |
| `"w"` | Write (creates new file or overwrites existing) |
| `"a"` | Append (writes at end) |
| `"r+"` | Read + write (file must exist) |
| `"w+"` | Read + write (overwrites file) |
| `"a+"` | Read + append |

Example file: `examples/file_write.c`

---

# **4. Closing a File**

Always close files after use:

```c
fclose(fp);
```

---

# **5. Writing to Files**

Use `fprintf()` or `fputs()`:

```c
fprintf(fp, "Hello World");
```

Example file: `examples/file_write.c`

---

# **6. Reading from Files**

Use `fscanf()` or `fgets()`:

```c
fscanf(fp, "%d", &x);
```

or

```c
fgets(str, 100, fp);
```

Example file: `examples/file_read.c`

---

# **7. Appending to Files**

Open with `"a"` or `"a+"`:

```c
fp = fopen("log.txt", "a");
fprintf(fp, "New entry\n");
```

Example file: `examples/file_append.c`

---

# **8. Checking if a File Exists**

```c
FILE *fp = fopen("data.txt", "r");
if (fp == NULL) {
    printf("File not found\n");
}
```

Example file: `examples/file_exists_check.c`

---

# **9. Reading and Writing Binary Files**

Binary files store raw bytes.

### **Writing**
```c
fwrite(&num, sizeof(int), 1, fp);
```

### **Reading**
```c
fread(&num, sizeof(int), 1, fp);
```

Example file: `examples/binary_file_demo.c`

---

# **10. Common Pitfalls**

### **1. Forgetting to close files**
Leads to data loss or corruption.

### **2. Using wrong mode**
Opening in `"w"` deletes existing content.

### **3. Not checking for NULL**
```c
if (fp == NULL) { /* handle error */ }
```

### **4. Mixing text and binary operations**

### **5. Reading beyond end of file**
Use `feof(fp)` to detect EOF.

---

# **11. Exercises**

Below are the 4 required exercises for Day 10.

---

## **Exercise 1 — Write and Read a File**
File: `exercises/exercise1.md`

Write a program that:
- Writes a sentence to a file  
- Reads it back  
- Prints it  

---

## **Exercise 2 — Count Words in a File**
File: `exercises/exercise2.md`

Write a program that:
- Opens a text file  
- Counts the number of words  
- Prints the count  

---

## **Exercise 3 — Append Log Entries**
File: `exercises/exercise3.md`

Write a program that:
- Opens a file in append mode  
- Adds a timestamped log entry  
- Closes the file  

---

## **Exercise 4 — Binary File: Store Integers**
File: `exercises/exercise4.md`

Write a program that:
- Stores `n` integers in a binary file  
- Reads them back  
- Prints them  

---