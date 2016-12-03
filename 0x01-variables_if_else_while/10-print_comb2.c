#include <stdio.h>

/**
 * main - this function prints 0 to 99 with commas
 * and spaces after each number, except 99
 * Description: uses two while loops and one if/else
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
