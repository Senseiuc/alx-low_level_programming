#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the arguements
 *@argc: the count of arguments
 *@argv: the arguments(strings)
 *
 * Return:int zero(success)
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 1;

	if (argc != 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
			sum *= atoi(argv[i]);
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
