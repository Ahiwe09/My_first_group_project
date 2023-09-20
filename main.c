#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	printf("\n%d and %d\n", len, len2);
	_printf("Unknown:[%r]\n");
	_printf("\n%c", 48);
	printf("\n%c\n", 48);
	printf("\n%%%%%%\n");
	_printf("\n%%%%%%\n");
	_printf("%o", ui);

	return (0);
}
