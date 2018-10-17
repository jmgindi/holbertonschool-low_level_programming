#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
