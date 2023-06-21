#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
void print_uppercase(char *name)
{
    printf("Name in uppercase: %s\n", name);
}

void print_lowercase(char *name)
{
    printf("Name in lowercase: %s\n", name);
}

int main()
{
    char name[] = "John Doe";
    print_name(name, print_uppercase);
    print_name(name, print_lowercase);
    return 0;
}
