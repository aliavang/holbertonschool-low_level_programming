#include "dog.h"
/**
 * _strcpy - Copy string from src to dest
 * @src: Where string is stored
 * @dest: Buffer to copy string to
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p_dest;
	int index;

	p_dest = dest;
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (p_dest);
}
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
	mango->name = _strcpy(mango->name, name);
	mango->age = age;
	mango->owner = _strcpy(mango->owner, owner);
	return (mango);
}
