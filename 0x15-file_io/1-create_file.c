#include "holberton.h"
/**
 * create_file -  function that creates a file.
 * @filename: Pointer to char, in this variable is stored the name of
 * the file to write.
 * @text_content: Point to char with chars to write into a file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write fails, etc)
 */
int create_file(const char *filename, char *text_content)
{
	int of, i;

	if (!filename)
		return (-1);

	for (i = 0; text_content[i]; i++)

	of = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		write(of, " ", i);
	}
	close(of);
	return (1);
}
