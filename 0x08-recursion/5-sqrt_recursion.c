#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Squares a number
 * @n: The number to be square rooted
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (0);

	return (1);
}

/**
 * sqrt_recursive - Recursively finds the square root of a number.
 *
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: If i * i == n, return i.
 *         If i * i > n, return -1.
 *         Otherwise, return sqrt_recursive(n, i + 1).
 */
int sqrt_recursive(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);

	return (sqrt_recursive(n, i + 1));
}
