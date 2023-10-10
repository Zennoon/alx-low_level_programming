#include <stdio.h>

void fibonacci_even_sum(void);

/**
 * main - The entry point of the program
 *
 * Description: Uses the fibonacci_even_sum function
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_even_sum();
	return (0);
}


/**
 * fibonacci_even_sum - Computes the sum of even elements of fibonacci
 *
 * Description: Computes the sum of even elements of the fibonacci
 * series that do not exceed 4000000
 * Return: void
 */
void fibonacci_even_sum(void)
{
	long num1 = 0;
	long num2 = 1;
	long element = 0;
	long even_sum = 0;

	while (element <= 4000000)
	{
		element = num1 + num2;
		num1 = num2;
		num2 = element;
		if (!(element % 2))
		{
			even_sum += element;
		}
	}
	printf("%ld\n", even_sum);
}
