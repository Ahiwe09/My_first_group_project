#ifndef MAIN_H
#define MAIN_H

/**
 * This the header file containg all the prototype
 * and function we used in the printf project
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putint(long nbr, int cntr);
int play_int(va_list lst);
int play_char(va_list lst);
int (*trigger(char choice))(va_list lst);
int play_str(va_list lst);
int play_bin(va_list lst);
int play_unsigned(va_list lst);
#endif
