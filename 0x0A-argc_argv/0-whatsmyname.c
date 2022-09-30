#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file
 *@argc: the count of arguments
 *@argv: the arguments(strings)
 *
 * Return:int zero(success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
