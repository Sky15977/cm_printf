/*
** EPITECH PROJECT, 2022
** printf basics
** File description:
** gestion basics
*/

#include <stdio.h>
#include <stdarg.h>
#include "../includes/printf.h"

int basics_printf(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 's') {
        *count += my_putstr(va_arg(list, char *));
        return (*count);
    }
    if (format[*i] == 'i' || format[*i] == 'd') {
        *count += my_put_nbr(va_arg(list, int));
        return (*count);
    }
    if (format[*i] == 'c') {
        my_putchar(va_arg(list, int));
        *count += 1;
        return (*count);
    } else if (format[*i] == '%') {
        my_putchar('%');
        *count += 1;
        return (*count);
    }
    return (0);
}

int base_printf(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'u') {
        *count += my_putnbr_base(va_arg(list, unsigned int), "0123456789");
        return (*count);
    }
    if (format[*i] == 'o') {
        *count += my_putnbr_base(va_arg(list, int), "01234567");
        return (*count);
    }
    if (format[*i] == 'x') {
        *count += my_putnbr_base(va_arg(list, int), "0123456789abcdef");
        return (*count);
    }
    if (format[*i] == 'X') {
        *count += my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
        return (*count);
    }
    return (0);
}

int binary_printf(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'b') {
        *count += my_putnbr_base(va_arg(list, int), "01");
        return (*count);
    }
    if (format[*i] == 'p') {
        *count += my_putstr("0x");
        *count += my_putnbr_base(va_arg(list, long int), "0123456789abcdef");
        return (*count);
    }
    return (0);
}

int return_printf(const char *format, int *i, va_list list, int *count)
{
    if (format[*i] == 'n') {
        int *arg_i = va_arg(list, int *);

        *arg_i = *count;
        return (*count);
    }
    return (*count);
}
