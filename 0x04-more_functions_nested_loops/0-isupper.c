#include <ctype.h>

/**
 * _isupper - checks if an alphabet is a uppercase
 *@c: takes in a c argument
 *
 * Description: checks for lower case
 *
 * Return: an integer(1 or 0)
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	return (0);

}
