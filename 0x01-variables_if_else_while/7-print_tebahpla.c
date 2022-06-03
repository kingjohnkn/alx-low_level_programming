#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	/* print lowercase letters */
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
