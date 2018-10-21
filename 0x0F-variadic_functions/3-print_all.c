#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *
 *
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list valist;	

	flist tlist[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL},
	};

	if (format == NULL)
		return;

	va_start(valist, format);
	i = 0;

	while (format[i] != '\0')
	{
		j = 0;
		while (tlist[j].name != NULL)
		{
			if (tlist[j].ltype == format[i])
			{
				tlist[j].f(va_arg(valist, void *));
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(valist);
}

void print_c(va_list flist)
{
	printf("%c", va_arg(flist, int));
}

void print_i(va_list flist)
{
	printf("%d", va_arg(flist, int));
}

void print_fl(va_list flist)
{
	printf("%f", va_arg(flist, double));
}

void print_s(va_list flist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(flist, char *));
}
