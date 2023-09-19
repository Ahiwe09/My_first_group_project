#include "main.h"
/**
 * play_hex - This function handles the 'x' format specifier.
 * @lst: The variable argument list.
 * Return: The number of characters printed.
 */
int play_hex(va_list lst)
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
			hex[cntr++] = remainder - 10 + 'a';
		fetch /= 16;
	}
	while (--cntr >= 0)
		_putchar(hex[cntr]);
	return (cntr);
}
