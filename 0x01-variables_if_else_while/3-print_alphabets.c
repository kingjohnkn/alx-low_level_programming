#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* print UPPERCASE letters */
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
		putchar(ch);
        }
	putchar('\n');
	return (0);
}
