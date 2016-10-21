/**
 * print_diagonal - prints a diagonal line
 * @n: integer passed through
 * Description: prints a diagonal line
 * using an X and Y paradigm
 */

#include "holberton.h"

void print_diagonal(int n)
{
	int x;
	int y;

	y = 0;
	if (n > 0)
	{
		while (y < n)
		{
			x = 0;
			while (x < y)
			{
				_putchar(' ');
				x++;
			}
			_putchar('\\');
			_putchar('\n');
			y++;
		}
	}
	else
		_putchar('\n');
}
