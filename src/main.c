/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include "../include/infinitadd.h"

int main(int ac, char **av){
    if(ac != 3)
        return(84);
    return (initializator(av[1], av[2]));
} 
