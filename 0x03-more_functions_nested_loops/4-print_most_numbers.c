/**
 * print_most_numbers - prints the number
 * range 0 to 9, except digits 2 and 4
 * Description: the special thing about this
 * function is its void so it doesn't return 0
 */

#include "holberton.h"

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if ((a == '2') || (a == '4'))
		{
			a++;
		}
		else
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}
