#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function prints numbers 1 - 100. But, it prints 'Fuzz' for
 * multiples of 3, 'Buzz' for multiples of 5, and 'FizzBuzz' for multiples of
 * both
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (!(i % 15))
		{
			printf("FizzBuzz\n");
		}
		else if (!(i % 3))
		{
			printf("Fizz\n");
		}
		else if (!(i % 5))
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return (0);
}
