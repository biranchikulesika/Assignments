/*
* Description: This program creates a double circular linked list
* containing int data type and moves the first node to the last position.
* Author: Biranchi Kulesika
* Date: 11 July, 2025
* Assignment No.: 04
* Question No.: 02
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} DCLL;

DCLL *CreateNode(int value) {
    DCLL *newNode = (DCLL *)malloc(sizeof(DCLL));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = value;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void InsertAtEnd(DCLL **head, int value) {
    DCLL *newNode = CreateNode(value);
    if (newNode == NULL) {
        return;
    }

    if (*head == NULL) {
        newNode->next = newNode->prev = newNode;
        *head = newNode;
        return;
    }

    DCLL *last = (*head)->prev;

    newNode->next = *head;
    newNode->prev = last;
    last->next = newNode;
    (*head)->prev = newNode;
}

void MoveFirstToLast(DCLL **head) {
    if (*head == NULL || (*head)->next == *head) {
        return; // List is empty or has only one node
    }

    DCLL *old_head = *head;
    DCLL *new_head = old_head->next;
    DCLL *last = old_head->prev;

    // Update the 'last' node's next pointer to point to the old_head
    last->next = old_head;

    // Update the old_head's prev pointer to point to the 'last' node
    old_head->prev = last;

    // Update the old_head's next pointer to point to the new_head
    old_head->next = new_head;

    // Update the new_head's prev pointer to point to the old_head
    new_head->prev = old_head;

    // Update the head pointer to the new_head
    *head = new_head;
}

void PrintList(DCLL *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    DCLL *temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

void FreeList(DCLL **head) {
    if (*head == NULL) {
        return;
    }

    DCLL *current = *head;
    DCLL *last = (*head)->prev;

    last->next = NULL; // Break the circular link

    while (current != NULL) {
        DCLL *temp = current->next;
        free(current);
        current = temp;
    }
    *head = NULL;
}

int main() {
    DCLL *head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter int values separated by space:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        InsertAtEnd(&head, value);
    }

    printf("\nOriginal List:\n");
    PrintList(head);

    MoveFirstToLast(&head);

    printf("\nAfter moving first node to last:\n");
    PrintList(head);

    FreeList(&head);

    return 0;
}
