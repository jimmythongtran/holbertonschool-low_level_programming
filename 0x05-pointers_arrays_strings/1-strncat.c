/**
 * _strncat - concatenates two strings
 * @dest: one string
 * @src: one string to append to @dest string
 * @n: n bytes from source
 * Description: in contatenating the two strings
 * should overwrite terminating null byte at end of @dest
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int src_i;

	i = 0;
	while (dest[i] != '\0')
	{

	i++;
	}

	src_i = 0;
	while (src[src_i] != '\0' && src_i < n)
	{
		dest[i] = src[src_i];

	i++;
	src_i++;
	}
	return (dest);
}
