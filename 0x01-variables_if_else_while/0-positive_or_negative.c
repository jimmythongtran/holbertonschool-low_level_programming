#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function checks for the value of
 * variable n using an if...else conditional
 * Description: This function prints according
 * output based on the number generated by rand
 * Return: Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
