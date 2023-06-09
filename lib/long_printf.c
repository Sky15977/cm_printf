/*
** EPITECH PROJECT, 2022
** long printf
** File description:
** long
*/

#include <stdarg.h>
#include "../includes/printf.h"

int search_long(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'i' || format[*i] == 'd')
        *count += my_put_nbr(va_arg(list, long int));
    if (format[*i] == 'c') {
        my_putchar(va_arg(list, int));
        *count += 1;
    }
    if (format[*i] == 'o')
        *count += my_putnbr_base(va_arg(list, long int), "01234567");
    if (format[*i] == 'x')
        *count += my_putnbr_base (va_arg(list, long int), "0123456789abcdef");
    if (format[*i] == 'X')
        *count += my_putnbr_base(va_arg(list, long int), "0123456789ABCDEF");
    if (format[*i] == 'u')
        *count += my_putnbr_base(va_arg(list, long unsigned int), "0123456789");
    return (0);
}

int search_longlong(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'i' || format[*i] == 'd')
        *count += my_put_nbr(va_arg(list, long long int));
    if (format[*i] == 'c') {
        my_putchar(va_arg(list, int));
        *count += 1;
    }
    if (format[*i] == 'o')
        *count += my_putnbr_base(va_arg(list, long long int), "01234567");
    if (format[*i] == 'x')
        *count += my_putnbr_base
            (va_arg(list, long long int), "0123456789abcdef");
    if (format[*i] == 'X')
        *count += my_putnbr_base
            (va_arg(list, long long int), "0123456789ABCDEF");
    if (format[*i] == 'u')
        *count += my_putnbr_base
            (va_arg(list, unsigned long long int), "0123456789");
    return (0);
}

int long_printf(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'l')
        *i += 1;
    if (format[*i] == 'l')
        *i += 1;
    else {
        search_long(format, i, list, count);
        return (0);
    }
    search_longlong(format, i, list, count);
    return (0);
}
