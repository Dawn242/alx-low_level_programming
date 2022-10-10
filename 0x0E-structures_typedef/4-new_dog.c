#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ddog;
	int i, dname, downer;

	ddog = malloc(sizeof(*ddog));
	if (ddog == NULL || !(name) || !(owner))
	{
		free(ddog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	ddog->name = malloc(dname + 1);
	ddog->owner = malloc(downer + 1);

	if (!(ddog->name) || !(ddog->owner))
	{
		free(ddog->owner);
		free(ddog->name);
		free(ddog);
		return (NULL);
	}

	for (i = 0; i < downer; i++)
		ddog->owner[i] = owner[i];
	ddog->owner[i] = '\0';

	return (ddog);
}
