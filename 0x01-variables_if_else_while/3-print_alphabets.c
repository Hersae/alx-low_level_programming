#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	printf("Uppercase characters : \n");
	
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		printf("%c ", ch);
	}

	printf("\nLowercase characters : \n");

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c ", ch);
	}
	return (0);
}
