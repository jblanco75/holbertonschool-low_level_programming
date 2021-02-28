#include <stdio.h>
#include <stdlib.h>
/**
 * main - Returns multiplication of input params
 * @argc: count
 * @argv: array
 *
 * Return: Always 0
 **/
int main(int argc, char **argv)
{
	int mul;
	int i;

	if (argv[1] != '\0' && argv[2] != '\0')
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
