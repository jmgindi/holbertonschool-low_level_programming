#include "holberton.h"

/**
 * end_find - finds the end of s by checking for null
 * @s: string
 *
 * Return: end of string
 */

int end_find(char *s)
{
	if (*s == 0)
		return (0);

	return (end_find(s + 1) + 1);
}

/**
 * compalindrome - compares ends of string to check for palindromes
 * @s: string to check
 * @x: starting position
 * @e: ending position
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int compalindrome(char *s, int x, int e)
{
	if (s[x] != s[e])
		return (0);

	if (x >= e)
		return (1);

	return (compalindrome(s, (x + 1), (e - 1)));
}

/**
 * is_palindrome - checks output of compalindrome for palindrome
 * @s: string
 *
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int end = (end_find(s) - 1);

	return (compalindrome(s, 0, end));
}
