#include<stdio.h>

#define MAXSIZE 20
#define MAXSIZE1 8
void main()
{

    char vector [][MAXSIZE] = {"Brenda", "Daniel", "Gerardo", "Erika", "Fabian", "Carlos", "Alejandra"};
    char vector1 [MAXSIZE];
    // Esto si hace el cambio, falta un vector intermedio
     for (int i = 0; i < MAXSIZE; i++)
   vector1 [i] =   vector [0][i] ; 
    // char vector1 [MAXSIZE1][MAXSIZE] ;
    // int acum, acum1;
    // acum =6;
    // printf("\n%s\n", vector [acum]);
    // if(vector [1][0] < vector [2][0])
    // printf("\n%s\n", vector[2]);
     for (int i = 0; i < MAXSIZE1; i++)
          {
            printf("\t%s\t", vector[i]);
         }
        //  printf("\n%s\t", vector1 [MAXSIZE]);
        printf("\n\t");
         for (int i = 0; i < MAXSIZE; i++)
          {
            printf("%c", vector1 [i]);
         }
   
}
