#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int l, end, start, y;

	l = 0;

	while(*(s + l) != '\0')
		l++;

	l--;

	end = l;
	start = 0;
	y = 0;

	while (end >= start)
	{
		y = *(s + end);
		*(s + end) = *(s + start);
		*(s + start) = y;

		end--;
		start++;
	}
}
