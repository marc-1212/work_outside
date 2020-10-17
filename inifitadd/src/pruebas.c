#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);
char * adding(char * nb_1, char * nb_2, int i, int j);
int plusing(int add, int plus);
char * adding_2(char * number, char * nb_1,int i, int plus);
void final_result(char * nb_1, char * nb_2);

void final_result(char * nb_1, char * nb_2)
{
    int i = my_strlen(nb_1);
    int j = my_strlen(nb_2);
    char * number = malloc(sizeof (char) * (i));
    
    number = adding(nb_1,nb_2,i, j);
    printf("%s\n", number);
}
  int plusing(int add, int plus)
 {
     if (add >= 10)
         plus =1;

     else
         plus =	0;

     return (plus);
 }


char * adding_2(char * number, char * nb_1,int i, int plus)
{
    int add = 0;
    int k = my_strlen(nb_1) + i;

     while(i >= 0 && nb_1[i] != '-')
     {
         add = (nb_1[i] - 48) + plus;
         plus = plusing(add, plus);
             if (add >= 10)
                 add = add - 10;

         number[k] = add;
         k++;
         i--;
     }

     return(number);
}
char * adding(char * nb_1, char * nb_2, int i, int j)
{
    char * number = malloc(sizeof (char) * (i+1));
    int k = 0;
    int plus = 0;
    int add = 0;

    while(j >= 0  && nb_1[j]!= '-'){
        add = (nb_1[i]-48) + (nb_2[j]-48) + plus;
	plus =  plusing(add, plus);
        if (add >= 10)
            add = add - 10;
        
        
        number[k] = add + 48;
        i--;
	j--;
        k++;
    }
    return(adding_2(number, nb_1, i, plus));
}

int my_strlen(char const *str)
{
    int i = 0;

    while(str[i] != '\0' )
        i++;


    return(i);
}
 int main(int ac, char ** av )
{
    final_result(av[1], av[2]);
    return (0);
}
