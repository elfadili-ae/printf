#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
/**
  * struct func_t - specifier function
  * @spec: specifier
  * @f: function to call
  * Description: a struct type to call a function based on the specifier
  */
typedef struct func_t
{
	char spec;
	int (*f)(va_list);
} func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list args);
int string_print(va_list args);
int int_print(va_list args);
int _strcpy(char *dest, char *src, int i);
int flagIt(const char *str, int i);
int print_num(unsigned int n);
int octal_print(va_list arg);
int hexa_print(va_list arg);
int upHexa_print(va_list arg);
int binary_print(va_list arg);
int base_converter(unsigned long int num, int base, int _case, int print);
int unsigned_print(va_list arg);
int bigS_print(va_list arg);
int pointer_print(va_list arg);
#endif
