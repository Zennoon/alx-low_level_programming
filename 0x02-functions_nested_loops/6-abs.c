/**
 * _abs - Computes and returns the absolute value of a given integer
 * @n: The integer the absolute value of which is computed
 *
 * Description: The function checks if n is negative and if so,
 * returns -n. For all other cases, n itself is returned
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
