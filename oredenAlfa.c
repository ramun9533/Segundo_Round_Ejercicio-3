#include<stdio.h>

#define MAXSIZE 7
void main ()
// {a, b, c, d, e, f, g}   Ç{b, d, g, e, f, c, a};
{
    char vector[MAXSIZE] = {"bdgefca"}; //{"b, d, g, e, f, c, a"};
   char prueba = 65; // prueba codigo ASCII
    int acum, acum1;
    for (int i = 0; i < MAXSIZE - 1 ;i++)
      {
        for (int j = 0; j < MAXSIZE - 1 - i; j++) // Pner atencion a este detalle para optimizatr el metodo
         {
            if (vector [j] > vector[j+1])
            {
                acum = vector [j];
                vector [j] = vector [j+1];
                vector [j+1] = acum;
            }
         }
      }
      printf("\n");
         for (int i = 0; i < MAXSIZE; i++)
         {
            printf("\t%c\t", vector[i]);
         }
         printf("\n%c", prueba); // prueba codigo ASCII
}