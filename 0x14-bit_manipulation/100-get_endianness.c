#include "main.h"

/**
 * get_endianness - Returns the endianness that the computer architecture uses
 *
 * Description: Endianness is the order that the computer stores the bits of
 * some data in memory. Little endian means the computer stores the bits in
 * reverse order (the most significant bit is stored last), whereas big endian
 * is when the most significant bit is stored first
 * Return: 1 if the architecture is using little endian, and 0 if it is using
 * big endian
 */
int get_endianness(void)
{
	int endi = 0;
	unsigned int var = 2147483648;
	char *ptr = (char *)&var;

	if (*ptr == 0)
	{
		endi = 1;
	}
	return (endi);
}
