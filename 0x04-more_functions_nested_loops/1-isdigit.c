#include "holberton.h"
/**
 * _isdigit - a bad copy of isdigit
 * @c: variable to validate
 * Return: 0 if not lowercase
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
