# **Day 9 — Structures in C**

Structures allow you to group different data types under a single name. They are essential for modeling real‑world entities like students, employees, books, products, and more.

Day 9 introduces structure basics, initialization, arrays of structures, nested structures, structure pointers, and passing structures to functions.

---

## **Topics Covered**

- What is a structure  
- Declaring and defining structures  
- Initializing structures  
- Accessing structure members  
- Arrays of structures  
- Nested structures  
- Structure pointers  
- Passing structures to functions  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. What is a Structure?**

A structure is a user‑defined data type that groups variables of different types.

Example:
```c
struct Student {
    int roll;
    char name[20];
    float marks;
};
```

Example file: `examples/struct_basics.c`

---

# **2. Declaring and Initializing Structures**

### **2.1 Declaration**
```c
struct Employee {
    int id;
    float salary;
};
```

### **2.2 Creating variables**
```c
struct Employee e1;
```

### **2.3 Initialization**
```c
struct Employee e1 = {101, 55000.5};
```

### **2.4 Designated initialization**
```c
struct Employee e2 = {.salary = 60000.0, .id = 102};
```

Example file: `examples/struct_initialization.c`

---

# **3. Accessing Structure Members**

Use the dot operator:

```c
e1.id = 101;
printf("%d", e1.id);
```

---

# **4. Arrays of Structures**

You can store multiple records:

```c
struct Student s[3];
```

Access:
```c
s[0].roll = 1;
```

Example file: `examples/struct_array.c`

---

# **5. Nested Structures**

A structure inside another structure.

```c
struct Date {
    int day, month, year;
};

struct Person {
    char name[20];
    struct Date dob;
};
```

Example file: `examples/nested_struct.c`

---

# **6. Structure Pointers**

Pointers to structures allow dynamic access.

```c
struct Student s1 = {1, "Sasi", 95.5};
struct Student *p = &s1;

printf("%d", p->roll);   // arrow operator
```

Example file: `examples/struct_pointer.c`

---

# **7. Passing Structures to Functions**

### **7.1 Pass by value**
```c
void display(struct Student s);
```

### **7.2 Pass by reference**
```c
void update(struct Student *s);
```

Example file: `examples/passing_struct_to_function.c`

---

# **8. Common Pitfalls**

### **1. Forgetting to use `->` with pointers**
```c
p->id   // correct
p.id    // wrong
```

### **2. Not allocating enough space for strings**

### **3. Mixing structure assignment with string copy**
```c
s1.name = "John";  // wrong
strcpy(s1.name, "John");  // correct
```

### **4. Uninitialized structure members**

### **5. Incorrect nested access**
```c
p.dob.day   // wrong
p.dob.day   // correct
```

---

# **9. Exercises**

Below are the 4 required exercises for Day 9.

---

## **Exercise 1 — Student Record**
File: `exercises/exercise1.md`

Create a structure `Student` with:
- roll number  
- name  
- marks  

Read and print details of one student.

---

## **Exercise 2 — Array of Employees**
File: `exercises/exercise2.md`

Create a structure `Employee` with:
- id  
- name  
- salary  

Read details of `n` employees and print them.

---

## **Exercise 3 — Nested Structure: Date of Birth**
File: `exercises/exercise3.md`

Create:
- `struct Date`  
- `struct Person` containing a Date  

Read and print a person’s details.

---

## **Exercise 4 — Structure Pointer Update**
File: `exercises/exercise4.md`

Write a function:

```c
void updateSalary(struct Employee *e, float increment);
```

Use it to increase salary of an employee.

---