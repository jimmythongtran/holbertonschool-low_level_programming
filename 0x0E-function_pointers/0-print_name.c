#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * using pointers to functions
 * @name: name
 * @f: function to print name
 * Return: nothing because void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
