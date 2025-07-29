/*
 * Assignment No.: 04
 * Question No.: 2
 * Date: 11 July, 2025
 *
 * Program: Double Circular Linked List
 * Description: This program creates a double circular linked list
 * containing int data type
 * and delete the first node and insert same node at last position.

 * Author: Biranchi Kulesika
 * Date: 15 July, 2025
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *prev;
	struct Node *next;
} DCLL;

DCLL *CreateNode(int value)
{
	DCLL *newNode = (DCLL *)malloc(sizeof(DCLL));
	if (!newNode)
	{
		printf("Memory allocation failed.\n");
		return NULL;
	}
	newNode->data = value;
	newNode->prev = newNode->next = NULL;
	return newNode;
}

void InsertAtEnd(DCLL **head, int value)
{
	DCLL *newNode = CreateNode(value);
	if (!newNode)
		return;

	if (*head == NULL)
	{
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

void MoveFirstToLast(DCLL **head)
{
	if (*head == NULL || (*head)->next == *head)
	{
		return;
	}
	*head = (*head)->next;
}

void PrintList(DCLL *head)
{
	if (!head)
	{
		printf("List is empty.\n");
		return;
	}

	DCLL *temp = head;
	do
	{
		printf("%d <-> ", temp->data);
		temp = temp->next;
	} while (temp != head);
	printf("(back to head)\n");
}

void FreeList(DCLL **head)
{
	if (*head == NULL)
	{
		return;
	}

	DCLL *last = (*head)->prev;
	DCLL *current = *head;
	DCLL *temp;

	last->next = NULL;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}

int main()
{
	DCLL *head = NULL;
	int n, value;

	printf("Enter number of nodes: ");
	scanf("%d", &n);

	printf("Enter int value separated by space: ");
	for (int i = 0; i < n; i++)
	{
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