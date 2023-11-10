#include "calc.h"

/**
 * op_add - this function adds two integers
 * @a: first integer
 * @b: second integer
 * Return: returns value of sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function carries out subtraction of integers
 * @a: first integer
 * @b: second integer
 * Return: returns value of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: returns value of multiplication carried out
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this function carries out division between two integers
 * @a: first integer
 * @b: second integer
 * Return:returns value of the division
 */
int op_div(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		return ("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - calculates the modulus value between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: module
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
