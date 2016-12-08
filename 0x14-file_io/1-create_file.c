#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

/*declare variables*/
	int fd;
	int i;
	int check;

/*specs*/
	if (filename == NULL)
		return (-1);

/*opens file with permissions: rw------- */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IREAD | S_IWRITE);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}

	check = write(STDIN_FILENO, text_content, i);
	if (check == -1)
		return (-1);

/*clean up*/
	close(fd);
	return (1);
}
