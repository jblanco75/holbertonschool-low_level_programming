#include "holberton.h"
/**
 *is_palindrome - returns if a string is palindromic.
 * @s: the string to be operated.
 *
 * Return: the helper function _prime(n, 5)
 */

int is_palindrome(char *s)
{
	int _strlen_recursion(char *s)
	{
		if (*s == '\0')
		{
			return (0);
		}
		else
		{
			return (1 + _strlen_recursion(s + 1));
		}
	}

	int is_palindrome(char *s)

	{
		int l = 0;
		int h = _strlen_recursion(s) - 1;
    
		while (h > l) 
		{ 
			if (s[l++] != s[h--]) 
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}


}
