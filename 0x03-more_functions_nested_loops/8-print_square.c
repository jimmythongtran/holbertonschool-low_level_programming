/**
 * print_square - prints a square
 * @size: integer passing through
 * Description: using an X and Y
 * axis paradigm, printing a square
 */

#include "holberton.h"
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		y = 0;
		while (y <= size)
		{
			x = 0;
			while (x <= size)
			{
				_putchar('#');
			x++;
			}
			_putchar('\n');
			y++;
		}
	}
	else
		_putchar('\n');
}
