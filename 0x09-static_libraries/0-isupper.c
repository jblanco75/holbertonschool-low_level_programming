#include "holberton.h"
/**
 * _isupper - a bad copy of isupper
 * @c: variable to validate
 * Return: 0 if not lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
