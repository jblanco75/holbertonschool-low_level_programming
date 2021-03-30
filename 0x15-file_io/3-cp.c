#include "holberton.h"
/**
 * main - Program that copies the content of a file to another file
 * @ac: count
 * @av: array
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int file_from, file_to, read_from, write_to;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	file_from = open(av[1], O_RDONLY);

	if (file_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);

	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			exit(99);

	do {
		read_from = read(file_from, buffer, 1024);
		write_to = write(file_to, buffer, read_from);
	} while (read_from == 1024);

	if (read_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (write_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (close(file_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
