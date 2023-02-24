#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 10 times numbers 0 - 14
 * Return: 10 times
 */
void more_numbers(void)
{
int f, m;

for (m = 0; m < 10; m++)
{
	for (f = 0; f < 14; f++)
	{
		if (m < 9)
		putchar((f / 10) + '0');
		putchar((f % 10) + '0');
	}
	putchar('\n');
}
}
