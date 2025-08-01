/*
* Description: This C program provides an iterative solution to the Tower of Hanoi
* puzzle using stacks.
* Author: Biranchi Kulesika
* Date: 24 July, 2025
* Assignment No.: 06
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Stack {
    char name;
    Node *top;
} Stack;

Stack *createStack(char name) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->name = name;
    return stack;
}

Node *createNode(int data) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void push(Stack *stack, int data) {
    Node *node = createNode(data);
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack) {
    if (stack->top == NULL) {
        return -1; // Indicate empty stack
    }
    Node *temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

int peek(Stack *stack) {
    if (stack->top == NULL) {
        return -1;
    }
    return stack->top->data;
}

int isEmpty(Stack *stack) {
    return stack->top == NULL;
}

// Helper function to make a legal move between two stacks
void makeLegalMove(Stack *s1, Stack *s2) {
    int disk1 = peek(s1);
    int disk2 = peek(s2);

    if (disk1 == -1) { // s1 is empty, move from s2 to s1
        push(s1, pop(s2));
        printf("Move disk %d from %c to %c\n", peek(s1), s2->name, s1->name);
    } else if (disk2 == -1) { // s2 is empty, move from s1 to s2
        push(s2, pop(s1));
        printf("Move disk %d from %c to %c\n", peek(s2), s1->name, s2->name);
    } else if (disk1 < disk2) { // disk1 is smaller, move from s1 to s2
        push(s2, pop(s1));
        printf("Move disk %d from %c to %c\n", peek(s2), s1->name, s2->name);
    } else { // disk2 is smaller, move from s2 to s1
        push(s1, pop(s2));
        printf("Move disk %d from %c to %c\n", peek(s1), s2->name, s1->name);
    }
}

void towerOfHanoi(int n, Stack *src, Stack *aux, Stack *dest) {
    int totalMoves = (1 << n) - 1;

    // Push disks onto source stack in decreasing order
    for (int i = n; i >= 1; i--) {
        push(src, i);
    }

    // Determine the order of auxiliary and destination pegs based on n's parity
    Stack *A = src;
    Stack *B = aux;
    Stack *C = dest;

    if (n % 2 == 0) {
        Stack *temp = B;
        B = C;
        C = temp;
    }

    for (int i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1) {
            makeLegalMove(A, C);
        } else if (i % 3 == 2) {
            makeLegalMove(A, B);
        } else if (i % 3 == 0) {
            makeLegalMove(B, C);
        }
    }
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    Stack *src = createStack('A');
    Stack *aux = createStack('B');
    Stack *dest = createStack('C');

    towerOfHanoi(n, src, aux, dest);

    // Free allocated memory for stacks
    // The Node structs within the stacks are freed by pop operations.
    // We only need to free the Stack structs themselves.
    free(src);
    free(aux);
    free(dest);

    return 0;
}

