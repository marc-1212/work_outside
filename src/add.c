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

    maximum_len = maximum_len +1;
    while (maximum_len >= 0){
        add = plus + (nb_one[nbr_one] - 48) + (nb_two[nbr_two]-48);
        plus = adding_plus(add);
        if (add >= 10)
            add = add - 10;
        result[maximum_len] = add + 48; 
        maximum_len--;
        if(nbr_one != 0 && nb_one[nbr_one - 1] != '-')
        nbr_one--;
        else
            nb_one[nbr_one] = '0';
        if(nbr_two != 0 && nb_two[nbr_two -1] != '-')
        nbr_two--;
        else
            nb_two[nbr_two] = '0';
    }
    return (result);
}

int initializator(char *nb_one, char *nb_two){
    char *result = NULL;
    int len_one = my_strlen(nb_one);
    int len_two = my_strlen(nb_two);
    int maximum_len = 0;
    int adsfa = 2;
     if(len_one > len_two)
        maximum_len = len_one;
    else
        maximum_len = len_two;
     result = malloc(sizeof (char) * (maximum_len + 2));
     if((nb_one[0] == '-' && nb_two[0] != '-')  || (nb_two[0] == '-' && nb_one[0] != '-')){
         result = infinit_ress(result, nb_one, nb_two, maximum_len);
         return (0);
         }
    result = infinit_add(result,nb_one, nb_two, maximum_len);
    result[maximum_len + 1] = '\0';
        print(result, nb_one, nb_two, maximum_len);
    return (0);
}

void print(char *result, char *nb_one, char *nb_two, int maximum_len)
{
    int i = 0;
    int bool = 0;
    
    if (nb_one[0] == '-' && nb_two[0] == '-')
        my_putchar('-');
    while (result[i] != '\0'){
        if (result[i] == '0' && bool == 1)
            my_putchar('0');
        if (result[i] <= 57 && result[i] >= 49){
            my_putchar(result[i]);
            bool = 1;
        }
        i++;
    }
}
    
    
