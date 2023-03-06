#include "main.h"
/**
 * _memset - Fill a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The value
 * @n: Number of bytes to be changed
 *
 * Return: Array with values of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++0)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
