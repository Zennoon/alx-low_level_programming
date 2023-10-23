#include "main.h"

/**
 * set_string - Changes the value of a pointer to point to another character
 * @s: A pointer to the pointer we are setting to another address
 * @to: The address we are setting s to
 * Description: s is a double pointer. It points to the pointer we are trying
 * to change the value of (change the address it is pointing to). to is a
 * pointer to a character (It is a string)
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
