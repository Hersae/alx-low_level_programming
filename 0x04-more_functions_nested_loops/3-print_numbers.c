#include "main.h"

/**
 * pritn_numbers - Prints the numbers from 0 - 9
 * Description: prints numbers 0 - 9
 * Return: nothing
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
