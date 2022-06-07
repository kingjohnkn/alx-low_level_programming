#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = 97;
		while (b <= 122)
		{
			_putchar(b);
			b++;
		}
		a++;
	}
	_putchar('\n');
}
