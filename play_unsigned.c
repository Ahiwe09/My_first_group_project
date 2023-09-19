#include "main.h"
/**
 * play_unsigned - This function handles the 'u' format specifier.
 * @lst: The variable argument list.
 * Return: The number of characters printed.
 */
int play_unsigned(va_list lst)
{
	unsigned int fetch= va_arg(lst, unsigned int);
	int cntr = 0;

	if (fetch == 0)
	{
		_putchar('0');
		return (1);
	}
	while (fetch)
	{
		_putchar((fetch % 10) + '0');
		fetch /= 10;
		cntr++;
	}
	return (cntr);
}
