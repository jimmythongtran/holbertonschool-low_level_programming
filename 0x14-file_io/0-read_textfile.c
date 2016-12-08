#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: pointer to the filename
 * @letters: the number of letters it should read and print
 * Return: Returns the actual number of letters it could read and print
 */

/*we want to output the Oscar file and printed chars [468]*/
/*
 * TODO: get Oscar file to output
 * TODO: set up a counter for the characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
/*a file pointer holds the disk location of the disk file working with*/
	int inputFile;	
/*	char c;*/
	char buf[500];

/*spec*/
	if (filename == NULL)
		return (0);

/* 1st para: path of the file */
/* 2nd para: open mode, what do you plan on doing with your file? */
	inputFile = open(filename, O_RDONLY);

/*getc returns the EOF constant, and the file constant whenever its finished reading*/
/*EOF is non-printable character*/
	read(inputFile, buf, letters);
	buf[letters] = '\0';
/*
	while ((c = getc(inputFile)) != EOF);
	{
		printf("%c", c);
	}
*/

/*clean up*/
	close(inputFile);

/* return the actual number of letters*/
	return (0);
}
