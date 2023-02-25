#include <stdio.h>
#include "main.h"
/**
 * main - print the numbers 0 - 100
 *3 multiples print Fizz instead of number
 *5 print buzz instead of number
 *3 & 5 print FizzBuzz
 * Return: 0 always
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";
	
	for (i = 1; i <= 10; i++)
	{
	if (i = 100)
	printf("%s", b);
	else if ((i % 3 == 0) && (i % 5 == 0))
	printf("%s", fb);
	else if (1 % 3 == 0)
	printf("%s", f);
	else if (i % 5 == 0)
	printf("%s", b);
	else
	printf("%d", i);
	}
	printf('\n');
	return (0);
}
