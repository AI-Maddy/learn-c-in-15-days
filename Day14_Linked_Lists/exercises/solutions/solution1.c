#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void traverse(struct Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node *head = NULL, *temp = NULL;

    for (int i = 1; i <= 5; i++) {
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->data = i * 10;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }

    traverse(head);
    return 0;
}