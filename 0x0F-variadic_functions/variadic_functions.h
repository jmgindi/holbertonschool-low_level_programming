#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__

typedef struct flist {
	char *name;
	int (*type)(va_list);
} tlist;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_c(va_list valist);
void print_i(va_list valist);
void print_fl(va_list valist);
void print_s(va_list valist);
void print_all(const char * const format, ...);

#endif
