/**
 * @file a12q2_reverse_string.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Reverses a given string in-place.
 *
 * This program prompts the user for a string, safely reads the input,
 * and then reverses the string using a dedicated function that modifies
 * the string directly (in-place). The original and reversed strings
 * are then displayed.
 */
#include <stdio.h>
#include <string.h>

void reverse_string_in_place(char text[])
{
	int length = strlen(text);
	for (int i = 0; i < length / 2; i++)
	{
		char temp = text[i];
		text[i] = text[length - i - 1];
		text[length - i - 1] = temp;
	}
}

int main()
{
	char input_string[100];
	char original_string[100];

	printf("Enter a string to reverse: ");
	if (fgets(input_string, sizeof(input_string), stdin) == NULL)
	{
		printf("Error: Failed to read input.\n");
		return 1;
	}

	input_string[strcspn(input_string, "\n")] = '\0';

	strcpy(original_string, input_string);

	reverse_string_in_place(input_string);

	printf("\nOriginal string:  \"%s\"\n", original_string);
	printf("Reversed string:  \"%s\"\n\n", input_string);

	return 0;
}