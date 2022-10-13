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
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}

	printf("\n");

	va_end(ap);                  /* Clean up. */
}
