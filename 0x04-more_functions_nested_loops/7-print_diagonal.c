#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line
 * @n: Input a number
 * Return: Diagonal
 */
void print_diagonal(int n)
{
	int f, m;

	if (n <= 0)
	{
	_putchart('\n');
	}
	else
	{
	for (f = 1; f <= n; f++)
	{
	for (m = 1; m <= n; m++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
