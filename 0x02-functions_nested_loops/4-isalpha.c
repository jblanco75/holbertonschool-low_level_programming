#include "holberton.h"
/**
 * _isalpha - a bad copy of isalpha
 * @c: variable to validate
 * Return: 0 if not alpha
 */
int _isalpha(int c)
{
if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
{
return (1);
}
else
{
return (0);
}
}
