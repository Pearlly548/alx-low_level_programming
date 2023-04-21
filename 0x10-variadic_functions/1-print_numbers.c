#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - this program prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the funtion
 *
 * Return: returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m;

	va_start(args, n);
	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(args, int));
		if (separator && m < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
