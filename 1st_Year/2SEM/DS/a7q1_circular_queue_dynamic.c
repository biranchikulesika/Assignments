/*
 * Assignment No.: 07
 * Question No.: 1
 *
 * Program: Dynamic Circular Queue
 * Description: This C program implements a circular queue dynamically.
 * It provides operations like enqueue, dequeue, and display through a menu.

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

typedef struct CircularQueue
{
	Node *front;
	Node *rear;
} CircularQueue;

void initQueue(CircularQueue *q)
{
	q->front = NULL;
	q->rear = NULL;
}

void enqueue(CircularQueue *q, int value)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	if (!newNode)
	{
		printf("Memory allocation failed!\n");
		return;
	}

	newNode->data = value;
	newNode->next = NULL;

	if (q->front == NULL)
	{
		q->front = q->rear = newNode;
		q->rear->next = q->front;
	}
	else
	{
		q->rear->next = newNode;
		q->rear = newNode;
		q->rear->next = q->front;
	}
}

void dequeue(CircularQueue *q)
{
	if (q->front == NULL)
	{
		printf("Queue is empty!\n");
		return;
	}

	Node *temp = q->front;

	if (q->front == q->rear)
	{
		free(temp);
		q->front = q->rear = NULL;
	}
	else
	{
		q->front = q->front->next;
		q->rear->next = q->front;
		free(temp);
	}
}

void displayQueue(CircularQueue *q)
{
	if (q->front == NULL)
	{
		printf("Queue is empty!\n");
		return;
	}

	Node *temp = q->front;
	printf("Queue: ");
	do
	{
		printf("%d ", temp->data);
		temp = temp->next;
	} while (temp != q->front);
	printf("\n");
}

int main()
{
	CircularQueue q;
	initQueue(&q);

	int choice, value;

	printf("\n--- Circular Queue Menu ---\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");

	do
	{
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter value to insert: ");
			scanf("%d", &value);
			enqueue(&q, value);
			break;
		case 2:
			dequeue(&q);
			break;
		case 3:

			displayQueue(&q);
			break;
		case 4:
			printf("Exiting program.\n");
			break;
		default:
			printf("Invalid choice! Try again.\n");
		}

	} while (choice != 4);

	return 0;
}