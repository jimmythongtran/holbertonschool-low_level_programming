/**
 * print_name - a function that prints a name
 * using pointers to functions
 * @name: name
 * @f: function to print name
 * Return: nothing because void
 */
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	void (*pfn)(char *);

	pfn = f;
	pfn(name);
}
