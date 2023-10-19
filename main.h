#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFSIZE 1024
/**
 * struct FormatSpecifiers - this struct is for the custom _printf.
 * @f : first member.
 * @functionptr : second member.
 * Description : This struct consists of a pointer to a format specifier such
 * as %s or %c and a function pointer to all the functions that implement
 * those specifiers in our custom printf project.
 */

typedef struct FormatSpecifiers
{
	char *f;
	int (*functionptr)();
} Specifiers;

int _printf(const char *format, ...);
int _putchar(char c);
int characters(va_list p);
int percent(void);
int string(va_list p);
int length(char *s);
int constlength(const char *s);
int binary(va_list arg);
int case_d(va_list args);
int case_i(va_list args);
int case_u(va_list p);
int base_eight(va_list p);
int hexalower(va_list p);
int hexaupper(va_list p);
int hexa(unsigned long int y);
void _puts(char *s);
int rev_string(va_list p);
int rot13(va_list p);
int pointers(va_list p);


#endif

























