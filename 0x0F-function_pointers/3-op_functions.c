#include "3-op_functions.c"

/**
 * op_add - calculate the sum of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first interger
 * @b: second interger
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the division of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return:  of division a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of two intergers
 *  @a: first interger
 *  @b: second interger
 *
 *  Return: remainder of a divited b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
