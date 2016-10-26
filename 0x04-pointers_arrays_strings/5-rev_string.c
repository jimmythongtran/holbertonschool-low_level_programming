/**
 * rev_string - prints a string in reverse
 * @s: dereferenced operand
 * Description: prints a string in reverse
 * Return: Nothing because it's void
 */
#include "holberton.h"

void rev_string(char *s)
{
	int length;
	int count;
	char temp;

	length = 0;
	while (s[length] != '\0')
	{

	length++;
	}
	length--;

	count = 0;
	while (count < length / 2)
	{
		temp = s[length - count];
		s[length - count] = s[count];
		s[count] = temp;

	count++;
	}
}
