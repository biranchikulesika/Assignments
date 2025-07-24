/*
 * Assignment No.: 06
 * Question No.: 1
 *
 * Program: Tower of Hanoi using Stack
 * Description: This C program provides an iterative solution to the Tower of Hanoi
 * puzzle using stacks.

 * Author: Biranchi Kulesika
* Date: 24 July, 2025
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
} Node;

typedef struct Stack
{
	char name;
	Node *top;
} Stack;

Stack *createStack(char name)
{
	Stack *stack = (Stack *)malloc(sizeof(Stack));
	stack->top = NULL;
	stack->name = name;
	return stack;
}

Node *createNode(int data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

void push(Stack *stack, int data)
{
	Node *node = createNode(data);
	node->next = stack->top;
	stack->top = node;
}

int pop(Stack *stack)
{
	if (stack->top == NULL)
		return -1;
	Node *temp = stack->top;
	int data = temp->data;
	stack->top = temp->next;
	free(temp);
	return data;
}

int peek(Stack *stack)
{
	if (stack->top == NULL)
		return -1;
	return stack->top->data;
}

int isEmpty(Stack *stack)
{
	return stack->top == NULL;
}

void moveDisk(Stack *src, Stack *dest)
{
	int srcTop = pop(src);
	int destTop = pop(dest);

	if (srcTop == -1)
	{
		push(src, destTop);
		printf("Move disk %d from %c to %c\n", destTop, dest->name, src->name);
	}
	else if (destTop == -1)
	{
		push(dest, srcTop);
		printf("Move disk %d from %c to %c\n", srcTop, src->name, dest->name);
	}
	else if (srcTop > destTop)
	{
		push(src, srcTop);
		push(src, destTop);
		printf("Move disk %d from %c to %c\n", destTop, dest->name, src->name);
	}
	else
	{
		push(dest, destTop);
		push(dest, srcTop);
		printf("Move disk %d from %c to %c\n", srcTop, src->name, dest->name);
	}
}

void towerOfHanoi(int n, Stack *src, Stack *aux, Stack *dest)
{
	int totalMoves = (1 << n) - 1;

	for (int i = n; i >= 1; i--)
		push(src, i);

	Stack *A = src;
	Stack *B = aux;
	Stack *C = dest;

	if (n % 2 == 0)
	{
		Stack *temp = B;
		B = C;
		C = temp;
	}

	for (int i = 1; i <= totalMoves; i++)
	{
		if (i % 3 == 1)
			moveDisk(A, C);
		else if (i % 3 == 2)
			moveDisk(A, B);
		else if (i % 3 == 0)
			moveDisk(B, C);
	}
}

int main()
{
	int n;
	printf("Enter number of disks: ");
	scanf("%d", &n);

	Stack *src = createStack('A');
	Stack *aux = createStack('B');
	Stack *dest = createStack('C');

	towerOfHanoi(n, src, aux, dest);

	return 0;
}
