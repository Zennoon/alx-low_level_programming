/**
 * _islower_1 - checks whether a given character is lowercase or not
 * @c: The character to be checked
 *
 * Description: The function uses the ASCII code of c to determine whether
 * it is lowercase or not.
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower_1(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

/**
 * _isupper_1 - checks whether a given character is uppercase or not
 * @c: The character to be checked
 *
 * Description: The function uses the ASCII code of c to determine whether
 * it is uppercase or not.
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper_1(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

/**
 * _isalpha - Checks whether a given character is alphabetic or not
 * @c: The character to be checked
 *
 * Description: The function uses the functions _islower and _isupper because
 * an alphabet character is either uppercase or lowercase
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isalpha(char c)
{
	if (_islower_1(c) || _isupper_1(c))
	{
		return (1);
	}
	return (0);
}
