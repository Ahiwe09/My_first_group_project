#include <stdio.h>
#include "_putchar.c"

int play_oct(unsigned int fetch)// use (va_list lst) once the code complies
{ 
    char octal[12];
    int k = 0, cntr = 0;
    
    //int fetch = va_arg(lst, int); activate if the code starts working with the main printf
    if (fetch == 0)
    {
        _putchar('0');
        return (1);
    }
    while (fetch > 0)
    {
        octal[k++] = (fetch % 8) + '0';
        fetch /= 8;
        cntr++;
    }
    while(--k >= 0)
        _putchar(octal[k]);
    return (cntr);
}

int main(void)
{
    int y = play_oct(0);
    printf("\n%d", y);
}

