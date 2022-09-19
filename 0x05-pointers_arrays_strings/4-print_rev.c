#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be reversed
 * Return: nothing
 */
void print_rev(char *s);
{
	int lent = strlen(s);

	while (lent--)
		_putchar(*(s + lent));
	_putchar(10);
}

