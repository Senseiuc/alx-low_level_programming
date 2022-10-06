#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - creates a space on heap
  *@b:the size of space to be created
  *
  *Return: a pointer or 98
  */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = (void *) malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
