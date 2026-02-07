# Pointer Revision

Pointers are the most important topic in C interviews.

## 1. Pointer Basics
- Pointer stores address of a variable
- Dereferencing using *

## 2. Pointer Arithmetic
- p++, p--, p+n
- Works in units of data type size

## 3. Arrays & Pointers
- Array name decays to pointer
- arr[i] == *(arr + i)

## 4. Pointer to Pointer
- int **pp
- Used for modifying pointers inside functions

## 5. Function Pointers
- int (*fp)(int, int)
- Used for callbacks, dynamic dispatch

## 6. Void Pointers
- Generic pointer
- Must be cast before dereferencing

## 7. Common Traps
- Dangling pointers
- Wild pointers
- Double free