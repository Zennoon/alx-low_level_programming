#include <stdio.h>
#include "main.h"

/**
 * get_next_guess - Calculates and returns the next guess for test_sqrt
 * @n: The number whose sqrt is being searched
 * @prev: The previous guess
 * Description: The next guess is (prev + (n / prev)) / 2
 * Return: The next guess
 */
int get_next_guess(unsigned int n, unsigned prev)
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
int test_sqrt(unsigned int n, unsigned long guess)
{
	if (n > guess * guess)
	{
		return (-1);
	}
	if (n == guess * guess)
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
	unsigned long init_guess;

	if (n < 0)
	{
		return (-1);
	}
	init_guess = n;
	return (test_sqrt((unsigned) n, init_guess));
}
