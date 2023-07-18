#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int i, j, k, l;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	new_name = malloc(sizeof(char) * (i + 1));
	if (!new_name)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (j + 1));
	if (!new_owner)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new_name[k] = name[k];
	for (l = 0; l <= j; l++)
		new_owner[l] = owner[l];
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
