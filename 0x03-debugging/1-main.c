#include "main.h"

/**
 * one-main.c - causes an infinte loop
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	printf("infinite loop incoming :(\n");

	while (i < 10)
	{
		_putchar(i);
	}
	printf("infinte loop avoided! \\o/\n");

	return (0);
}
