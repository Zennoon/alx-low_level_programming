#include "main.h" /* Not really needed */

/**
 * reset_to_98 - Changes the value of an int variable to 98 using pointers
 * @n: The pointer of the integer variable whose value is to be changed
 *
 * Description: Uses the pointer to access and change the value stored at that
 * memory location (where the variable is located)
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
