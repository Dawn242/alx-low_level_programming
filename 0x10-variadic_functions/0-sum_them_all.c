#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: The number of arguments
 * @...: A variable number of paramters to calculate the sum of
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int index, sum = 0;

	va_start(valist, n);

	for (index = 0; index < n; index++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
