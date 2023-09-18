#include "main.h"

int play_char(va_list lst)
{
    int cntr;
    char fetch = va_arg(lst, int);
    cntr = _putchar(fetch);
    return cntr;
}