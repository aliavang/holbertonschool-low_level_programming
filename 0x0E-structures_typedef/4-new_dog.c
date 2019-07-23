#include "dog.h"
/**
 * _strdup - Duplicate a string to newly allocated space
 * @str: String to be duplicated
 *
 * Return: Pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *p_str;
	int index, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len = len + 1;
	p_str = malloc(sizeof(char) * len);
	if (p_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (str[index] != '\0')
	{
		p_str[index] = str[index];
		index++;
	}
	p_str[index] = '\0';
	return (p_str);
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
	mango->name = _strdup(name);
	if (mango->name == NULL)
	{
		free(mango);
		return (NULL);
	}
	mango->age = age;
	mango->owner = _strdup(owner);
	if (mango->owner == NULL)
	{
		free(mango->name);
		free(mango);
		return (NULL);
	}
	return (mango);
}
