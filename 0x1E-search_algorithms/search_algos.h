#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* INCLUDE LIBRARIES */
#include <stdio.h>

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _round(double x);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
