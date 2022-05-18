#include <stdlib.h>

/**
 * _strcat - Concatenates one string to another
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int posit;
	char *ret;
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen] != '\0')
		srcLen++;

	ret = malloc(sizeof(char) * (destLen + srcLen + 1));

	for (posit = 0; dest[posit] != '\0'; posit++)
		ret[posit] = dest[posit];

	for (posit = 0; src[posit] != '\0'; posit++)
		ret[destLen + posit] = src[posit];

	ret[destLen + posit] = '\0';
	return (ret);
}
