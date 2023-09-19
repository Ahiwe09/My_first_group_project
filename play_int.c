#include "main.h"
/**
 * play_int - This function print int and a standered output
 * @lst: This is the variable part of the variadic function
 *
 * Return: This function returns an int value.
 */
int play_int(va_list lst)
{
	int cntr;
	int fetch = va_arg(lst, int);

	cntr = _putint(fetch, 0);
	return (cntr);
}
