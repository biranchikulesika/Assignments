/*
 * Assignment No.: 03
 * Question No.: 1
 * Date: 11 July, 2025
 *
 * Program: Double Linked List of Characters
 * Description: This program creates a double linked list
 * and insert a character at fist position
 * and delete a character at any position.

 * Author: Biranchi Kulesika
 * Date: 15 July, 2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	char data;
	struct Node *prev;
	struct Node *next;
} DLL;

DLL *CreateNode(char value)
{
	DLL *newNode = (DLL *)malloc(sizeof(DLL));
	if (!newNode)
	{
		printf("Memory allocation failed.\n");
		return NULL;
	}
	newNode->data = value;
	newNode->next = newNode->prev = NULL;
	return newNode;
}

void InsertAtPosition(DLL **head, char value, int pos)
{
	DLL *newNode = CreateNode(value);
	if (!newNode)
		return;

	if (pos == 1)
	{
		newNode->next = *head;
		if (*head)
			(*head)->prev = newNode;
		*head = newNode;
		return;
	}

	DLL *temp = *head;
	for (int i = 1; temp != NULL && i < pos - 1; i++)
		temp = temp->next;

	if (!temp)
	{
		printf("Position out of range.\n");
		free(newNode);
		return;
	}

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next)
		temp->next->prev = newNode;
	temp->next = newNode;
}

void DeleteAtPosition(DLL **head, int pos)
{
	if (!*head)
		return;

	DLL *temp = *head;

	if (pos == 1)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return;
	}

	for (int i = 1; temp != NULL && i < pos; i++)
		temp = temp->next;

	if (!temp)
	{
		printf("Position not found.\n");

		return;
	}

	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
}

void FreeList(DLL *head)
{
	DLL *temp;

	while (head != NULL)
	{

		temp = head->next;
		free(head);
		head = temp;
	}

}

void PrintList(DLL *head)
{
	if (!head)
	{
		printf("List is empty.\n");
		return;
	}

	while (head)
	{
		printf("%c <-> ", head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int main()
{

	DLL *head = NULL;
	char str[100];
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = '\0';
	for (int i = 0; str[i] != '\0'; i++)
	{
		InsertAtPosition(&head, str[i], i + 1);
	}

	int choice, pos;
	char ch;
	do
	{
		printf("\n----------------Menu---------------\n");
		printf("1. Insert a character at first position\n");
		printf("2. Delete a character at any position\n");
		printf("3. Print list\n");
		printf("4. Exit\n");
		printf("----------------------------------------\n");

		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
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
			break;
		default:
			printf("Invalid choice.\n");
		}
	} while (choice != 4);

	FreeList(head);
	return 0;
}
