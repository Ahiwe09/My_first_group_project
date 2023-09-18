#include "main.h"

int play_str(va_list lst)
{
    int cntr = 0;
    char *fetch = va_arg(lst, char *);
    if (fetch == NULL)
        fetch = "(null)";
    while (*fetch++ != '\0')
    {
        cntr += _putchar(*fetch);
    }
    return (cntr);
}
