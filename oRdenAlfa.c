#include <stdio.h>

#define MAXSIZE 20
#define MAXSIZE1 8
void main()
{

    char vector[][MAXSIZE] = {"Brenda", "Daniel", "Gerardo", "Erika", "Fabian", "Carlos", "Alejandra"};
    char vector1[MAXSIZE];
    // Esto si hace el cambio, falta un vector intermedio
    //      for (int i = 0; i < MAXSIZE; i++)
    //    vector1 [i] =   vector [0][i] ;

    // Inicia prueba

    for (int i = 0; i < MAXSIZE1 - 1; i++)
    {
        for (int j = 0; j < MAXSIZE1 - 1 - i; j++) // Pner atencion a este detalle para optimizatr el metodo
        {
            if (vector[j][MAXSIZE] > vector[j + 1][MAXSIZE])
            {
                // acum = vector [j];
                for (int k = 0; k < MAXSIZE; k++)
                    vector1[k] = vector[j][k];

                // vector [j] = vector [j+1];
                for (int k = 0; k < MAXSIZE; k++)
                    vector1[k] = vector[j + 1][k];

                // vector [j+1] = acum;
                for (int k = 0; k < MAXSIZE; k++)
                    vector[j + 1][k] = vector1[k];
            }
        }
    }

    for (int i = 0; i < MAXSIZE1; i++)
    {
        printf("\t%s\t", vector[i]);
    }
    // printf("\n\t");
    //  for (int i = 0; i < MAXSIZE; i++)
    //   {
    //     printf("%c", vector1 [i]);
    //   }
}
