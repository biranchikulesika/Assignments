/*
* Description: This program creates a double linked list
* and performs operations like inserting a character at the first position
* and deleting a character at any given position.
* Author: Biranchi Kulesika
* Date: 11 July, 2025
* Assignment No.: 03
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data;
    struct Node *prev;
    struct Node *next;
} DLL;

DLL *CreateNode(char value) {
    DLL *newNode = (DLL *)malloc(sizeof(DLL));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = newNode->prev = NULL;
    return newNode;
}

void InsertAtPosition(DLL **head, char value, int pos) {
    DLL *newNode = CreateNode(value);
    if (newNode == NULL) {
        return;
    }

    if (pos == 1) {
        newNode->next = *head;
        if (*head) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }

    DLL *temp = *head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void DeleteAtPosition(DLL **head, int pos) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    DLL *temp = *head;

    if (pos == 1) {
        *head = temp->next;
        if (*head) {
            (*head)->prev = NULL;
        }
        free(temp);
        printf("Element at position %d deleted.\n", pos);
        return;
    }

    for (int i = 1; temp != NULL && i < pos; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position %d not found.\n", pos);
        return;
    }

    if (temp->prev) {
        temp->prev->next = temp->next;
    }
    if (temp->next) {
        temp->next->prev = temp->prev;
    }

    free(temp);
    printf("Element at position %d deleted.\n", pos);
}

void FreeList(DLL *head) {
    DLL *temp;
    while (head != NULL) {
        temp = head->next;
        free(head);
        head = temp;
    }
}

void PrintList(DLL *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (head) {
        printf("%c <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    DLL *head = NULL;
    char str[100];
    printf("Enter a string to initialize the list: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        InsertAtPosition(&head, str[i], i + 1);
    }

    int choice;
    char ch;
    int pos;
    do {
        printf("\n----------------Menu---------------\n");
        printf("1. Insert a character at first position\n");
        printf("2. Delete a character at any position\n");
        printf("3. Print list\n");
        printf("4. Exit\n");
        printf("----------------------------------------\n");

        printf("\nPlease select an option (1-4): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }
        clear_input_buffer();

        switch (choice) {
            case 1:
                printf("Enter character to insert: ");
                scanf(" %c", &ch);
                InsertAtPosition(&head, ch, 1);
                PrintList(head);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                DeleteAtPosition(&head, pos);
                PrintList(head);
                break;
            case 3:
                PrintList(head);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    FreeList(head);
    return 0;
}
