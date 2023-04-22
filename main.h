#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
typedef struct func_t
{
	char spec;
	int (*f)(va_list, char *, int);
} func_t;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int char_print(va_list args, char *buff, int i);
int string_print(va_list args, char *buff, int i);
int int_print(va_list args, char *buff, int i);
void buffReset(char *buff, int i);
int buffChecker(char *buff, int i);
int _strcpy(char *dest, char *src, int i);
#endif
