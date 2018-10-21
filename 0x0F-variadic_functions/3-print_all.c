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
	unsigned int i, j = 0;
	va_list valist;	
	char *sep = "";

	formatlist tlist[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(valist, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		while (tlist[j].name != NULL)
		{
			if (format[i] == *tlist[j].name)
			{
				printf("%s", sep);
				tlist[j].type(valist);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}

	printf("\n");

	va_end(valist);
}

void print_c(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

void print_i(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

void print_fl(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

void print_s(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
