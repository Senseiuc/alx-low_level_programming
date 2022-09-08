#include <stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: prints a string without using printf or puts functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Mystr[] = "and that piece of art is useful\"
		- Dora Korpar, 2015-10-19\n";

	write(1, Mystr, 59);
	return (1);
}
