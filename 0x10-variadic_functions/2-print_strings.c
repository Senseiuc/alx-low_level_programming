#include "variadic_functions.h"
/**
  *print_strings - print strings only
  *@separator: a string
  *@n: number of arguments
  *
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);         /* Initialize the argument list. */
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(ap);                  /* Clean up. */
}
