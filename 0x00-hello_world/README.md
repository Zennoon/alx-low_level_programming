This directory was created to hold my answers / submissions for the
0x00. C - Hello, World project of the ALX SE foundations program

0-preprocessor: The script uses the -E flag with the gcc compiler to stop the
compilation process after the preprocessing stage. It also uses the -o flag to
move the output to a file called c

1-compiler: The script uses the -c flag with the gcc compiler to stop the
compilation process before the linking stage. By default, the output is placed
in a file of the same name as the source code file, but a .o extension

2-assembler: The script uses the -S flag with the gcc compiler to stop the
compilation process after the compiler finishes its work (generating
assembly code)

3-name: The script uses the -o option with the gcc compiler to divert the
executable output from the default a.out to a file called cisfun

4-puts.c: The source code uses the puts function to print the specified string.
It always returns a value of 0. It uses the betty style (indentation,
brace position, usage of void, documentation and so on)

5-printf.c: The source code uses the printf to print the specified string
literal. Like the puts one, it always returns 0, and alse uses betty style

6-size.c: The source code uses the sizeof operator to print the sizes of the
various intrinsic data types in the machine that the code is compiled on.

100-intel: The script uses the -S flag of the gcc compiler to generate assembly
code. The -masm option is used to change the assembly code syntax from the
default AT&T syntax to intel syntax

101-quote.c: The source code uses the perror function from the stdio library to
print the string literal to the standard output
