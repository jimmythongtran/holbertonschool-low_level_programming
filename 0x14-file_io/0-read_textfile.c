#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: pointer to the filename
 * @letters: the number of letters it should read and print
 * Return: Returns the actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
/*a file pointer holds the disk location of the disk file working with*/
	int fd;
	char *buf;
	ssize_t count, countCheck;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

/*buf points to an area in memory where data is stored*/
	count = read(fd, buf, letters);
	buf[letters] = '\0';

	countCheck = write(STDOUT_FILENO, buf, count);
	if ((countCheck == -1) || (count != countCheck))
	{
		free(buf);
		return (0);
	}

	close(fd);

/* return the actual number of letters*/
	return (count);
}
