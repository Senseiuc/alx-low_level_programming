#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/*prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search2(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
#endif /*SEARCH_ALGOS_H*/
