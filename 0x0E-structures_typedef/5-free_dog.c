#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog
 * free_dog - frees dog
 * @d: pointer
 * Return: nothing
 **/
void free_dog(dog_t *d)
{
if (d !=NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
