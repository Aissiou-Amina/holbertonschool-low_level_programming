#include "main.h"

/**
 * 1-swap.c-swaps the values of two integers
 * pointer to an integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
