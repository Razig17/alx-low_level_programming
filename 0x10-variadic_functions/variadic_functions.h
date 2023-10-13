#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_int(va_list args);
void print_string(va_list args);
void print_char(va_list args);
void print_float(va_list args);


/**
 * struct form_t -  a struct
 * @format: the specifier
 * @f: the function pointer
 */
typedef struct form_t
{
	char *format;
	void (*f)(va_list args);
} f_t;
#endif
