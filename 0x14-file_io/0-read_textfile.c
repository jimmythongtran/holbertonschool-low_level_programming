#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: pointer to the filename
 * @letters: the number of letters it should read and print
 * Return: Returns the actual number of letters it could read and print
 */

/*we want to output the Oscar file and printed chars [468]*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	
	char c;

/*spec*/
	if (filename == NULL)
		return (0);

/* 1st para: path of the file */
/* 2nd para: open mode, what do you plan on doing with your file? */
/* returns a file struct pointer */
	file = open(filename, "O_RDONLY");

/*fgetc returns the EOF constant, and the file constant whenever its finished reading*/
/*EOF is non-printable character*/
	while ((c = fgetc(file)) != EOF);
	{
		printf("%c", c);
	}

/*clean up*/
	fclose(file);

/* return the actual number of letters*/
	return (0);
}
