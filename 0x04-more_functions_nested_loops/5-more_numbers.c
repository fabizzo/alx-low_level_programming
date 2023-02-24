#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 10 times numbers 0 - 14
 * Return: 10 times
 */
void more_numbers(void)
{
int f, m;

for (f = 0; f < 10; f++)
{
	for (m = 0; m < 14; m++)
	{
		if (m < 9)
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
	}
	putchar('\n');
}
}
