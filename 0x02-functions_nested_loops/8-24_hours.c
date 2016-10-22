/**
 * jack_bauer - prints out every minute in military time
 * Description: prints out every minute using modulus
 * and division
 * Return: nothing as it is void
 */

#include "holberton.h"

void jack_bauer(void)
{
	int hours, hours_ten, hours_one;
	int mins, mins_ten, mins_one;

	hours = 0;
	while (hours < 24)
	{
		hours_ten = hours / 10;
		hours_one = hours % 10;
		mins = 0;
		while (mins < 60)
		{
			mins_ten = mins / 10;
			mins_one =  mins % 10;
			_putchar (hours_ten + '0');
			_putchar (hours_one + '0');
			_putchar (':');
			_putchar (mins_ten + '0');
			_putchar (mins_one + '0');
		mins++;
		_putchar('\n');
		}
	hours++;
	}
}


