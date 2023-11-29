#include "main.h"
/**
 * print_char - Helper function to print a character
 * @c: Character to be printed
 *
 * Return: Number of characters printed
 */
int print_char(int c)
{
	_putchar(c);
	return (1);
}

/**
 * print_string - Helper function to print a string
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

/**
 * _printf - Custom printf function
 * @format: String with format specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, c;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
				count += print_char('%');
			else if (*format == 'c')
			{
				c = va_arg(args, int);
				count += print_char(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				count += print_string(str);
			}
			else
				count += print_char('%') + print_char(*format);
		}
		else
			count += print_char(*format);

		format++;
	}

	va_end(args);
	return (count);
}

