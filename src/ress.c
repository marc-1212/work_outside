/*
** EPITECH PROJECT, 2020
** ress algorithm
** File description:
** ress
*/

int infinit_ress(char *result, char *nb_one, char *nb_two, int maximum_len)
{
    if (nb_one < nb_two)
        infinit_ress(char *result, char *nb_two, char *nb_one, int maximum_len);
    
   result =  ress(result,  nb_one,  nb_two,  maximum_len);
    return(0);
}          

int ress (char *result, char *nb_one, char *nb_two, int maximum_len)
{
    int minor = 0;
    
    while (maximum_len >= 0)
    {           nb_two[nbr_two] = nb_two[nb_two]  
        if (nb_one[nbr_one] < nb_two[nbr_two])
            minor = 1 ;


    }
}
