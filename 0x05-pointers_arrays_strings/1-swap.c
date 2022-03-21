#include "main.h"
/**
 *swap_int - swaps the value of two integers
 *
 *@a: an integer to swap
 *@b: another integer to swap
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
	
}
