/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
#include <stdio.h>

#include "../include/infinitadd.h"
int adding_plus(int add)
{    
    if (add >= 10)
        return (1);
    else
        return(0);
}      

char *infinit_add(char *result, char *nb_one, char *nb_two, int maximum_len)
{
    int plus = 0;
    int add  = 0;
    int nbr_one = my_strlen(nb_one);
    int nbr_two = my_strlen(nb_two);
    

    while(nbr_two != 0 && nbr_one != 0){
        add = plus + (nb_one[nbr_one] - 48) + (nb_two[nbr_two]-48);
        plus = adding_plus(add);
        if (add >= 10)
            add = add - 10;
        result[maximum_len] = add + 48; 
        maximum_len--;
        if(nbr_one != 0)
        nbr_one--;
        else
            nb_one[nbr_one] = 0;
        if(nbr_two != 0)
        nbr_two--;
        else
            nb_two[nbr_two] = 0;
    }
    printf("%s", result);
    return (result);
}

int initializator(char *nb_one, char *nb_two){
    char *result = NULL;
    int len_one = my_strlen(nb_one);
    int len_two = my_strlen(nb_two);
    int maximum_len = 0;
   
     if(len_one > len_two)
        maximum_len = len_one;
    else
        maximum_len = len_two;
    result = malloc(sizeof(maximum_len + 2));
    if (result == NULL)
        return(84);
    result[maximum_len] = '\0';
    result = infinit_add(result,nb_one, nb_two, maximum_len);
    if (result != NULL)
        my_putstr(result);
    return (0);
}
