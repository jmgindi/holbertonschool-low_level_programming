#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__

typedef long unsigned int size_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
