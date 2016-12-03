#include <stdio.h>

/**
 * main - prints all the numbers of base 10, starting
 * from 0, followed by a new line
 * Description: uses printf
 * Return: Returns 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
