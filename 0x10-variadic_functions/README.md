This directory was created on Nov 09, 2023 to hold my answers/submissions for
the project '0x10. C - Variadic functions'

Variadic functions are functions that are able to take in a variable number,
and type of arguments. In other words, the number, and the type of arguments
can vary from one function call to another. The C programming language has no
built in function to handle the optional arguments. We can use the types and
Macros that are defined in stdarg.h, or in previous C implementations, in
varargs.h. These functions include:

The type va_list, which is an argument pointer,

The function like macro va_start, which is used to initialize an argument
pointer (of type va_list). It takes two arguments: The argument pointer to be
initialized, and the last required argument.

The function like macro va_arg, which is used to iterate over the optional
arguments. Each time it is called, it returns the argument that the argument
pointer is pointing to, and moves the pointer to the next argument. So the
next time it is called, it returns the next argument. It takes two arguments:
the argument pointer, and the type of the expected argument: This type has to
be self-promoting, it can't be a type that is promoted automatically. For
instance, when a float is passed as an optional argument, it is promoted to a
double, when a short int, or a char is passed, it is promoted to either an int,
or an unsigned int. So, float, char, or short int can't be passed to va_args.

The function like macro va_end, which is used to signal that we are done with
using the argument pointer. On the GCC compiler, this macro doesn't do anything
but, it is useful to include it for compatibility purposes.

In ISO C99, the macro va_copy was added. It is used to copy one argument pointer
into another, meaning, initialize one argument pointer to point at the argument
that another pointer is pointing to. It takes two arguments, the destination
pointer, and the source pointer.

0-sum_them_all: The function is variadic (it accepts a variable number of args,
with variable types). Using the type and macros defined in stdarg.h, it goes
through the optional arguments and sums them up and returns their values.
