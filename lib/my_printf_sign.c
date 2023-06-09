/*
** EPITECH PROJECT, 2022
** printf for sign
** File description:
** +, -, #, aq, aq
*/

#include <stdarg.h>
#include "../includes/printf.h"

int sign_printf(const char *format, int *i, va_list list, int *count)
{
    int nb = -1;

    if (format[*i] == '+') {
        if (nb >= 0) {
            my_putchar('+');
            *count += 1;
        } else {
            *i++;
            nb = basics_printf(format, i, list, count) + 1;
            sign_printf(format, i, list, count);
        }
    }
    return (*count);
}
