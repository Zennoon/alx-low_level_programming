#include "main.h"

/**
 * _pow_recursion - Calculates the value of an int raised to another int
 * @x: The base
 * @y: The exponent (what x is raised to the power of)
 *
 * Description: x to the power of 0 = 1 (Base case)
 *              x to the power of y = x * (x to the power of (y - 1))
 * Return: x raised to the power of y if y >= 0, -1 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (!y) /* Base case */
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
