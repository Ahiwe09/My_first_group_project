#include "main.h"
/**
 * _putint - This function prints int and the standered output
 * @nbr: This is the num to be printed
 * @cntr: this is the counter variable
 *
 * Return: this returns an int value
 */
int _putint(long nbr, int cntr)
{
	if (nbr < 0)
	{
		_putchar('-');
		cntr = cntr + 1;
		nbr *= (-1);
	}
	if (nbr / 10)
	{
		cntr = _putint(nbr / 10, cntr);
	}
	_putchar(nbr % 10 + '0');
	return (cntr + 1);
}
