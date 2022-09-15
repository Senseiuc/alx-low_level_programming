#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 *@c: takes in a c argument
 *
 * Description: checks if it's a digit
 *
 * Return: an integer(1 or 0)
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	return (0);

}
