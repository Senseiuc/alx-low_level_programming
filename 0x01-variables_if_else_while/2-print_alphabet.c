#include <stdio.h>

/**
 * main - prints all alphabets
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
