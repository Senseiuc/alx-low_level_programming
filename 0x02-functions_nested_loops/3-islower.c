#include <ctype.h>

/**
 * _islower - checks if an alphabet is a lowercase
 *@c: takes in a c argument
 *
 * Description: checks for lower case
 *
 * Return: an integer(1 or 0)
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);

}
