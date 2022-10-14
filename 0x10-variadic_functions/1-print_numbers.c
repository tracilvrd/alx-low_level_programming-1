#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers passed in a variadic function.
 *
 * @separator: Seperates the numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
