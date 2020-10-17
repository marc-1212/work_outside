/*
** EPITECH PROJECT, 2020
** mystrlen
** File description:
** counts the size of str
*/

int my_strlen (char const *str){
    int count = 0;
    
    while(str[count] != '\0')
        count++;
    return (count);
}
