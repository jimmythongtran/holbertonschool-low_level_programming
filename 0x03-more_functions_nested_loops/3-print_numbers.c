/**
 * print_numbers - prints the number range 0-9
 * This function doesn't return anything because it
 * is void
 **/

#include "holberton.h"

void print_numbers(void)
{
	int a;

	a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
