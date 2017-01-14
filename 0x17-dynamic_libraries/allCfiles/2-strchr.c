/**
 * *_strchr - finding where c appears first
 * @s: target objective
 * @c: target
 * Return: everything after the target
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
/*{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}*/
