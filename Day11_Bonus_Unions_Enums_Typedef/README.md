# 📘 **Bonus 1 — README.md**

```
# Bonus 1 — Unions, Enums, and Typedef in C

This bonus chapter introduces three powerful C features that improve memory efficiency, readability, and code organization.

## Topics Covered
- Unions
- Enums
- Typedef
- Memory behavior of unions
- Using enums in switch-case
- Typedef with structs
- Exercises (4 minimum)

---

# 1. Unions

A union allows multiple members to share the same memory location.

Only **one member is valid at a time**.

Example:
```c
union Data {
    int i;
    float f;
    char c;
};
```

File: `examples/union_basic.c`

---

# 2. Enums

Enums create named integer constants.

```c
enum Day { MON, TUE, WED, THU, FRI };
```

File: `examples/enum_basic.c`

Enums improve readability and are commonly used in:
- State machines
- Switch-case logic
- Error codes

File: `examples/enum_switch_case.c`

---

# 3. Typedef

Typedef creates an alias for a type.

```c
typedef unsigned long ulong;
```

Useful for:
- Struct aliases
- Function pointer aliases
- Cleaner APIs

File: `examples/typedef_basic.c`
File: `examples/typedef_struct_demo.c`

---

# 4. Union Memory Behavior

Unions share memory, so the size equals the largest member.

File: `examples/union_memory_demo.c`

---

# 5. Exercises

## Exercise 1 — Basic Union
Create a union with int, float, and char. Assign values and print them.

## Exercise 2 — Enum + Switch
Create an enum for traffic light colors and print actions using switch-case.

## Exercise 3 — Typedef Struct
Use typedef to define a struct for a student and print details.

## Exercise 4 — Union in Struct
Create a struct that contains a union and demonstrate memory usage.

---

# Next Steps
You can add more bonus days:
- Bit manipulation
- File handling
- Preprocessor deep dive
- Mini projects

This bonus day completes the core C language features.
```

---