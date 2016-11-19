#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with seperator, followed by a new line
* @separator: string to be printed between numbers
* @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	i++;
	}
	printf("\n");

	va_end(list);
}
