#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string
 *
 * @s: reverses a string.
 * Return: always 0
 */

void rev_string(char *s)
{
	char s[10] = "My Soccer";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
