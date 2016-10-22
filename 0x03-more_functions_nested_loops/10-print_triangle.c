#include "holberton.h"

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		y = 1;
		while (y <= size)
		{
			x = 0;
			while (x < size)
			{
				if (x < size - y)
				{
					_putchar(' ');
				}
				else
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
