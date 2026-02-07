---

# **top50_mcq.md**

```markdown
# Top 50 C Language MCQs for Interview Preparation

These MCQs cover pointers, memory, operators, arrays, functions, storage classes, and tricky output questions commonly asked in interviews.

---

## 1. What is the size of `char` in C?
A) 1 byte  
B) 2 bytes  
C) 4 bytes  
D) Depends on compiler  
**Answer: A**

---

## 2. What is the output of `sizeof('A')`?
A) 1  
B) 2  
C) 4  
D) Implementation dependent  
**Answer: C** (character literal is an int)

---

## 3. Which operator has the highest precedence?
A) +  
B) *  
C) ()  
D) =  
**Answer: C**

---

## 4. What is the default return type of a function if not specified?
A) int  
B) void  
C) float  
D) undefined  
**Answer: A**

---

## 5. Which of the following is NOT a storage class?
A) auto  
B) static  
C) register  
D) volatile  
**Answer: D** (volatile is a type qualifier)

---

## 6. What is the output of `printf("%d", 5["hello"]);`?
A) h  
B) e  
C) o  
D) undefined  
**Answer: C** (5["hello"] == "hello"[5] == 'o')

---

## 7. Which header defines `malloc()`?
A) stdio.h  
B) stdlib.h  
C) malloc.h  
D) memory.h  
**Answer: B**

---

## 8. What is the value of an uninitialized static int?
A) garbage  
B) 0  
C) -1  
D) undefined  
**Answer: B**

---

## 9. Which of the following is NOT a valid pointer type?
A) int *  
B) void *  
C) float **  
D) string *  
**Answer: D**

---

## 10. What is the output of `printf("%d", sizeof(3.14));`?
A) 4  
B) 8  
C) 2  
D) depends  
**Answer: B** (double literal)

---

## 11. Which of the following is true about arrays?
A) Array name is a pointer  
B) Array name decays to pointer  
C) Array name is modifiable  
D) Array name stores size  
**Answer: B**

---

## 12. What is the output of:
```c
int a=5; printf("%d", ++a + a++);
```
A) 11  
B) 12  
C) undefined behavior  
D) 10  
**Answer: C**

---

## 13. Which is NOT a valid string literal?
A) "Hello"  
B) "A"  
C) 'A'  
D) ""  
**Answer: C**

---

## 14. Which function is used to compare strings?
A) strcmp  
B) strcomp  
C) compare  
D) strcompare  
**Answer: A**

---

## 15. What is the output of:
```c
int x=10; int *p=&x; printf("%p", p);
```
A) address of x  
B) 10  
C) error  
D) garbage  
**Answer: A**

---

## 16. Which of the following is a correct function pointer?
A) int *fp(int,int)  
B) int (*fp)(int,int)  
C) int fp*(int,int)  
D) int fp(int,int)*  
**Answer: B**

---

## 17. What is the size of a pointer on a 64‑bit system?
A) 2 bytes  
B) 4 bytes  
C) 8 bytes  
D) depends on data type  
**Answer: C**

---

## 18. Which of the following is NOT a loop?
A) for  
B) while  
C) repeat  
D) do‑while  
**Answer: C**

---

## 19. What is the output of:
```c
printf("%d", sizeof(int*));
```
A) 2  
B) 4  
C) 8  
D) depends  
**Answer: C** (on 64‑bit)

---

## 20. Which keyword is used to define a constant?
A) const  
B) define  
C) static  
D) both A and B  
**Answer: D**

---

## 21. What is the output of:
```c
char *s="hello";
printf("%c", *s+2);
```
A) h  
B) j  
C) l  
D) error  
**Answer: B** ('h'+2 = 'j')

---

## 22. Which of the following is NOT a valid escape sequence?
A) \n  
B) \t  
C) \p  
D) \\  
**Answer: C**

---

## 23. Which operator is used to access structure members via pointer?
A) .  
B) ->  
C) *  
D) &  
**Answer: B**

---

## 24. What is the output of:
```c
int a[]={1,2,3};
printf("%d", 2[a]);
```
A) 1  
B) 2  
C) 3  
D) error  
**Answer: C**

---

## 25. Which of the following is true?
A) malloc initializes memory  
B) calloc initializes memory  
C) realloc initializes memory  
D) none  
**Answer: B**

---

## 26. Which of the following is NOT a valid C identifier?
A) _abc  
B) abc_123  
C) 1abc  
D) A1B2  
**Answer: C**

---

## 27. What is the output of:
```c
printf("%d", sizeof("hello"));
```
A) 5  
B) 6  
C) 4  
D) depends  
**Answer: B** (includes null terminator)

---

## 28. Which of the following is NOT a valid storage class?
A) auto  
B) static  
C) extern  
D) global  
**Answer: D**

---

## 29. Which of the following is used to dynamically allocate memory?
A) malloc  
B) calloc  
C) realloc  
D) all  
**Answer: D**

---

## 30. What is the output of:
```c
int x=5; printf("%d", x+++x);
```
A) 10  
B) 11  
C) undefined behavior  
D) 12  
**Answer: C**

---

## 31. Which of the following is a preprocessor directive?
A) #include  
B) #define  
C) #ifdef  
D) all  
**Answer: D**

---

## 32. Which of the following is true about enums?
A) They store strings  
B) They store integers  
C) They store floats  
D) They store pointers  
**Answer: B**

---

## 33. What is the output of:
```c
int x=257;
char *p=(char*)&x;
printf("%d", *p);
```
A) 1  
B) 257  
C) depends on endianness  
D) error  
**Answer: C**

---

## 34. Which of the following is NOT a bitwise operator?
A) &  
B) |  
C) ^  
D) &&  
**Answer: D**

---

## 35. What is the output of:
```c
int a=10,b=20;
printf("%d", a+++b);
```
A) 30  
B) 31  
C) undefined behavior  
D) 29  
**Answer: C**

---

## 36. Which of the following is true about void pointers?
A) They can store any address  
B) They cannot be dereferenced directly  
C) They must be cast before use  
D) All  
**Answer: D**

---

## 37. What is the output of:
```c
printf("%d", sizeof(void*));
```
A) 4  
B) 8  
C) 2  
D) depends  
**Answer: B**

---

## 38. Which of the following is NOT a valid string?
A) "hello"  
B) "hi\0"  
C) '\0'  
D) ""  
**Answer: C**

---

## 39. Which of the following is true about recursion?
A) Needs base case  
B) Uses stack  
C) Can cause overflow  
D) All  
**Answer: D**

---

## 40. What is the output of:
```c
int x=10;
printf("%d %d", x, x<<1);
```
A) 10 20  
B) 10 5  
C) 10 40  
D) error  
**Answer: A**

---

## 41. Which of the following is NOT a valid loop control statement?
A) break  
B) continue  
C) exit  
D) skip  
**Answer: D**

---

## 42. What is the output of:
```c
int a=5;
printf("%d", a==5);
```
A) 0  
B) 1  
C) true  
D) false  
**Answer: B**

---

## 43. Which of the following is true about arrays?
A) They are dynamic  
B) They are stored in contiguous memory  
C) They grow automatically  
D) They store mixed types  
**Answer: B**

---

## 44. What is the output of:
```c
int a=10;
int *p=&a;
printf("%d", *p+2);
```
A) 10  
B) 12  
C) 8  
D) error  
**Answer: B**

---

## 45. Which of the following is NOT a valid function declaration?
A) int f();  
B) int f(void);  
C) int f(int a);  
D) f(int a);  
**Answer: D**

---

## 46. What is the output of:
```c
printf("%d", sizeof(printf));
```
A) 4  
B) 8  
C) error  
D) implementation dependent  
**Answer: C**

---

## 47. Which of the following is true about `static`?
A) Retains value  
B) Default value = 0  
C) Internal linkage  
D) All  
**Answer: D**

---

## 48. What is the output of:
```c
int x=5;
printf("%d", x>3?10:20);
```
A) 10  
B) 20  
C) 5  
D) error  
**Answer: A**

---

## 49. Which of the following is NOT a valid pointer operation?
A) p++  
B) p--  
C) p = p + 3  
D) p = p * 2  
**Answer: D**

---

## 50. What is the output of:
```c
char s[]="abc";
printf("%c", *(&s[1]+1));
```
A) a  
B) b  
C) c  
D) error  
**Answer: C**

---
```

---