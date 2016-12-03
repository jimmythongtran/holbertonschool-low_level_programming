#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * followed by newline
 * Description: uses two while loops with two integer variables
 * Return: Returns 0
 */
int main(void)
{
	int i;
	int abc;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	abc = 'a';
	while (abc <= 'f')
	{
		putchar(abc);
		abc++;
	}

	putchar('\n');
	return (0);
}
