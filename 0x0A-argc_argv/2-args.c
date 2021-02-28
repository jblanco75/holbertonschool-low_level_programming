#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints args received
 * @argc: count
 * @argv: array
 *
 * Return: Always 0
 **/
int main(int argc, char **argv)
{
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}

	return (0);
}
