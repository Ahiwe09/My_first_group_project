#include "main.h"

 int _putint(long nbr, int cntr)
 {
   if (nbr < 0)
   {
    _putchar('-');
    cntr = cntr + 1;
    nbr *= (-1);
   }
  if (nbr/10)
  {
  cntr = _putint(nbr/10, cntr);
  }
  _putchar(nbr%10 + '0');
  return (cntr + 1);
 }