#include "main.h"
/**
 * _strcmp - C function that compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			comp = 1;
			break;
		}
		i++;
	}
	if (comp == 0)

		return (0);

	else

		return (1);
}
