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
