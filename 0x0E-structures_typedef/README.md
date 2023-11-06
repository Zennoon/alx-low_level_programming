This directory was created on Nov 6, 2023 to hold my answers/submissions for
the project '0x0E. C - Structures, typedef'

dog.h: The file contains the definition for the dog structure. Remember, unlike
functions, structs require a semi-colon after their declaration, else when the
preprocessor "includes" the header file in a C source file, it will complain
saying 'an identifier (;) was expected before ...'

1-init.c: The function acceptss pointer to a dog structure instance, and values
for the fields of the struct, and initializes the struct with the values.