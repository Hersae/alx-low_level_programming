#include "main.h"

/**
 * print_rev - prints a string in reverse
 * wil is the first count to end, index is to count back
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int wil = 0, index;

	while (s[index++])
		wil++;

	for (index = wil - 1; index >= 0; index--);
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
