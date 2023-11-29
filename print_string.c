#include "main.h"

/**
 *
 *
 *
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;
	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}
}

