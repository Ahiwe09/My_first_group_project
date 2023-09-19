#include "main.h"
/**
 * _printf - This is a variadic function that prints the stndered output
 * accoding to some spacifiers passed
 * @format: this is constant arg part
 * @...: This is the variable part of the arg
 *
 * Return: returns an int value
 */
int _printf(const char *format, ...)
{
	int k = 0;
	va_list lst;
	int prt_cntr = 0;

	va_start(lst, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (k = 0; format[k]; k++)
	{
		if (format[k] == '%')
		{
			k++;
			if (format[k] == 'c' || format[k] == 'd' || format[k] == 'i' || format[k] == 's')
			{
				prt_cntr += trigger(format[k])(lst);
			}
			else if (format[k] == '%')
			{
				_putchar('%');
				prt_cntr++;
			}
			else
			{
				prt_cntr = _putchar('%');
				_putchar(format[k]);
				prt_cntr++;
				continue;

			}
		}
		else
		{
			prt_cntr += _putchar(format[k]);
		}
	}
	va_end(lst);

	return (prt_cntr);
}
