/*
 * Assignment No.: 08
 * Question No.: 1
 *
 * Program: Priority Queue using Linked List
 * Description: This C program implements a priority queue using a linked list.
 *              Lower priority numbers indicate higher priority.
 *              It provides a menu to perform operations like enqueue, dequeue, and display.
 *
 * Author: Biranchi Kulesika
 * Date: 25 July, 2025
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	int priority;
	struct Node *next;
} Node;

Node *createNode(int data, int priority)
{
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = data;
	temp->priority = priority;
	temp->next = NULL;
	return temp;
}

void enqueue(Node **head, int data, int priority)
{
	Node *newNode = createNode(data, priority);

	if (*head == NULL || priority < (*head)->priority)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		Node *temp = *head;
		while (temp->next != NULL && temp->next->priority <= priority)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}

	printf("Inserted: %d with priority %d\n", data, priority);
}

void dequeue(Node **head)
{
	if (*head == NULL)
	{
		printf("Queue is empty!\n");
		return;
	}

	Node *temp = *head;
	printf("Removed: %d with priority %d\n", temp->data, temp->priority);
	*head = (*head)->next;
	free(temp);
}

void display(Node *head)
{
	if (head == NULL)
	{
		printf("Queue is empty!\n");
		return;
	}

	printf("Priority Queue: ");
	while (head != NULL)
	{
		printf("[%d|P:%d] ", head->data, head->priority);
		head = head->next;
	}
	printf("\n");
}

int main()
{
	Node *pq = NULL;

	int choice, value, priority;

	printf("\n--- Priority Queue Menu ---\n");
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
			printf("Enter value and priority separated by space: ");
			scanf("%d %d", &value, &priority);
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

	return 0;
}