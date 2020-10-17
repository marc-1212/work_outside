/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** deploy the chars of a string in order
*/

#include "../include/infinitadd.h"

int  my_putstr(char const *str)
{
    char counter = 0;

    while(str[counter]  != '\0')
    {
        my_putchar(str[counter]);
        counter++;
    }
    return(counter);
}
