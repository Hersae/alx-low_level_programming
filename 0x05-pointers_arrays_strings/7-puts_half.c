#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int index = 0, wil = 0, n;

	while (str[index++])
		wil++;

	if ((wil % 2) == 0)
		n = wil  2;

	else
		n = (wil + 1) / 2;

	for (index = n; index < wil; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
