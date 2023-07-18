#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize variables
 * @d: parameter to initializ the variables
 * @name: the name
 * @age: the age
 * @owner: the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
