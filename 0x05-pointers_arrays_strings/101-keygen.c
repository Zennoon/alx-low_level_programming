#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Generates a string of random character whose collective ASCII
 * code sum is 2772
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[84]; /* Stores the password string */
	char *ptr;
	int sum;
	int rem;

	sum = 0;
	ptr = arr; /* Another pointer to the array so I don't alter arr */
	srand(time(NULL));
	while (sum <= 2646) /* Leaving just enough room for 1 char (126)*/
	{
		char c = (rand() % 94) + 33; /* The char is between 33-126 */
		sum += c;
		*ptr = c; /* arr is being filled */
		ptr++;
	}

	rem = 2772 - sum; /* What is left to reach sum = 2772 */
	if (rem < 33) /* Lower than the minimum valid ASCII code (of !)*/
	{
		ptr--; /* Go back one character (element) */
		rem += *ptr;

		/* Did this because now rem could be greater than 126 */
		if (rem > 126)
		{
			char c1 = rem / 2; /* This works if rem is odd or even */
			char c2 = rem - c1; /* Rather than checking parity */

			*ptr = c1;
			ptr++;
			*ptr = c2;
			ptr++;
			sum += c1 + c2;
		}
		else
		{
			*ptr = rem;
			sum += rem;
		}
	}
	else
	{
		char c = rem;

		*ptr = c;
		ptr++;
		sum += rem;
	}
	*ptr = '\0';

	printf("%s", arr);
	return (0);
}
