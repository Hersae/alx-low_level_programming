#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Tas a pointer to an int and updates the value it points to 98
 * @n: the pointer to an int
 * Return: n
 */
void reset_to_98(int *n)
{
	*n = 98;
	n = 402;

	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
