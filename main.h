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
void buffReset(char *buff, int i);
int buffChecker(char *buff, int i);
int _strcpy(char *dest, char *src, int i);
int flagIt(const char *str, int i);
int print_num(unsigned int n);
#endif
