#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arugments
 * @argv: strings to be printed
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
