#ifndef V_FUNCTIONS_H
#define V_FUNCTIONS_H
void _putchar(char c);

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
