/**
 * _strcat - concatenates two strings
 * @dest: one string
 * @src: one string to append to @dest string
 * Description: in contatenating the two strings
 * should overwrite terminating null byte at end of @dest
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int src_i;

	i = 0;
	while (dest[i] != '\0')
	{
	
	i++;
	}

	src_i = 0;
	while (src[src_i] != '\0')
	{
		dest[i] = src[src_i];
	
	i++;
	src_i++;
	}

	i++;
	dest[i] = '\0';
	return (dest);
}
