
 int plusing(int add, int plus) 
 { 
     if (add >= 10)
         plus =1;

     else
         plus = 0;

     return (plus);
 }

char * adding_2(char * number, char * nb_1,int i, int plus) 
{ 
    int add = 0; 
    int k = my_strlen(nb_1) + i; 
    
     while(i >= 0 && nb_1[i] != '-') 
     { 
         add = (nb_1[i] - 48) + plus; 
         plus = plusing(add, plus) 
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
  

final_result(char *nb_1, char * nb_2 )
{
    int i = my_strlen(nb_1);
    int j = my_strlen(nb_2);
    char * number = malloc(sizeof (char) * (i + 1)) ;
    int  bool = 0;
    
    if (i < j)
        final_result( nb_2, nb_1);
    
    bool = cheking_sings(nb_2, nb_1);
        if (bool = 0)    
            number = adding(nb_1, nb_2,i, j);

        else
            number = resting(nb_1, nb_2, i, j);
        
        number = revtr(number);
        printing_char(number);
}

void main(int ac, char ** av )
{
    
    if (ac != 3)
        return(84);
    
    //final_result(av[1], av[2]);
    return (0);
}

