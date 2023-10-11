#include <stdio.h>

void print_98_fibonacci(void);

/**
 * main - The entry point of the program
 * Description: Uses the print_98_fibonacci function to print the
 * fibonacci series
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_98_fibonacci();
	return (0);
}


/**
 * print_98_fibonacci - Prints the first 98 elements of the fibonacci series
 *
 * Return: void
 */
void print_98_fibonacci(void)
{
	long double num1 = 0;
	long double num2 = 1;
	long double sum = 0;
	short cnt = 0;

	while (cnt < 97)
	{
		sum = num1 + num2;
		printf("%.0Lf, ", sum);
		num1 = num2;
		num2 = sum;
		cnt++;
	}
	printf("%.0Lf\n", num1 + num2);
}
