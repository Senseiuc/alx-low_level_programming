/**
 * swap_int - swaps values of two integers
 * @a: takes an integer a
 * @b: takes an integer b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
