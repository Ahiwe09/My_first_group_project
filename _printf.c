#include "main.h"

int _printf(const char *format, ...)
{
    va_list lst;
    va_start(lst, format);
    int k = 0, prt_cntr = 0;

    if (format == NULL)
        return (-1);
    for (k = 0; format[k]; k++)
    {
        if (format[k] == '%')
        {
            k++;
            if (format[k] == 'c' || format[k] == 'd' || format[k] == 's')
            {
                prt_cntr += trigger(format[k])(lst);
            }
            else
            {
                prt_cntr = _putchar('%');
                continue;   
            }
        }
        else
        {
            prt_cntr += _putchar(format[k]);
        }
        return (prt_cntr);
    }
}

int main(void)
{
  int len1 = printf("prog lang: %c\n", 'C');
    int len2 = _printf("prog lang: %c\n", 'C');

  
 //int len1 = printf("my name is %s and i am %d year old, i love %c\n", 
 //"Pascal", 16, 'c');
  //int len2 = demoprintf("my name is %s and i am %d year old, i love %c\n", 
 //"Pascal", 16, 'c');
 printf("%d = %d", len1, len2);
  
}