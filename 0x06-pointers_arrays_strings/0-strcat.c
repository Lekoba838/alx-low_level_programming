#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by appended
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp_dest);
}

