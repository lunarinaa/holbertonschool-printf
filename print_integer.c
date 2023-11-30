#include "main.h"
/**
*
*
*/
int print_integer(int n)
{
    int count = 0;
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
