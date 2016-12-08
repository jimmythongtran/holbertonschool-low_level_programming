#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

/*
 * TODO: created file must have permissions: rw-------
 */

int create_file(const char *filename, char *text_content)
{

/*declare variables*/

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		/* create an empty file*/

	
}
