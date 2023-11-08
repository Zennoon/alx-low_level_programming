#include "function_pointers.h"

/**
 * print_name - Accepts a string and a func and prints the string with the func
 * @name: The string (name) to be printed
 * @f: A pointer to the function used to print name (the callback function)
 *
 * Description: This function accepts a name to be printed and a pointer to the
 * call back function used to print the name and it just calls the function
 * with the name as an argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
