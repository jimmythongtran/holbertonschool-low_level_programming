#include <stdio.h>

/**
 * main - this is a while loop
 * Description: This function uses a while loop to print
 * screen commas after numbers
 * Return: Returns 0
 */
int main(void)
{
	int ones;
	int tens;
	
	ones = '0';
	tens = '0';

	while (tens <= '9')
	{
		putchar(tens);
			while (ones <= '9')
			{
				putchar(ones);
				if (ones != 9)
				{
					putchar (',');
					putchar (' ');
				}
			ones++;
			}
		tens++;
	}
	putchar('\n');
	return (0);
}
