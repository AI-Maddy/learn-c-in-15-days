# Memory Management

## Memory Areas
- Stack: local variables
- Heap: dynamic memory (malloc, free)
- Data segment: global/static variables

## Dynamic Allocation
int *p = malloc(sizeof(int));
free(p);

## Common Errors
- Memory leaks
- Double free
- Using freed memory