#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 * Return: the binary representation of a number
 */

void print_binary(unsigned long int n)
{
/*creating the mask to put against the other number */
	unsigned long int i = 1;
/* we don't want to print all the zeroes */
	int flag = 0;
	unsigned long int temp = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
/* sizeof because we don't know what kind of system */
	i = i << (sizeof(n) * 8 - 1);

	while (i > 0)
	{
		temp = i & n;
		if (flag == 1)
		{
			if (temp == 0)
			{
				putchar('0');
			}
		}

		if (temp != 0)
		{
			putchar('1');
			flag = 1;
		}
	i = i >> 1;
	}
}
