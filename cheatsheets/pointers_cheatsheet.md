# Pointers Cheatsheet

## What is a pointer?
A variable that stores the address of another variable.

## Declaration
int *p;

## Assigning address
p = &x;

## Dereferencing
*p gives the value stored at the address.

## Pointer Arithmetic
p + 1 moves to next memory location (based on data type size).

## Common Mistakes
- Using uninitialized pointers
- Forgetting to allocate memory
- Dereferencing NULL pointers