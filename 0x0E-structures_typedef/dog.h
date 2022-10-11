#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a dog struct
  *@name: name of the dog - string
  *@age: age of the dog - float
  *@owner: owner of the dog - string
  *
  *Description: A representation of the dog characteristics
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for unsigned int
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif

