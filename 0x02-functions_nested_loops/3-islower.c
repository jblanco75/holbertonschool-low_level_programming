#include "holberton.h"
/**
 * _islower : a bad copy of islower
 * int c : variable to validate
 * Return: 0 if not lowercase
 */
int _islower(int c);
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
