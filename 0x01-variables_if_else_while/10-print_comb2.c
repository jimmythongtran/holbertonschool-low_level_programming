#include <stdio.h>

/**
 * main - this is a while loop
 * Description: This function uses a while loop to print
 * screen commas after numbers
 * Return: Returns 0
 */
int main(void)
{
	int tens = '0';
	int ones = '0';

	while (tens <= '9')
	{
		ones = '0';
		while (ones <= '9')
		{
			putchar(tens);
			putchar(ones);
			if (tens == '9' && ones == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		tens++;
	}
	putchar('\n');
	return (0);
}
