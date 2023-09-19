#include "main.h"
int play_bin(va_list lst);
/**
 * trigger - This function triggers appropriate function
 * depending on the choice spacified
 * @choice: this functin part
 * Return: this function returns an int
 */
int (*trigger(char choice))(va_list lst)
{
	if (choice == 'c')
		return (&play_char);
	else if (choice == 'd' || choice == 'i')
		return (&play_int);
	else if (choice == 's')
		return (&play_str);
	else if (choice == 'b')
		return (&play_bin);
	else if (choice == 'u')
		return &play_unsigned;
	else if (choice == 'o')
		return (&play_octal);
	else if (choice == 'x')
		return (&play_hex);
	else if (choice == 'X')
		return (&play_hex_X);
	return (0);
}
