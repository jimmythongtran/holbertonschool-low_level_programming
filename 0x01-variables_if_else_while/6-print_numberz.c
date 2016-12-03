#include <stdio.h>

/**
 * main - prints all numbers of base 10
 * followed by a newline
 * Description: uses putchar instead of printf
 * Return: Returns 0
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
