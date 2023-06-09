/*
** EPITECH PROJECT, 2022
** char_unsigned
** File description:
** h & hh
*/

#include <stdarg.h>
#include "../includes/printf.h"

int search_h(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'i' || format[*i] == 'd')
        *count += my_put_nbr(va_arg(list, int));
    if (format[*i] == 'c') {
        my_putchar(va_arg(list, int));
        *count += 1;
    }
    if (format[*i] == 'o')
        *count += my_putnbr_base(va_arg(list, int), "01234567");
    if (format[*i] == 'x')
        *count += my_putnbr_base (va_arg(list, int), "0123456789abcdef");
    if (format[*i] == 'X')
        *count += my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
    if (format[*i] == 'u')
        *count += my_putnbr_base(va_arg(list, unsigned int), "0123456789");
    return (0);
}

int h_printf(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'h')
        *i += 1;
    if (format[*i] == 'h')
        *i += 1;
    else {
        search_h(format, i, list, count);
        return (0);
    }
    search_h(format, i, list, count);
    return (0);
}
