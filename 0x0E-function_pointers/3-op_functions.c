#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return - difference of a - b
 */

int op_sub(int a, int b)
{
	int dif = a - b;

	return (dif);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a & b
 */

int op_mul(int a, int b)
{
	int prd = a * b;

	return (prd);
}

/**
 * op_div - divides a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	int quo = a / b;

	return (quo);
}

/**
 * op_mod - gives the modulus of a & b
 * @a: dividend
 * @b: divisor
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
