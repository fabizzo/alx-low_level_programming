#include "main.h"
/**
 * _memcpy - A function that copies memory area
 *@dest: Stores memory here
 *@src: Copy memory here
 *@n: Number of bytes
 *
 * Return: Copied memory with changed  bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

