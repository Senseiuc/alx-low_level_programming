#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * cnt_non_dig - checks if a function contains non digits
 *@str: a string pointer
 *
 * Return: int (1 for yes and 0 for no)
 */
int cnt_non_dig(char *str);

int cnt_non_dig(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - prints the sum of the arguements
 *@argc: the count of arguments
 *@argv: the arguments(strings)
 *
 * Return:int zero(success)
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				if (cnt_non_dig(argv[i]) == 1)
				{
					printf("Error\n");
					exit(EXIT_SUCCESS);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
