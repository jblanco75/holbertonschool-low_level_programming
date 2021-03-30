#include "holberton.h"
/**
 * append_text_to_file -  function that creates a file.
 * @filename: Pointer to char, in this variable is stored the name of
 * the file to write.
 * @text_content: Point to char with chars to write into a file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write fails, etc)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, i = 0;

	if (filename == NULL)
		return (-1);

	of = open(filename, O_WRONLY | O_APPEND);

	if (of == EOF)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}


	wf = write(of, text_content, i);

	if (wf == EOF)
		return (-1);

	close(of);
	return (1);
}
