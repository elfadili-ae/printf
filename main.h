#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct flags - specifier flags
 * @sflag: space flag
 * @pflag: plus flag (+)
 * @hflag: hash flag (#)
 * @mflag: minus flag (-)
 */
typedef struct flags
{
	int sflag;
	int pflag;
	int hflag;
	int zflag;
	int mflag;
	int zpadder;
} flag_t;

/**
 * struct func_t - specifier function
 * @spec: specifier
 * @f: function to call
 * Description: a struct type to call a function based on the specifier
 */
typedef struct func_t
{
	char spec;
	int (*f)(va_list, flag_t *);
} func_t;

int _puts(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list args, flag_t *);
int string_print(va_list args, flag_t *);
int int_print(va_list args, flag_t *);
int _strcpy(char *dest, char *src, int i);
int flagIt(const char *str, int i, flag_t *);
int print_num(unsigned int n);
int octal_print(va_list arg, flag_t *);
int hexa_print(va_list arg, flag_t *);
int upHexa_print(va_list arg, flag_t *);
int binary_print(va_list arg, flag_t *);
int base_converter(unsigned long int num, int base, int _case, int print);
int hexa_convert(unsigned long int num, int _case, int print);
int unsigned_print(va_list arg, flag_t *);
int bigS_print(va_list arg, flag_t *);
int pointer_print(va_list arg, flag_t *);
int print_rev(va_list arg, flag_t *);
int flagChecker(flag_t *flag);
int rot13(va_list arg, flag_t *);
void flagReset(flag_t *flag);
int oo7_print(va_list arg, flag_t *flag);
int _atoi(char s);
int countDigit(unsigned long int num, int isNegative);
#endif
