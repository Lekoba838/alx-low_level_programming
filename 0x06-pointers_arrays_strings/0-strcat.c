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
int x, y;

for (x = 0; dest[x] != '\0'; x++)
	;
for (y = 0; src[y] != '\0'; y++)
{
	dest[x] = src[y];
	x++;
}
dest[x] = '\0';

return (dest);
}
