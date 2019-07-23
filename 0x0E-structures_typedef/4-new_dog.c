#include "dog.h"
/**
 * new_dog - New dog profile
 * @name: New dog name
 * @age: New dog age
 * @owner: New dog owner
 *
 * Return: Pointer to new dog profile
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mango;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	mango = malloc(sizeof(dog_t));
	if (mango == NULL)
	{
		return (NULL);
	}
	mango->name = malloc(sizeof(name));
	if (mango->name == NULL)
	{
		free(mango);
		return (NULL);
	}
	mango->owner = malloc(sizeof(owner));
	if (mango->owner == NULL)
	{
		free(mango->name);
		free(mango);
		return (NULL);
	}
	mango->name = name;
	mango->age = age;
	mango->owner = owner;
	return (mango);
}
