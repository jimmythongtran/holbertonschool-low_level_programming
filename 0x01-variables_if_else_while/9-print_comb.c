#include <stdio.h>

/**
 * main - this prints all the numbers of base 10
 * with commas after each number except 9
 * Description: This function uses a while loop and if conditional
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
