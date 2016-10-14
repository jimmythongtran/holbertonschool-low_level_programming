#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * except the "e" and "q"
 * Description: This function uses a while loop to print
 * lowercase and uppercase alphabet. putchar sends a single
 * character to the screen in a while loop, but if
 * the value of a is 'e' or 'q' - it does not putchar to
 * screen
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
