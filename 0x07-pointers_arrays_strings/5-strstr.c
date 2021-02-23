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

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)


			if (*haystack == *needle)
			{
				return (haystack);
			}
		haystack++;
	}
	return (NULL);
}
