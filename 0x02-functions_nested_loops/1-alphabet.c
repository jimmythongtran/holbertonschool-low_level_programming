/**
 * print_alphabet - prints to display the alphabet
 * Description: using the print_alphabet()
 * function stored in the header file,
 * prints the alphabet in lowercase
 * Return: Returns 0.
 */

#include "holberton.h"

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
