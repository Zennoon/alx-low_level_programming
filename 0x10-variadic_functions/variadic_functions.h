#ifndef VARARG_H
#define VARARG_H

int _putchar(char c);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_strings_2(const char *, const unsigned int, ...);
void print_all(const char *const, ...);

typedef struct data_types
{
	char symbol;
	void (*f)(va_list ap);
} dts;
#endif
