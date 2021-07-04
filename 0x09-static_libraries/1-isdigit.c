#include "holberton.h"
/**
 * _isdigit - a bad copy of isdigit
 * @c: variable to validate
 * Return: 0 if not lowercase
 */
int _isdigit(int c)
{
	char digit;

	if (c >= '0' && c <= '9')
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);

}
