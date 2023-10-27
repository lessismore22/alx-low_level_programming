#include "main.h"

/**
 * is_prime_number - this function checks if an integer is
 * a prime number
 * @n:integer number
 * Return: 1 if prime number, if otherwise 0.
 */
int is_prime_number(int n)
{
	int prime_number(int c, int n);

	int c = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n % n == 0 || n % 1 == 0)
	{

		if (prime_number(c, n) != 0)
		{
			return (1);
		}

		else
		{
			return (0);
		}

	}
}
/**
 * prime_number - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @c: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */
int prime_number(int c, int n)
{
	if (c < n)
	{
		if (n % c == 0)
		{
			return (0);
		}
		else
		{
			++c;
			return (prime_number(c, n));
		}
	}
	else
	{
		return (1);
	}
}
