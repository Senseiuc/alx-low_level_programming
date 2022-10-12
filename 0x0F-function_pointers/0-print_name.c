#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: address of the string
  *@f: address if the function f
  *
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
