#include "main.h"
/**
 * _strlen_recursion - Count string lenght.
 * @s: Store the memory of character
 *
 * Return: Lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
