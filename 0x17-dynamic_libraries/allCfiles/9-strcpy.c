/**
 * _strcpy - copy a string from src to dest
 * @dest: where to copy string to
 * @src: source for string value
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
