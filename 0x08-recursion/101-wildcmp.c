#include "main.h"

/**
 * wildcmp - Compares two strings where one could contain the * wildcard
 * @s1: The first string
 * @s2: The second string, which could also contain the '*'
 *
 * Description: This has two base cases to the recursion, if s1 is empty, and
 * s2 isn't, s1 != s2, if both are empty, s1 == s2. So, if s1 is empty, we
 * return !*s2 (1 if s2 is also empty, 0 if not). There are also recursive
 * calls in two places. 1 - If the current character of s2 is not '*', if the
 * current character in both s1 & s2 are the same, we call the function with
 * the next characters of both s1 and s2, if they are different, s1 != s2, and
 * we return 0. 2-If the current character of s2 is '*', there are 2 cases,
 * the * represents an empty character, or it represents 1 or more characters,
 * so we do 2 recursive calls. One, we call the function with s1 as is, and s2
 * incremented (so the * is disregarded), and two, we call the function with
 * s1 incremented and s2 as is, so the * is assumed to represent 1 character of
 * s1. You will understand better when you go through the code
 * Return: 1 if s1 = s2, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 != '*')
	{
		if (*s1)
		{
			return ((*s1 == *s2) && wildcmp(s1 + 1, s2 + 1));
		}
		return (!*s2);
	}
	return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
}
