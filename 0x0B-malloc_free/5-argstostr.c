#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count
 * @av: array
 *
 * Return: Always 0
 **/
char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *j;

	if (ac == 0 || av == 0)
		return (0);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			d++;
		d++;
	}

	j = malloc(sizeof(char) * (d + 1));

	if (d == 0)
		return (0);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			j[c] = av[a][b];
			c++;
		}
		j[c] = '\n';
		c++;
	}
	return (j);
}
