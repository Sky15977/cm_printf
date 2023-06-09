/*
** EPITECH PROJECT, 2022
** printf
** File description:
** printf
*/

#include <stdarg.h>
#include "../includes/printf.h"

struct printf_flag {
    char flag;
    int (*func)(const char *format, int *i, va_list list, int *count);
};

const struct printf_flag flags[] = {
    {'c', &basics_printf},
    {'s', &basics_printf},
    {'i', &basics_printf},
    {'d', &basics_printf},
    {'%', &basics_printf},
    {'u', &base_printf},
    {'o', &base_printf},
    {'x', &base_printf},
    {'X', &base_printf},
    {'b', &binary_printf},
    {'p', &binary_printf},
    {'l', &long_printf},
    {'h', &h_printf},
    {'n', &return_printf}
};

int search_flag(const char *format, int *i, va_list list, int *count)
{
    int nb = 0;

    while (nb <= 13)
        if (format[*i] == flags[nb].flag)
            return (nb);
        else
            nb++;
    my_putchar('%');
    *count += 1;
    return (0);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int count = 0;
    int res = 0;

    va_start(list, format);
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            res = search_flag(format, &i, list, &count);
            flags[res].func(format, &i, list, &count);
        } else {
            my_putchar(format[i]);
            count++;
        }
    }
    va_end(list);
    return (count);
}
