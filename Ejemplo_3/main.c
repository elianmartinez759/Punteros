#include <stdio.h>
#include <stdlib.h>
///  Memoria Dinamica Ejemplo 3

int main()
{
    int* pEntero = (int*)calloc(sizeof(int),5); /// --> inicializa en 0 el array
    int i;

    free(pEntero); /// --> Libera los datos de la variable (como por ejempplo un aux que no se va a volver a utilizar)

    for(i=0; i<5; i++)
    {
        printf("%d\t", *(pEntero + i));
    }

    return 0;
}
