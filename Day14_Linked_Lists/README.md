# **Day 14 — Linked Lists in C**

A linked list is a dynamic data structure made of **nodes**, where each node stores:

- Data  
- A pointer to the next node  

Unlike arrays, linked lists grow and shrink at runtime using dynamic memory.

---

## **Topics Covered**

- What is a linked list  
- Node structure  
- Creating nodes  
- Traversing a linked list  
- Inserting at beginning  
- Inserting at end  
- Deleting a node  
- Searching in a linked list  
- Common pitfalls  
- Exercises (4 minimum)

---

# **1. What is a Linked List?**

A linked list is a sequence of nodes connected using pointers.

Each node typically looks like:

```c
struct Node {
    int data;
    struct Node *next;
};
```

Example file: `examples/linked_list_basic.c`

---

# **2. Creating a Node**

Nodes are created using `malloc()`:

```c
struct Node *newNode = malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
```

---

# **3. Traversing a Linked List**

Start from the head and follow the `next` pointers:

```c
struct Node *temp = head;
while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
}
```

Example file: `examples/traverse_linked_list.c`

---

# **4. Inserting Nodes**

---

## **4.1 Insert at Beginning**

Steps:

1. Create a new node  
2. Point its `next` to current head  
3. Update head  

Example file: `examples/insert_beginning.c`

---

## **4.2 Insert at End**

Steps:

1. Create a new node  
2. Traverse to last node  
3. Link last node to new node  

Example file: `examples/insert_end.c`

---

# **5. Deleting a Node**

To delete a node:

1. Find the node  
2. Adjust pointers  
3. Free memory  

Example file: `examples/delete_node.c`

---

# **6. Searching in a Linked List**

Linear search through nodes:

```c
while (temp != NULL) {
    if (temp->data == key)
        return 1;
    temp = temp->next;
}
```

Example file: `examples/search_linked_list.c`

---

# **7. Common Pitfalls**

### **1. Forgetting to update head**
Especially when inserting or deleting at the beginning.

### **2. Memory leaks**
Not freeing deleted nodes.

### **3. Dereferencing NULL pointers**
Always check before accessing.

### **4. Infinite loops**
Caused by incorrect pointer updates.

### **5. Losing nodes**
If you overwrite a pointer before saving the next node.

---

# **8. Exercises**

Below are the 4 required exercises for Day 14.

---

## **Exercise 1 — Create and Traverse a Linked List**
File: `exercises/exercise1.md`

Create a linked list of 5 nodes and print all elements.

---

## **Exercise 2 — Insert at Beginning**
File: `exercises/exercise2.md`

Write a function to insert a node at the beginning of a linked list.

---

## **Exercise 3 — Insert at End**
File: `exercises/exercise3.md`

Write a function to insert a node at the end of a linked list.

---

## **Exercise 4 — Delete a Node**
File: `exercises/exercise4.md`

Write a function to delete the first occurrence of a given value.

---