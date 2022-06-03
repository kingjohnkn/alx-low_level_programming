#include <stdio.h>

/**
 * main - prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
