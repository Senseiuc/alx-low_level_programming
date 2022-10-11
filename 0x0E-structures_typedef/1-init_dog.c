#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a dog struct
  *@d: address of the dog struct
  *@name: name of the dog - string
  *@age: age of the dog - float
  *@owner: owner of the dog - string
  *
  *Description: A representation of the dog characteristics
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
