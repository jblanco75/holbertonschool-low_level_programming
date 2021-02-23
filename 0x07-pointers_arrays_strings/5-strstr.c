#include "holberton.h"
/**
 * _strstr - locate a substring
 * @haystack:string
 * @needle:string
 * Return:string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack != '\0'; i++)
	{
		if (*haystack == *needle)
			break;
		haystack++;
	}
	if (*haystack == *needle)
	{
		return (haystack);
	}
	return (NULL);

}
