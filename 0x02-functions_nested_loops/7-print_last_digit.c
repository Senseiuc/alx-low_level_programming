#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 *@c: takes in a c argument
 *
 * Description: last digit
 *
 * Return: an integer
 */

int print_last_digit(int c)
{
	int l_d = abs(c % 10);
	_putchar(l_d + '0');
	return (l_d);

}
