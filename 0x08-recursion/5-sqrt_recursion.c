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
 * _sqrt_recursive - squares a number
 *
 * @n: The number to be squared
 * @i: The current guess for the square root
 * @start: the starting value to check for the square root
 * @end: the ending value to check for the square root
 *
 * Return: Returns the square root of a number
 */
int _sqrt_recursive(int n, int start, int end)
{
	int mid, sq;

	if (end < start)
		return (-1);

	mid = (start + end) / 2;
	sq = mid * mid;

	if (sq == n)
		return (mid);

	if (sq > n)
		return (_sqrt_recursive(n, start, mid - 1));

	return (_sqrt_recursive(n, mid + 1, end));
}
