/**
 * _puts - prints a string
 * @str: operand
 * Description: prints a string
 * Return: Nothing because it's void
 */
#include "holberton.h"

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
}
