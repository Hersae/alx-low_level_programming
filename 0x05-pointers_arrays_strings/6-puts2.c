#include "main.h"

/**
 * puts2 - prints on char out of two of a string
 * wil number of characters
 * @str: the string containing characters
 */
void puts2(char *str)
{
	int index = 0, wil = 0;

	while (str[index++])
		wil++;

	for (index = 0; index < wil; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
