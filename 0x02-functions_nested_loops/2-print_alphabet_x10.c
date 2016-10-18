/**
 * print_alphabet_x10 - prints alphabet
 * 10 times
 *
 * Description: using the print_alphabet_x10
 * function stored in the header file,
 * prints the alphabet 10 times
 * Return: Returns 0.
 */

#include "holberton.h"

void print_alphabet_x10(void)
{
	int cTen;
	char c;

	cTen = '0';
	c = 'a';
	while (cTen <= '9')
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	c = 'a';
	_putchar('\n');
	cTen++;
	}
}
