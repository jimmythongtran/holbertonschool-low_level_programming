#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 numbers and print result
 * @argc: number of arugments
 * @argv: array of arguments
 * Return: returns 0 if correct, 1 if not given two arguments
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
