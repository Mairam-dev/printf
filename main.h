#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int print_char(char c);
void print_int(va_list arg);
int _printf(const char *format, ...);

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
void (*printer)(va_list);
} identifierStruct;

#endif
