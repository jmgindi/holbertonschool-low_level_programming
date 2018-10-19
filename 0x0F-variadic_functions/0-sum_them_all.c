#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int i, sum;

	va_start(valist, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
