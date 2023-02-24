#include "main.h"
#include <stdio.h>

/**
 * print line - draws a straight line according to parameter
 * @c: The number of lines to draw
 * Return: Empty
 */

void printline(int n)
{
	int x;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
