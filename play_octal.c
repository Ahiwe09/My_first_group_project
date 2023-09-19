#include "main.h"
/**
 * play_octal - This function handles the 'o' format specifier.
 * @lst: The variable argument list.
 * Return: The number of characters printed.
 */
int play_octal(va_list lst)
{
	unsigned int fetch = va_arg(lst, unsigned int);
	int cntr = 0;
	int octal[64];

	if (fetch == 0)
	{
		_putchar('0');
		return (1);
	}
	while (fetch)
	{
		octal[cntr++] = fetch % 8;
		fetch /= 8;
	}
	while (--cntr >= 0)
		_putchar(octal[cntr] + '0');
	return (cntr);
}
