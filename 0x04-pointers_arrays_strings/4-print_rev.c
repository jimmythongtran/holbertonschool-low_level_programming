/**
 * print_rev - prints a string in reverse
 * @s: dereferenced operand
 * Description: prints a string in reverse
 * Return: Nothing because it's void
 */
#include "holberton.h"

void print_rev(char *s)
{
	int i;
	char array[140];

	i = 0;
	while (*s != 0)
	{
		array[i] = *s;
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(array[i]);
		i--;
	}
	_putchar('\n');
}
