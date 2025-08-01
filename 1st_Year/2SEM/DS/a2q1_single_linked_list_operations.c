/*
* Description: This program creates a single linked list
* and performs the following operations:
* 1. Display list
* 2. Insert at end
* 3. Search an element
* 4. Delete an element
* 5. Sort in ascending order
* Author: Biranchi Kulesika
* Date: 11 July, 2025
* Assignment No.: 02
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} SLL;

SLL *CreateNode(int value) {
    SLL *newNode = (SLL *)malloc(sizeof(SLL));
    if (newNode == NULL) {
        printf("Error: Memory allocation failed in CreateNode.\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void InsertAtEnd(SLL **head, int value) {
    SLL *newNode = CreateNode(value);
    if (newNode == NULL) {
        return;
    }

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    SLL *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void PrintList(SLL *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    SLL *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int SearchElement(SLL *head, int value) {
    int position = 1;
    SLL *temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

void DeleteElement(SLL **head, int value) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    SLL *temp = *head, *prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Element %d deleted from the list.\n", value);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element %d not found in the list.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Element %d deleted from the list.\n", value);
}

void SortListAscending(SLL **head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    SLL *i, *j;
    int tempData;
    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                tempData = i->data;
                i->data = j->data;
                j->data = tempData;
            }
        }
    }
}

void FreeList(SLL *head) {
    SLL *temp;
    while (head != NULL) {
        temp = head->next;
        free(head);
        head = temp;
    }
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    SLL *list1 = NULL;
    int size, value, key;

    printf("Enter number of nodes: ");
    scanf("%d", &size);

    printf("Enter the values:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &value);
        InsertAtEnd(&list1, value);
    }

    int choice;
    do {
        printf("\n----------------Menu---------------\n");
        printf("1. Display the list\n");
        printf("2. Insert at end\n");
        printf("3. Search an element\n");
        printf("4. Delete an element\n");
        printf("5. Sort in ascending order\n");
        printf("6. Exit\n");
        printf("----------------------------------------\n");

        printf("\nPlease select an option (1-6): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }
        clear_input_buffer(); // Clear the newline character after reading integer

        switch (choice) {
            case 1:
                PrintList(list1);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                InsertAtEnd(&list1, value);
                printf("Value inserted.\n");
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &key);
                int pos = SearchElement(list1, key);
                if (pos != -1) {
                    printf("Element %d found at position %d.\n", key, pos);
                } else {
                    printf("Element %d not found in the list.\n", key);
                }
                break;
            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &key);
                DeleteElement(&list1, key);
                break;
            case 5:
                SortListAscending(&list1);
                printf("List sorted in ascending order.\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please select 1-6.\n");
                break;
        }
    } while (choice != 6);

    FreeList(list1);
    return 0;
}
