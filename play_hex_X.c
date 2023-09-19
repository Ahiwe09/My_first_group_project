#include "main.h"
/**
 * play_hex_X - This function handles the 'X' format specifier
 * (uppercase hexadecimal).
 * @lst: The variable argument list.
 * Return: The number of characters printed.
 */
int play_hex_X(va_list lst)
{
	unsigned int fetch = va_arg(lst, unsigned int);
	int cntr = 0;
	char hex[64];

	if (fetch == 0)
	{
		_putchar('0');
		return (1);
	}
	while (fetch)
	{
		int remainder = fetch % 16;
		if (remainder < 10)
			hex[cntr++] = remainder + '0';
		else
			hex[cntr++] = (remainder - 10) + 'A';
		fetch /= 16;
	}
	while (--cntr >= 0)
		_putchar(hex[cntr]);
	return (cntr);
}
