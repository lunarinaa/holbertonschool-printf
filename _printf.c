#include "main.h"
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
				return (-1);
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
