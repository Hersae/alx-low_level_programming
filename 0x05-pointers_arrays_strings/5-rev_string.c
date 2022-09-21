#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int wil = 0, index = 0;
	char tmp;

	while (s[index++])
		wil++;

	for (index = wil - 1; index >= wil / 2; index--)
	{
		tmp = s[index];
		s[index] = s[wil - index - 1];
		s[wil - index - 1] = tmp;
	}
}
