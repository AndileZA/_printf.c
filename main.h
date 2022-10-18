#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
*
*
*/

typedef struct print
{
    char *t;
    int (*f)(va_list);
}print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);

#endif
