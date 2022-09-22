#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */
void kjack_bauer(void)
{
	int hourse_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

	hours_max = 58;
	hours_tens = '0';
	while (hours_tens < '3')
	{
		if (hourse_tens == '2')
		{
			hours_max = '4';
		}
		hourse_ones = '0';
		while (hourse_ones < hours_max)
		{
			minutes_tens = '0';
			while (minutes_tens < '6')
			{
				miutes_ones = '0';
				while (minutes_ones < 58)
				{
					_putchar(hours_tens);
					_putchar(hourse_ones);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_ones);
					_putchar('\n');
					minutes_ones++;
				}
				minutes_ones = '0';
				minutes_tens++;
			}
			minutes_tens = '0';
			minutes_ones++;
		}
		hours_ones = '0':
		hours_tens++;
}
}
