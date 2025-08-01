/*
* Description: This program creates a single circular linked list
* containing float data type and inserts a Node at the end of the list.
* Author: Biranchi Kulesika
* Date: 11 July, 2025
* Assignment No.: 04
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    float data;
    struct Node *next;
} CSLL;

CSLL *CreateNode(float value) {
    CSLL *newNode = (CSLL *)malloc(sizeof(CSLL));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = newNode;
    return newNode;
}

void InsertAtEnd(CSLL **head, float value) {
    CSLL *newNode = CreateNode(value);
    if (newNode == NULL) {
        return;
    }

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    CSLL *temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *head;
}

void PrintList(CSLL *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    CSLL *temp = head;
    do {
        printf("%.2f -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

void FreeList(CSLL **head) {
    if (*head == NULL) {
        return;
    }

    CSLL *current = *head;
    CSLL *last = *head;

    while (last->next != *head) {
        last = last->next;
    }
    last->next = NULL; // Break the circular link

    while (current != NULL) {
        CSLL *temp = current->next;
        free(current);
        current = temp;
    }
    *head = NULL;
}

int main() {
    CSLL *head = NULL;
    int n;
    float value;

    printf("Enter number of items in the list: ");
    scanf("%d", &n);

    printf("Enter float values separated by space:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &value);
        InsertAtEnd(&head, value);
    }

    printf("\nList before insertion:\n");
    PrintList(head);

    printf("\nEnter a float value to insert at end: ");
    scanf(" %f", &value);
    InsertAtEnd(&head, value);

    printf("\nList after insertion:\n");
    PrintList(head);

    FreeList(&head);

    return 0;
}
