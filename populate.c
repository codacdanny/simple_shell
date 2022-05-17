#include "main.h"

/**
 * populate - This transforms the string to tokens
 * @s: The getline string
 *
 * Return: The array of string commands
 */
char **populate(char *s)
{
	int len = 1, counter = 0, i;
	char *str = _strdup(s);
	char *token;
	char **toks;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			len++;
	}

	toks = malloc(sizeof(char *) * len);
	token = strtok(str, " \t\r\n\v\f\0");

	while (token)
	{
		toks[counter] = token;
		token = strtok(NULL, " \t\r\n\v\f\0");
		counter++;
	}
	toks[counter] = token;
	return (toks);
}
