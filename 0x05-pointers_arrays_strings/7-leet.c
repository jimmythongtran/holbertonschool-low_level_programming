/**
 * leet - character converter
 * @p: string to convert to leetspeak
 * Return: Description of value returned
 */

#include "holberton.h"

char *leet(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		while (p[i] == 'a' || p[i] == 'A')
		{
			p[i] = '4';
		}
		while (p[i] == 'e' || p[i] == 'E')
		{
			p[i] = '3';
		}
		while (p[i] == 'o' || p[i] == 'O')
		{
			p[i] = '0';
		}
		while (p[i] == 't' || p[i] == 'T')
		{
			p[i] = '7';
		}
		while (p[i] == 'l' || p[i] == 'L')
		{
			p[i] = '1';
		}
		i++;
	}
	return (p);
}
