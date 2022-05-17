#include "main.h"

/**
 * trim - Removes whitespace from both sides of a string
 *
 * Return: The new trimmed string
 */
char *trim(char *s)
{
	int len, i, actual = 0;
	char *ret;

	while (s[len] != '\0')
		len++;

	ret = malloc(sizeof(char) * len);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			ret[actual] = s[i];
			actual++;
		}
	}
	ret[actual] = '\0';

	return (ret);
}
