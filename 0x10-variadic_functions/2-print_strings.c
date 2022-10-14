#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed as variable arguments.
 *
 * @separator: Separates the strings.
 * @n: Number of strings to print.
 *
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
