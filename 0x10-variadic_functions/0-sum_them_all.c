#include "variadic_functions.h"

/**
 * sum_them_all - this is a function that sums all it's
 * parameters
 * @n: constant integer
 * Return: returms the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ag, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ag, int);
	va_end(ag);
	return (sum);
}
