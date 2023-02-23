#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - uppercase letters
 *
 *@c: char to check
 *
 * Return: 0 or 1
 */

int main()
{
	char ch = 'C';

	if (isupper(ch) >= 'C')
		return (1);
	else
		return (0);
}
