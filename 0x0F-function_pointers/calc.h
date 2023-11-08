#ifndef CALC_H
#define CALC_H

#define EXIT_WRONG_NUM_ARGS 98
#define EXIT_INVALID_OP 99
#define EXIT_DIV_BY_0 100

/**
 * struct op - Structure for holding an operation symbol, and a function for it
 * @op: The symbol of the operation
 * @f: Teh function to handle the operation
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *))(int, int);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
#endif
