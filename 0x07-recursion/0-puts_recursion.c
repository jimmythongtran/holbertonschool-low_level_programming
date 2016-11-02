/**
 * _puts_recursion - uses recursive function
 * to puts a string pointed to by pointer
 * variable s
 * @s: pointer variable
 * Return: Returns nothing because void
 */
#include "holberton.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
