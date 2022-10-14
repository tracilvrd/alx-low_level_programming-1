#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

/**
 * main - Program entry point.
 *
 * Return: Always 0.
 */
int main(void);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _MAIN_H_ */
