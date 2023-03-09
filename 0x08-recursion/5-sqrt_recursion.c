#include "main.h#include"
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
        return -1;
    if (n == 0 || n == 1)
        return n;

    int root = _sqrt_recursion(n/2);

    if (root * root <= n && (root + 1) * (root + 1) > n)
        return root;

    root = _sqrt_recursion((n + 1)/2);

    if (root * root <= n && (root + 1) * (root + 1) > n)
        return root;

    return -1;
}
