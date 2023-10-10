#include <stdio.h>

void print_fibonacci(void);

/**
 * main - The entry point of the program
 *
 * Description: Uses the print_fibonacci function to print the fibonacci series
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci();
	return (0);
}


/**
 * print_fibonacci - Prints the first 50 elements of the fibonacci series
 *
 * Description: The function uses a loop
 * Return: void
 */
void print_fibonacci(void)
{
	long num1 = 0;
	long num2 = 1;
	long sum = 0;
	short cnt = 0;

	while (cnt < 49)
	{
		sum = num1 + num2;
		printf("%ld, ", sum);
		num1 = num2;
		num2 = sum;
		cnt++;
	}
	printf("%ld\n", sum);
}
