#include <stdio.h>

/**
 * main - this is a while loop 
 * Description: This function uses a while loop to print
 * screen commas after numbers
 * Return: Returns 0
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
		/*Don't put the space and comma */
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
