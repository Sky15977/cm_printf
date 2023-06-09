/*
** EPITECH PROJECT, 2022
** getnbr
** File description:
** getnbr
*/

#include "../includes/printf.h"

int my_getnbr(char const *str, int i)
{
    int	nb = 0;
    int	compt = 1;

    while (str[i] == 43 || str[i] == 45) {
        if (str[i] == 45)
            compt *= -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57) {
            nb = nb * 10;
            nb = nb + str[i] - 48;
            i++;
        } else {
            return (nb * compt);
        }
    }
    return (nb * compt);
}
