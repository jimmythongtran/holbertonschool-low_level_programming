/**
 * print_sign - prints the sign of a number
 * @n: it's the first operand
 * Description: using the print_sign function
 * this returns a 1 and prints if n is greater than zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 * Return: Returns 1 or 0
 */

#include "holberton.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
