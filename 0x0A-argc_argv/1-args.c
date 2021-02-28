#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the number of args
 * @argc: count
 * @argv: array
 *
 * Return: Always 0
 **/
int main(int argc, char **argv)
{
	(void) **argv;

	printf("%d\n", argc - 1);
	return (0);
}
