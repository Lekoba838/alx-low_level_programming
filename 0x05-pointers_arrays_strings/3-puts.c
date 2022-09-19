#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string
 * @str: prints a string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
