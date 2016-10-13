#include <stdio.h>

/**
 * main - prints the alphabet
 * Description: This function initializes with
 * the variable a. It uses a while loop to print
 * to display all letters up to a
 * Return: Returns 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
