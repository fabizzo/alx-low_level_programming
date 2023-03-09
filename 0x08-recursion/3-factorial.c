#include "main.h"
/**
 * factorial - Calculate factorial of a number
 * @n: The number to be calculated
 *
 * Return: Factorial of x
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
