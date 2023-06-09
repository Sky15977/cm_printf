/*
** EPITECH PROJECT, 2022
** my
** File description:
** write all functions in your libmy.a
*/

#include <stdarg.h>

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H


    void my_putchar(char c);
    void redirect_all_std(void);
    long long int my_put_nbr(long long int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    long long int my_putnbr_base(long long int nbr, char const *base);
    int my_getnbr(char const *str, int i);
    int basics_printf(const char *format, int *i, va_list list, int *count);
    int base_printf(const char *format, int *i, va_list list, int *count);
    int binary_printf(const char *format, int *i, va_list list, int *count);
    int sign_printf(const char *format, int *i, va_list list, int *count);
    int return_printf(const char *format, int *i, va_list list, int *count);
    int my_putspaces(const char *format, int *i, va_list list, int *count);
    int search_flag(const char *format, int *i, va_list list, int *count);
    int long_printf(const char *format, int *i, va_list list, int *count);
    int search_long(const char *format, int *i, va_list list, int *count);
    int search_longlong(const char *format, int *i, va_list list, int *count);
    int h_printf(const char *format, int *i, va_list list, int *count);
    int search_h(const char *format, int *i, va_list list, int *count);
    int search_hh(const char *format, int *i, va_list list, int *count);
    int my_printf(const char *format, ...);

#endif
