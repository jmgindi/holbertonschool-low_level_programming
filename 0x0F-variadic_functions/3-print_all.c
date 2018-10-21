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
	unsigned int i, j;
	va_list valist;	
	char *sep = "";

	flist tlist[] = {
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
		j = 0;
		while (tlist[j].name != NULL)
		{
			if (*tlist[j].type == format[i])
			{
				printf("%s", sep);
				tlist[j].type(valist);
				sep = ", ";
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
