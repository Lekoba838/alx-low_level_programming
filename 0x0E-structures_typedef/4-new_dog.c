#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;

	struct dog *n_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0'
	        lenN++;
		
	leno = 0;
	while (owner[leno] != '\0'
		leno++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
	free(n_dog)
	return (NULL);
	}
	

