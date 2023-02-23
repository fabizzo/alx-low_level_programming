#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - uppercase letters
 *
 *@c: char to check
 *
 * Return: 0 or 1
 */

int main(void)
{
	char ch = 'C';

	if (isupper(ch))
		return (1);
	else
		return (0);
}
