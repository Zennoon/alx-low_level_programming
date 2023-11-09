#ifndef VARARG_H
#define VARARG_H

int _putchar(char c);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_strings_2(const char *, const unsigned int, ...);
void print_all(const char * const, ...);

/**
 * struct data_types - Used in 3-print_all_2 to choose appropriate func
 * @symbol: The format specifier (one of 'c', 'i', 'f', or 's')
 * @f: The function to handle that type
 */
typedef struct data_types
{
	char symbol;
	void (*f)(va_list ap);
} dts;
#endif
