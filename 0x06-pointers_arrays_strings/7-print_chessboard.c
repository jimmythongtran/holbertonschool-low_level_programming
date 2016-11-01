/**
 * print_chessboard - prints the chessboard
 * @a: character array to print chessboard
 * Return: Nothing
 */

#include "holberton.h"

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
