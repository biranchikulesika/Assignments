/*
* Description: Implementation of an Input Restricted Deque (Double Ended Queue).
* In an input restricted deque, insertion is allowed only at one end (rear),
* while deletion is allowed from both ends (front and rear).
* Author: Biranchi Kulesika
* Date: 24 July, 2025
* Assignment No.: 09
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int isFull() {
    return (front == 0 && rear == SIZE - 1) || (front == (rear + 1) % SIZE);
}

int isEmpty() {
    return front == -1;
}

void insertRear(int value) {
    if (isFull()) {
        printf("Deque is Full. Cannot insert %d\n", value);
        return;
    }

    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    deque[rear] = value;
    printf("Inserted %d at rear.\n", value);
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque is Empty. Cannot delete from front.\n");
        return;
    }

    printf("Deleted %d from front.\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque is Empty. Cannot delete from rear.\n");
        return;
    }

    printf("Deleted %d from rear.\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    } else {
        rear = (rear - 1 + SIZE) % SIZE;
    }
}

void display() {
    if (isEmpty()) {
        printf("Deque is Empty.\n");
        return;
    }

    printf("Deque elements: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) {
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;

    printf("\n--- Input Restricted DEQUE Menu ---\n");
    printf("1. Insert at Rear\n");
    printf("2. Delete from Front\n");
    printf("3. Delete from Rear\n");
    printf("4. Display\n");
    printf("5. Exit\n");

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
                printf("Enter value to insert at rear: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input. Please enter a number.\n");
                    clear_input_buffer();
                    break;
                }
                clear_input_buffer();
                insertRear(value);
                break;
            case 2:
                deleteFront();
                break;
            case 3:
                deleteRear();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}