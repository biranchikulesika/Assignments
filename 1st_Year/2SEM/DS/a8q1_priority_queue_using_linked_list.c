/*
* Description: This C program implements a priority queue using a linked list.
* Lower priority numbers indicate higher priority.
* It provides a menu to perform operations like enqueue, dequeue, and display.
* Author: Biranchi Kulesika
* Date: 25 July, 2025
* Assignment No.: 08
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    int priority;
    struct Node *next;
} Node;

Node *createNode(int data, int priority) {
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;
    return temp;
}

void enqueue(Node **head, int data, int priority) {
    Node *newNode = createNode(data, priority);
    if (newNode == NULL) {
        return;
    }

    if (*head == NULL || priority < (*head)->priority) {
        newNode->next = *head;
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Inserted: %d with priority %d\n", data, priority);
}

void dequeue(Node **head) {
    if (*head == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    Node *temp = *head;
    printf("Removed: %d with priority %d\n", temp->data, temp->priority);
    *head = (*head)->next;
    free(temp);
}

void display(Node *head) {
    if (head == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Priority Queue: ");
    while (head != NULL) {
        printf("[%d|P:%d] ", head->data, head->priority);
        head = head->next;
    }
    printf("\n");
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Node *pq = NULL;
    int choice, value, priority;

    printf("\n--- Priority Queue Menu ---\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    do {
        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }
        clear_input_buffer();

        switch (choice) {
            case 1:
                printf("Enter value and priority separated by space: ");
                if (scanf("%d %d", &value, &priority) != 2) {
                    printf("Invalid input. Please enter two numbers.\n");
                    clear_input_buffer();
                    break;
                }
                clear_input_buffer();
                enqueue(&pq, value, priority);
                break;
            case 2:
                dequeue(&pq);
                break;
            case 3:
                display(pq);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    // Free remaining nodes in the queue to prevent memory leaks
    while (pq != NULL) {
        Node *temp = pq;
        pq = pq->next;
        free(temp);
    }

    return 0;
}
