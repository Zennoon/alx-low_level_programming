/**
 * _islower - Checks if a given character is lowercase or not
 * @c: The character to be checked
 *
 * Description: The function uses the ASCII code of the character to check
 * whether it is a lowercase letter or not.
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
