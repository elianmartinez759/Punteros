#include <stdio.h>
#include <stdlib.h>

void cargarVector(int*, int);
void mostrarVector(int*, int);
void incrementarId(int*);

int main()
{
    int contID = 0;
    int vector[5];
    //cargarVector(vector,5);
    //mostrarVector(vector,5);
    incrementarId(&contID);
    printf("siguiente: %d\n", contID);

    return 0;
}

void cargarVector(int* vector, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", vector+i);
    }
}

void mostrarVector(int* vector, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d\n", *(vector + i));
    }
}

void incrementarId(int* ultimoId)
{
    *ultimoId = *ultimoId + 1;
}







///printf("%d", sizeof());  //--> el tamaño de una estructura es la suma de todos los tipos de datos
