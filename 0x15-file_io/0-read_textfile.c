#include "holberton.h"
/**
 * read_textfile - that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: Pointer to char, in this variable is stored the name of
 * the file    to read and print.
 * @letters: letters is the number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of, rf, wf;
	char *buffer;

	if (filename == NULL)
		return (0);

	of = open(filename, O_RDONLY);

	if (of == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	rf = read(of, buffer, letters);
	wf = write(STDOUT_FILENO, buffer, rf);

	if (wf < 0)
		return (0);

	free(buffer);
	close(of);
	return (rf);
}
