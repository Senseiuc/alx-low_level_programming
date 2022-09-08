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
	char M[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	write(2, M, 59);
	return (1);
}
