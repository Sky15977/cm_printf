/*
** EPITECH PROJECT, 2022
** put_spaces
** File description:
** after '%' if 24, print 24 spaces
*/

#include "../includes/printf.h"
#include <stdio.h>

int my_putspaces(const char *format, int *i, va_list list, int *count)
{
    int nb = my_getnbr(format, *i);

    printf("nb = %i", nb);
    if (format[*i] >= 48 && format[*i] <= 57
        || format[*i] == 43 || format[*i] == 45) {
        for (nb ; nb != 0; nb--) {
            my_putchar(' ');
            *count++;
        }
    }
    return (*count);
}
// 40 -> 40 - le nb char
