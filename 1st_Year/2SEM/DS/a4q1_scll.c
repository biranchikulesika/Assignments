/*
 * Assignment No.: 04
 * Question No.: 1
 * Date: 11 July, 2025
 *
 * Program: Single Circular Linked List
 * Description: This program creates a single circular linked list
 * containing float data type
 * and insert a Node at the end of the list

 * Author: Biranchi Kulesika
 * Date: 15 July, 2025
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	float data;
	struct Node *next;
} CSLL;

CSLL *CreateNode(float value)
{
	CSLL *newNode = (CSLL *)malloc(sizeof(CSLL));
	if (!newNode)
	{
		printf("Memory allocation failed.\n");
		return NULL;
	}
	newNode->data = value;
	newNode->next = newNode;
	return newNode;
}

void InsertAtEnd(CSLL **head, float value)
{
	CSLL *newNode = CreateNode(value);
	if (!newNode)
		return;

	if (*head == NULL)
	{
		*head = newNode;
		return;
	}

	CSLL *temp = *head;
	while (temp->next != *head)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->next = *head;
}

void PrintList(CSLL *head)
{
	if (head == NULL)
	{
		printf("List is empty.\n");
		return;
	}

	CSLL *temp = head;
	do
	{
		printf("%.2f -> ", temp->data);
		temp = temp->next;
	} while (temp != head);
	printf("(back to head)\n");
}

int main()
{
	CSLL *head = NULL;
	int n;
	float value;

	printf("Enter number of items in the list: ");
	scanf("%d", &n);

	printf("Enter float value separated by space: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &value);
		InsertAtEnd(&head, value);
	}

	printf("\nList before insertion:\n");
	PrintList(head);

	printf("\nEnter a float value to insert at end: ");
	while (getchar() != '\n')
		;

	scanf("%f", &value);
	InsertAtEnd(&head, value);

	printf("\nList after insertion:\n");
	PrintList(head);

	return 0;
}