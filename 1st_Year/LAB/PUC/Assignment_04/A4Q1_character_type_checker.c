/*
 * This C program checks whether an entered character
 * is an alphabet, digit, or special character.
 * If it is an alphabet, the program further checks
 * whether it is a vowel or consonant, and whether it
 * is uppercase or lowercase.
 *
 *Author: Biranchi Kulesika
 *Date: 23 Sep, 2023
 *Assignment No.: 04
 *Question No.: 01
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch;
    printf("\n\nEnter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        if (isupper(ch))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                printf("\"%c\" is a capital letter and a vowel.\n\n", ch);
            }
            else
            {
                printf("\"%c\" is a capital letter and a consonant.\n\n", ch);
            }
        }
        else
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                printf("\"%c\" is a smallcase letter and a vowel.\n\n", ch); // I've used to back-slash to escape the double quotion mark.
            }
            else
            {
                printf("\"%c\" is a smallcase letter and a consonant.\n\n", ch);
            }
        }
    }

    else if (isdigit(ch))
    {
        printf("\"%c\" is a digit.\n\n", ch);
    }
    else
    {
        printf("\"%c\" is a special character.\n\n", ch);
    }
    return 0;
}
