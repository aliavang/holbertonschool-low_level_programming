#include "dog.h"
/**
 * free_dog - Free dog!
 * @d: Pointer to struct dog
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
