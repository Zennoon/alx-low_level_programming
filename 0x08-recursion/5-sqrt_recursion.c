#include "main.h"

/**
 * get_next_guess - Calculates and returns the next guess for test_sqrt
 * @n: The number whose sqrt is being searched
 * @prev: The previous guess
 * Description: The next guess is (prev + (n / prev)) / 2
 * Return: The next guess
 */
int get_next_guess(int n, int prev)
{
	return ((prev + (n / prev)) / 2);
}

/**
 * test_sqrt - Tests whether a guess is the sqrt of a number recursively
 * @n: The number whose sqrt is being searched
 * @guess: The guess which is checked as the sqrt of n
 *
 * Return: If n is a valid perfect square, the sqrt of n. Otherwise, -1
 */
int test_sqrt(int n, int guess)
{
	int sqr;

	sqr = guess * guess;
	if (n < 0 || sqr < n)
	{
		return (-1);
	}
	if (n == sqr)
	{
		return (guess);
	}
	return (test_sqrt(n, get_next_guess(n, guess)));
}

/**
 * _sqrt_recursion - Finds and returns the sqrt of an int, if available
 * @n: The number whose sqrt is being searched
 *
 * Return: If n is a valid perfect square, the sqrt of n. Otherwise, -1
 */
int _sqrt_recursion(int n)
{
	int init_guess;

	init_guess = n;
	return (test_sqrt(n, init_guess));
}
