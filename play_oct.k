#include <stdio.h>
#include "_putchar.c"

int play_oct(unsigned int fetch)
{ 
    char octal[12];
    int k = 0, cntr = 0;
    
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
