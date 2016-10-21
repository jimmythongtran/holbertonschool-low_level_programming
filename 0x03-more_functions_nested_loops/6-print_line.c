/**
 * print_line - prints out a line
 * @n: integer passed through
 * Description: prints out a line using
 * a while and if statement
 * Return: Void
 */

#include "holberton.h"

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		if (n > 0)
			_putchar('_');
		c++;
	}
	_putchar('\n');
}
