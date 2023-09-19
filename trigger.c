#include "main.h"
/**
 * trigger - This function triggers appropriate function
 * depending on the choice spacified
 * @choice: this functin part
 * Return: this function returns an int
 */
int (*trigger(char choice))(va_list lst)
{
	if (choice == 'c')
	{
		return (&play_char);
	}
	else if (choice == 'd' || choice == 'i')
	{
		return (&play_int);
	}
	else if (choice == 's')
	{
		return (&play_str);
	}
	return (0);
}
