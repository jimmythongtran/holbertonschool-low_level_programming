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
	int inputFile;

/*specs*/
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		/* create an empty file*/

/*opens file with permissions: rw------- */
	inputFile = open(filename, O_RDWR | O_CREAT, 0600);
	if (inputFile == -1)
		return (0);

/*clean up*/
	close(inputFile);
	return(1);
}
