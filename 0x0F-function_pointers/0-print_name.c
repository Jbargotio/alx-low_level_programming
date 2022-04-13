#include "function_pointers.h"

/**
 * print_name - Prints name.
 * @name: Name to be printed.
 * @f: Pointer to func that prints name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
