#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize variable type of strut dog
 * @d: pointer1
 * @name: pointer2
 * @age: age
 * @owner: pointer3
 * Return: nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
