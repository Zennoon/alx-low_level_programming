<h1>Bit Manipulation</h1>
This directory was created on Nov 23, 2023 to hold my answers/submissions for
the project '0x14. C - Bit manipulation'.

Bit Manipulation
In C programming there are different operators to do bit manipulation on a
literal or a variable. All of these operators except for the nor operator (~)
are binary (they take two operands). These operators are:

1. Binary or (|): Given two operands, it returns a number such that each bit in
the returned number is 1 if atleast 1 of the operands' respective bit is 1, and
0 if both of the operands' respective bit is 0.

2. Binary and (&): Given two operands, it returns a number such that each bit in
the returned number is 1 if both of the operands' respective bit is 1, and 0 if
one, or both of the operands' respective bit is 0.

3. Binary xor (^): Given two operands, it returns a number such that each bit in
the returned number is 1 if the respective bits of the operands are opposites
of each other (one is 0, and the other is 1), and 0 if the respective bits of
the operands have the same value.

4. Binary nor (~): Given one operand, it returns a number such that each bit in
the returned number is opposite (in value) of the respective bit of the operand.

5. Binary Left Shift (<<): Given two operands, it shifts the bits of the left
operand to the left by the amount specified by the right operand.

6. Binary Right Shift (>>): Given two operands, it shifts the bits of the right
operand to the right by the amount specified by the right operand.

