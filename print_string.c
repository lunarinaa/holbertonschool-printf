#include "main.h"
/**
 * print_string - Prints a string
 * @str: String to be printed
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
