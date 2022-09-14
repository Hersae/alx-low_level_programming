#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		print("%d", dig);

	printf("\n");

	return (0);
}
