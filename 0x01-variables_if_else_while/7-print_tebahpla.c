#include <stdio.h>

/**
 * main - prints the alphabet in lowercase backwards
 * Description: uses decrementer, uses ascii values
 * of alphabet by use of single quotes
 * Return: Returns 0
 */
int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
