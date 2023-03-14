#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 *
 * @str: The string to copy.
 *
 * Return: If str is NULL or if memory allocation fails - NULL,
 * otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	return (NULL);

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	return (NULL);

	strcpy(new_str, str);

	return (new_str);
}
