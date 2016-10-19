/**
 * print_last_digit - prints the last digit
 * of a number
 * @n: the integer we are passing through
 * Description: using the print_last_digit function
 * prints the last digit of a number
 * Return: last digit of an integer
 */

#include "holberton.h"

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n %= 10;
	_putchar(n + '0');
	return (n);
}
