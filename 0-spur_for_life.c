#include <stdio.h>
#include <stdarg.h>
#include "_putchar.c"

/**
 * _printf - this function mimicks the printf function from the standard
 * library although not completely having all the functionalities.
 * you can man the printf function to not some similarities
 * @format: this paramater is the constant part of this variadic function
 * and it is a string literal
 * @...: this represents the variable part of the _printf function
 */
int _printf(const char *format, ...)
{
    int cntr = 0, k = 0;
    va_list arg_lst;

    va_start(arg_lst, format);
    for(k = 0; format[k] != '\0'; k++)
    {
        if (*format != '%')
        {
            _putchar(*format);
            cntr++;
        }
        else
        {
            format++;
            if (*format == 'c')
            {
                char chrtr = va_arg(arg_lst, int);
                _putchar(chrtr);
                cntr++;
            }
            else if (*format == 's')
            {
                char *strng = va_arg(arg_lst, char *);
                
                while (*strng)
                {
                    _putchar(*strng);
                    strng++;
                    cntr++;
                }
            }
            else if (*format == '%')
            {
                _putchar('%');
                cntr++;
            }
            else
            {
                _putchar('%');
                _putchar(*format);
                cntr += 2;
            }
        }
        format++;
    }
    _putchar('\n');
    va_end(arg_lst);
    return cntr;
}
