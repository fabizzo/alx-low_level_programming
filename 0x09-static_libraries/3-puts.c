#!/bin/bash
#include "main.h"
#include<stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
        /* loop through each character in the string and print it */
        while (*str != '\0')
        {
                putchar(*str);
                str++;
        }
        putchar('\n'); /* print a newline character at the end */
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        _puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
