/*
** EPITECH PROJECT, 2022
** tests_criterion
** File description:
** write to tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf_01, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("hello world%n\n", &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("hello world\n11\n");
}

Test(my_printf_02, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%c%n\n", 'X', &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("X\n1\n");
}

Test(my_printf_02_1, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%c%n\n", 42, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("*\n1\n");
}

Test(my_printf_03, simple_string, .init = redirect_all_std)
{
    int i = 0;
    
    my_printf("hello %s%n\n", "world", &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("hello world\n11\n");
}

Test(my_printf_04, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("If you multiple %i by %i, the result is %i.%n\n", 21, -2, 21 * -2, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("If you multiple 21 by -2, the result is -42.\n44\n");
}

Test(my_printf_05, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("If you multiple %d by %d, the result is %d.%n\n", 21, -2, 21 * -2, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("If you multiple 21 by -2, the result is -42.\n44\n");
}

Test(my_printf_06, simple_string, .init = redirect_all_std)
{
    int i = 0;
    
    my_printf("The word %%%s%% has %i characters.%n\n", "Epitech", 7, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("The word %Epitech% has 7 characters.\n36\n");
}

Test(my_printf_07, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("hello %z epitech%n\n", &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("hello % epitech\n15\n");
}

Test(my_printf_08, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%o%n\n", 487, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("747\n3\n");
}

Test(my_printf_09, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%u%n\n", 487, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("487\n3\n");
}

Test(my_printf_10, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%x%n\n", 487, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("1e7\n3\n");
}

Test(my_printf_11, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%X%n\n", 487, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("1E7\n3\n");
}

Test(my_printf_12, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%b%n\n", 487, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("111100111\n9\n");
}

Test(my_printf_13, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%p%n\n", 487, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("0x1e7\n5\n");
}

Test(my_printf_14, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("Hello %lc%n\n", '!', &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("Hello !\n7\n");
}

Test(my_printf_14_1, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%li%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("2147483648\n10\n");
}

Test(my_printf_14_2, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%ld%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("2147483648\n10\n");
}

Test(my_printf_14_3, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%lo%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("20000000000\n11\n");
}

Test(my_printf_14_4, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%lx%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("80000000\n8\n");
}

Test(my_printf_14_5, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%lX%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("80000000\n8\n");
}

Test(my_printf_14_6, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%lu%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("2147483648\n10\n");
}

Test(my_printf_15, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%llc%n\n", '=', &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("=\n1\n");
}

Test(my_printf_15_1, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%lli%n\n", 9223372036854775807, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("9223372036854775807\n19\n");
}

Test(my_printf_15_2, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%lld%n\n", 9223372036854775807, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("9223372036854775807\n19\n");
}

Test(my_printf_15_3, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%llo%n\n", 9223372036854775807, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("777777777777777777777\n21\n");
}
Test(my_printf_15_4, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%llx%n\n", 9223372036854775807, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("7fffffffffffffff\n16\n");
}

Test(my_printf_15_5, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%llX%n\n", 9223372036854775807, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("7FFFFFFFFFFFFFFF\n16\n");
}

Test(my_printf_15_6, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%llu%n\n", 2147483648, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("2147483648\n10\n");
}

Test(my_printf_16, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hc%n\n", '=', &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("=\n1\n");
}

Test(my_printf_16_1, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hi%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("127\n3\n");
}

Test(my_printf_16_2, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hd%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("127\n3\n");
}

Test(my_printf_16_3, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%ho%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("177\n3\n");
}

Test(my_printf_16_4, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hx%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("7f\n2\n");
}

Test(my_printf_16_5, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hX%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("7F\n2\n");
}

Test(my_printf_16_6, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hu%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("127\n3\n");
}

Test(my_printf_17, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hhc%n\n", '=', &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("=\n1\n");
}

Test(my_printf_17_1, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hhi%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("127\n3\n");
}

Test(my_printf_17_2, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hhd%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("127\n3\n");
}

Test(my_printf_17_3, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hho%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("177\n3\n");
}

Test(my_printf_17_4, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hhx%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("7f\n2\n");
}

Test(my_printf_17_5, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hhX%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("7F\n2\n");
}

Test(my_printf_17_6, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%hhu%n\n", 127, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("127\n3\n");
}

Test(my_printf_100, simple_string, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%c, %s, %i, %d, %%, %o, %u, %x, %X, %b%n\n", '0', "00", 0, 0, 0, 0, 0, 0, 0, &i);
    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("0, 00, 0, 0, %, 0, 0, 0, 0, 0\n29\n");
}
