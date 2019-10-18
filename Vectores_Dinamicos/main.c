#include <stdio.h>
#include <stdlib.h>

/// Memoria Dinamica Ejemplo 2

int main()
{
    int* miVector;
    int* auxVector;
    int x;

    miVector = (int*) malloc(sizeof(int)*5); /// Malloc es un puntero a cualquier cosa (es generico)  >> si no encuentra espacio devuelve NULL;

    if(miVector != NULL)
    {
        for(x=0; x<5; x++)
        {
            *(miVector + x) = x + 1;
        }
        for(x=0; x<5; x++)
        {
            printf("Numero: %d\n", *(miVector + x));
        }
    }else
    {
        printf("No encontre espacio\n");
    }

    auxVector = (int*) realloc(miVector,sizeof(int)*10); /// --> se castea el tipo de dato · realloc busca 10 espacios int

    if(auxVector != NULL)  /// --> Si realloc da null borra todo lo que tenia guardado el vector por eso se usa un aux
    {
        miVector = auxVector;
        for(x=5; x<10; x++)
        {
            *(miVector + x) = x + 1;
        }
        printf("\n\tLlego a 5, busco mas espacio\n\n");
        for(x=0; x<10; x++)
        {
            printf("Numero: %d\n", *(miVector + x));
        }

    }else
    {
        printf("No encontre espacio\n");
    }

    realloc(miVector,sizeof(int)*6); /// --> se castea el tipo de dato · realloc busca 10 espacios int

        printf("\n\tLlego a 10, borro 4 espacios\n\n");
        for(x=0; x<10; x++)
        {
            printf("Numero: %d\n", *(miVector + x));
        }

    return 0;
}

/// REALLOC busca ma espacio y reubica los datos que ya estaban en el vector
