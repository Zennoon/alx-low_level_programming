#include <stdio.h>
#include "1-pi.h"

/**
 * main - The entry point of the program
 *
 * Description: Makes use of the PI macro defined in 1-pi.h to calc the area
 * of a circle of some radius
 * Return: Always 0 (Success)
 */
int main(void)
{
	float a;
	float r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);
	return (0);
}
