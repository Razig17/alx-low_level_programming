#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value);
int interpolation_helper(int *array, size_t low, size_t high, int value);

int exponential_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);
int advanced_helper(int *array, size_t left, size_t right, int value,
		    int found);

listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
