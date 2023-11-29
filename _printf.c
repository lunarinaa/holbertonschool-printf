#include "main.h"

/**
 *
 *
 *
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
			{
				_putchar('%');
				count++;
			}	
			else if (*format == 'c')
			{	
				c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{	
				char *str = va_arg(args, char*);
	
				if (str == NULL)
					str = "(null)";
				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					count++;
				}	
			}

		}
		else 
		{
			_putchar(*format);
			count++;
		}	
		format++;
	}
	va_end(args);
	return (count);
}

