#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - this function prints numbers
 * @n: number of integers in the function
 * @separator: seperator between two numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}

	printf("\n");

	va_end(ag);
}
