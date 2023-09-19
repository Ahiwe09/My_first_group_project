#include "main.h"

/**
 * play_bin - This function converts a pass args to
 * binarry and prints it on the screen
 * @lst: this is variable part of the function
 * Return: this function returns an int.
 */
int play_bin(va_list lst)
{
	int bin[32];
	int k = 0, cntr = 0;
	int fetch = va_arg(lst, int);

	if (fetch < 0)
	{
		_putchar('-');
		fetch = -fetch;
		cntr++;
	}
	if (fetch == 0)
	{
		_putchar('0');
		return (1);
	}
	while (fetch)
	{
		bin[k++] = fetch % 2;
		fetch /= 2;
		cntr++;
	}
	while (--k >= 0)
		_putchar(bin[k] + '0');
	return (cntr);
}
