#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * and uppercase
 * Description: This function It uses a while loop to print
 * lowercase and uppercase alphabet.putchar sends a single
 * character to the screen in a while loop
 * Return: Returns 0
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
