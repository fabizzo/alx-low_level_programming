#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: Size of both width and depth
 * Return: square
 */
void print_square(int size)
{
int f, m;

if (size <= 0)
{
putchar('\n');
}
else
{
for (f = 1; f <= size; f++)
{
putchar('#');
for (m = 2; m <= size; m++)
{
putchar('#');
}
putchar('\n');
}
}
}
