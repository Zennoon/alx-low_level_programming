#include <stdio.h>
#include "calc.h"

/**
 * op_add - Returns the sum of two given numbers
 * @n1: The first operand
 * @n2: The second operand
 *
 * Return: n1 + n2
 */
int op_add(int n1, int n2)
{
	return (n1 + n2);
}

/**
 * op_sub - Returns the difference of two given numbers
 * @n1: The first operand
 * @n2: The second operand
 *
 * Return: n1 - n2
 */
int op_sub(int n1, int n2)
{
	return (n1 - n2);
}

/**
 * op_mul - Returns the product of two given numbers
 * @n1: The first operand
 * @n2: The second operand
 *
 * Return: n1 * n2
 */
int op_mul(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * op_div - Returns the quotient of two given numbers
 * @n1: The first operand
 * @n2: The second operand
 *
 * Return: n1 / n2
 */
int op_div(int n1, int n2)
{
	return (n1 / n2);
}

/**
 * op_mod - Returns the modulo of two given numbers
 * @n1: The first operand
 * @n2: The second operand
 *
 * Return: n1 % n2
 */
int op_mod(int n1, int n2)
{
	return (n1 % n2);
}
