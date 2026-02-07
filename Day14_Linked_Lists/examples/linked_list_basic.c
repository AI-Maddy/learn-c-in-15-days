#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    printf("Node created with data = %d\n", head->data);

    free(head);
    return 0;
}