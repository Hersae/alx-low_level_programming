#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4
 * Description: prints
 *Return: Always 0
 */
void print_most_numbers(void);
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
			a++;
		}
	}
	_putchar('\n');
}
