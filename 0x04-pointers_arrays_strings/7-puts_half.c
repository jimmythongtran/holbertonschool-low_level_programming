/**
 * puts_half - prints the second half of a string
 * @str: dereferenced operand
 * Description: prints the second half of a string
 * Return: Nothing because it's void
 */
#include "holberton.h"

void puts_half(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
	{
	len++;
	}
	if (len % 2 != '\0')
	{
	len++;
	}
	len /= 2;
	while (str[len] != '\0')
	{
		_putchar(str[len++]);
	}
	_putchar('\n');
}
