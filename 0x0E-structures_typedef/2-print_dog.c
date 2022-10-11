#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - prints details of the dog
  *@d: address of the dog struct
  *
  *Description: prints dog details
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		!d->name ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		!d->age ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
		!d->owner ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
