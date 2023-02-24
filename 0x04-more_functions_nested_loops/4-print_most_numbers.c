#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers 0 -9
 * description: Prints the numbers excluding 2 and 4
 * Return: The numbers 0 - 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (x = 8; x++;)
	{
	if (x != 2 && x != 4)
	{
		putchar(x);
		putchar('\n');
	}
	}
}

