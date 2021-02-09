#include "holberton.h"
/**
 * c : entry variable
 * _isalpha - checks if alpha or not
 * Return: 0 if not alpha
 */
int _isalpha(int c);
{
if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
