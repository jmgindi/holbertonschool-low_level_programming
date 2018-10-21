#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by separator
 * @separator: string to separate with
 * @n: number of variable arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{
		str = va_arg(valist, char*);

		if (separator != NULL)
		{
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
		else
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}

	i++;

	printf("%s\n", va_arg(valist, char *));

	va_end(valist);
}
