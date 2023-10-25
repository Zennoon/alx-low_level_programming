#include "main.h"

/**
 * check_prime - Gets a valid int from is_prime_number and checks if prime
 * @n: The number to check
 * @d: The number to divide n with
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int d)
{
	if (d >= n / 2)
	{
		return (1);
	}
	if (!(n % d))
	{
		return (0);
	}
	return (check_prime(n, d + 1));
}

/**
 * is_prime_number - Checks if a given integer is prime or not
 * @n: The integer to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
