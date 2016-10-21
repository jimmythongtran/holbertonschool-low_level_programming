/**
 * more_numbers - prints range of digits 0-14 ten times
 * Description: using the more_numbers function
 * prints out range of digits 0-14 ten times
 */
#include "holberton.h"

void more_numbers(void)
{
	int num = 0;
	int loop = 0;

	while (loop <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;

		}
		loop++;
		_putchar('\n');
	}
}
