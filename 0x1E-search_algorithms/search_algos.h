#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_number(int num);
#endif
