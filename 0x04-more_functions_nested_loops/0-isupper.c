#include "main.h"

/**
 * _isupper - evalue if letter is uppercase
 * @c: @c: print int
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
