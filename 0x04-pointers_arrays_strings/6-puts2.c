/**
 * puts2 - prints a list of numbers omitting
 * one char out of 2
 * @str: operand
 * Description: prints a string printing one
 * out of 2
 * Return: Nothing because it's void
 */
#include "holberton.h"

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar ('\n');
}
