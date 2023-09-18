#include "main.h"

int play_int(va_list lst)
{
    int cntr;
    int fetch = va_arg(lst, int);
    cntr = _putint(fetch, 0);
    return (cntr);
}