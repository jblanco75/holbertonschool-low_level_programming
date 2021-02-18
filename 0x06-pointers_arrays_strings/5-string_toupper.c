#include "holberton.h"
/**
 * string_toupper - change lowercase to uppercase
 * @c:string
 * Return:char
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
