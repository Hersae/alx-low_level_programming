#include "main.h"

/**
 * Discreption: prints '_putchar\n'
 * print_alphabet - pritns the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
