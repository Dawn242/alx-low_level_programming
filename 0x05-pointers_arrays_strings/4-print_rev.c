#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be reversed
 * Return: Nothing
 */

void print_rev(char *s);
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));

	_putchar('\n');
}

