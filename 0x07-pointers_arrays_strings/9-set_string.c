#include "holberton.h"
/**
 * set_string - set a pointer to char
 * @s:pointer to pointer
 * @to:pointer to char
 * Return:void;
 */
void set_string(char **s, char *to)
{
	char p;

	*s = to;
	to = &p;
}
