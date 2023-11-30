#include "main.h"
/**
* print_integer - function to print integer numbers
* @n: number to be printed
*
* Return: number of printed elements
*/
int print_integer(int n)
{
	int count = 0;

	if (n == INT_MIN)
	{
		count += print_string("-2147483648");
		return (11);
	}

	if (n < 0)
	{
		count += print_char('-');
		n = -n;
	}
	if (n / 10)
		count += print_integer(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}

