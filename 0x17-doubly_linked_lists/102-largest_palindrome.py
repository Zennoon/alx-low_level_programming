#!/usr/bin/python3
def is_palindrome(num):
    """
    Check whether a given number is a palindrome or not
    """
    num_to_str = str(num)
    while (num_to_str):
        if num_to_str[0] != num_to_str[-1]:
            return (False)
        num_to_str = num_to_str[1:-1]
    return (True)


def largest_palindrome():
    for i in range(999, 99, -1):
        for j in range(999, 99, -1):
            if is_palindrome(i * j):
                return (i * j)


print(largest_palindrome())
