#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[52] = ["abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"];
	int z;

	for (z = 0; z < 52;)
	{
		putchar(alp[z]);
		z++;
	}
	putchar('\n');
	return (0);
}
