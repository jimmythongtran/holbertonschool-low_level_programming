#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

/*declare variables*/
	int fd;
	int i;
	int check;

/*specs*/
	if (filename == NULL)
		return (-1);

/*opens file with permissions: rw------- */
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	if (i > 0)
		check = write(fd, text_content, i);

	if (check == -1)
		return (-1);

/*clean up*/
	close(fd);
	return (1);
}
