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
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
}
