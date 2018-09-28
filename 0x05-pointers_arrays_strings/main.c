#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char *p;

	char s[] = "rotate by 13 places\n";

	p = rot13(s);

	printf("%s", p);

	p = rot13(s);

	printf("%s", p);

	return (0);
}
