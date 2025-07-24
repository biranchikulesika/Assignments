/*
 * Assignment No.: 09
 * Question No.: 1
 *
 * Program:
 * Description:
 *   Implementation of an Input Restricted Deque (Double Ended Queue).
 *   In an input restricted deque, insertion is allowed only at one end (rear),
 *   while deletion is allowed from both ends (front and rear).
 *
 * Author: Biranchi Kulesika
 * Date: 24 July, 2025
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int deque[SIZE];
int front = -1, rear = -1;

int isFull()
{
	return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

int isEmpty()
{
	return front == -1;
}

void insertRear(int value)
{
	if (isFull())
	{
		printf("Deque is Full. Cannot insert %d\n", value);
		return;
	}

	if (isEmpty())
	{
		front = rear = 0;
	}
	else if (rear == SIZE - 1)
	{
		rear = 0;
	}
	else
	{
		rear++;
	}

	deque[rear] = value;
	printf("Inserted %d at rear.\n", value);
}

void deleteFront()
{
	if (isEmpty())
	{
		printf("Deque is Empty. Cannot delete from front.\n");
		return;
	}

	printf("Deleted %d from front.\n", deque[front]);

	if (front == rear)
	{
		front = rear = -1;
	}
	else if (front == SIZE - 1)
	{
		front = 0;
	}
	else
	{
		front++;
	}
}

void deleteRear()
{
	if (isEmpty())
	{
		printf("Deque is Empty. Cannot delete from rear.\n");
		return;
	}

	printf("Deleted %d from rear.\n", deque[rear]);

	if (front == rear)
	{
		front = rear = -1;
	}
	else if (rear == 0)
	{
		rear = SIZE - 1;
	}
	else
	{
		rear--;
	}
}

void display()
{
	if (isEmpty())
	{
		printf("Deque is Empty.\n");
		return;
	}

	printf("Deque elements: ");
	int i = front;
	while (1)
	{
		printf("%d ", deque[i]);
		if (i == rear)
			break;
		i = (i + 1) % SIZE;
	}
	printf("\n");
}

int main()
{
	int choice, value;

	printf("\n--- Input Restricted DEQUE Menu ---\n");
	printf("1. Insert at Rear\n");
	printf("2. Delete from Front\n");
	printf("3. Delete from Rear\n");
	printf("4. Display\n");
	printf("5. Exit\n");

	do
	{
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter value to insert at rear: ");
			scanf("%d", &value);
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
