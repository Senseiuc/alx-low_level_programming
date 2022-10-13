#include "variadic_functions.h"
/**
  *print_numbers - print integers with a seperator
  *@separator: a string
  *@n: number of arguments
  *
  *Return: sum of the integers(int)
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);         /* Initialize the argument list. */
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);                  /* Clean up. */
}
