#include <stdio.h>

void sum_of_multiples(void);

/**
 * main - The entry point of the program
 *
 * Description: Uses sum_of_multiples function
 * Return: Always 0 (Success)
 */
int main(void)
{
	sum_of_multiples();
	return (0);
}


/**
 * sum_of_multiples - Computes the sum of multiples of 3 or 5 from 0 to 1024
 *
 * Description: As stated above
 * Return: void
 */
void sum_of_multiples(void)
{
	short sum = 0;
	short n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
}
