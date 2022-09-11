#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print if the number is porsitive, negative, or zero
 *
 * Description: using the main function
 * this program prints "Programming is positive, negetive, or zero"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_max / 2;
	/* your code goes there*/
	if (n > 0)
	{
		print('%i is positive" , n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n" , n);
	}
	else if (n = 0)
	{
		printf("%i is zero\n" , n);
	}

	return (0);
}
