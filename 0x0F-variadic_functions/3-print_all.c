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
	int i;
	va_list valist;	
	type tlist {
		{"c", print_c};
		{"i", print_i};
		{"f", print_fl};
		{"s", print_s};
		{NULL, NULL};
	};

	if (format == NULL)
		return;

	va_start(valist, format);

	while (tlist[i].ltype != NULL)
	{
		if (tlist[i].ltype[0] == tlist[0])
			do something;
		i++;
	}

	va_end(valist);
}

void print_c(va_list flist)
{
	printf("%c", va_arg(flist, char);
}

void print_i(va_list flist)
{
	printf("%d", va_arg(flist, int);
}

void print_fl(va_list flist)
{
	printf("%f", va_arg(flist, float);
}

void print_s(va_list flist)
{
	printf("%s", va_arg(flist, char *);
}
