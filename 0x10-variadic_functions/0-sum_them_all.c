#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all - sum all integers given
  *@n: the number of arguements given
  *
  *Return: sum of the integers(int)
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);         /* Initialize the argument list. */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);    /* Get the next argument value. */
	va_end(ap);                  /* Clean up. */
	return (sum);
}
