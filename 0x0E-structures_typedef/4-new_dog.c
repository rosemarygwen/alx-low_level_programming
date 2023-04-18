#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - funtion
 * @name: param
 * @age: param
 * @owner: param
 * Return: new_doggy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *new_doggy;

	new_doggy = malloc(sizeof(dog_t));
	if (new_doggy == NULL)
		return (NULL);
	if (name == NULL || owner == NULL || name[0] == '\0' || owner[0] == '\0')
	{
		free(new_doggy);
		return (NULL);
	}
	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	(*new_doggy).name = malloc(sizeof(char) * (a + 1));
	(*new_doggy).owner = malloc(sizeof(char) * (b + 1));
	if (!((*new_doggy).name) || !((*new_doggy).owner))
	{
		free((*new_doggy).owner);
		free((*new_doggy).name);
		free(new_doggy);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		(*new_doggy).name[c] = name[c];
	(*new_doggy).name[c] = '\0';
	for (c = 0; c < b; c++)
		(*new_doggy).owner[c] = owner[c];
	(*new_doggy).owner[c] = '\0';
	if (age < 0)
	{
		free((*new_doggy).owner);
		free((*new_doggy).name);
		free(new_doggy);
		return (NULL);
	}
	(*new_doggy).age = age;
	return (new_doggy);
}
