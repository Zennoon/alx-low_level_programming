#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char s1[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\
\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #\
infernumisfun\n";
        print_buffer(s1, sizeof(s1));
        return (0);
}
