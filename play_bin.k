#include <stdio.h>//remove this line once the code starts complying with the main printf
#include "main.h"
#include "_putchar.c"//remove this too

int play_bin(int fetch) //pls mike remember to change this t0 "(va_list lst)"
{
    int bin[32];
    int k = 0, cntr = 0;
    
    //int fetch = va_arg(lst, int); you have to activate this before submitting
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
    while(--k >= 0)
        _putchar(bin[k] + '0');
    return (cntr);
}
int main(void)
{
    int y = play_bin(69);
    printf("\nno of characters printed: %d", y);
}