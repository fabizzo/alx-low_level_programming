#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the value of two intengers
 * @a: Int a
 * @b: Int b
 */

void swap_int(int *a, int *b)
{
	int m;

	 m = *a;
	*a = *b;
	*b = m;
}
