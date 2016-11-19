#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - retur sum of all its parameters
 * @n: number of extra parameters
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	va_start(list, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);
}
