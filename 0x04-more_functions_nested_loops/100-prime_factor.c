#include <stdio.h>
void find_largest_pfactor(void);
/**
 * main - The entry point of the program
 *
 * Description: Finds an prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	find_largest_pfactor();
	return (0);
}

/**
 * find_largest_pfactor - Finds and prints the largest prime factor of the num
 *
 * Description: Initially, this function was coded to decrement tmp one number
 * at a time, but then I noticed that each time tmp was divisible (not prime),
 * the next viable option was tmp / tmp2, not tmp--. So now, it is much faster.
 * Return: The largest prime factor of 612852475143
 */
void find_largest_pfactor(void)
{
	long unsigned num = 612852475143;
	long unsigned tmp = num;

	while (tmp >= 2)
	{
		if (!(num % tmp))
		{
			short is_prime = 1;
			long unsigned tmp2 = 2;

			while (tmp2 < tmp)
			{
				if (!(tmp % tmp2))
				{
					is_prime = 0;
					tmp = tmp / tmp2;
					break;
				}
				tmp2++;
			}
			if (is_prime)
			{
				printf("%lu\n", tmp);
				break;
			}
		}
	}
}
