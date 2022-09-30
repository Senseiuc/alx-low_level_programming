#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - finds change
 *@argc: the count of arguments
 *@argv: the arguments(strings)
 *
 * Return:int
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;
	int cents[5] = {25, 10, 5, 2, 1};
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("%d\n", 0);
	else
	{
		num = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (num >= cents[i])
			{
				sum += num / cents[i];
				num %= cents[i];
			}
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
