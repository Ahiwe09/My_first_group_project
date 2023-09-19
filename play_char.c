#include "main.h"
/**
 * play_char - This function print charater on
 * the standerd output
 * @lst: This is a list of the variable part
 * of the variadic function.
 * Return: This function returns an int variable
 */
int play_char(va_list lst)
{
	int cntr;
	int fetch = va_arg(lst, int);

	cntr = _putchar(fetch);
	return (cntr);
}
