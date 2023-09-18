#include "main.h"

int (*trigger(char choice))(va_list lst)
{
    if( choice == 'c')
    {
        return (&play_char);
    }
    else if (choice == 'd')
    {
        return (&play_int);
    }
    else if (choice == 's')
    {
        return (&play_str);
    }
    return 0;
}