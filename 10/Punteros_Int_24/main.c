#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b);

int main()
{
    int* numeroDeOrden = 50;
    int* auxOrden;
    int opcion;

    do
    {
          printf("1.Pide numero de orden\n2.Ordena\n3.Muestra\n");
          scanf("%d",&opcion);
          switch(opcion)
          {
          case 1:
              cargarVector(numeroDeOrden ,50);
            break;

          case 2:
              ordenar(numeroDeOrden,50);
            break;
          case 3:
              mostrar(numeroDeOrden,50);
            break;
          }

          system("cls");

    }while(opcion != 5);

    return 0;
}

void cargarVector(int* vector, int tam)
{
    int seguir;
    int i;
    for(i=0; i<tam; i++)
    {
        printf("\nQuiere seguir (1 para seguir):\n");
        scanf("%d",&seguir);
        if(seguir == 1)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", vector+i);
        }else
        {
            printf("1111");
            break;
        }
    }
}

void swap(int* a, int* b)
{
     int c;
     c = *a;
    *a = *b;
    *b = c;
}

void ordenar(int* array, int tam){
    int i=0;
    int j=0;
    for(i= 0; i< tam -1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if((array+i)> *(array+j))
            {
                int a;
                swap(array+i, array+j);
            }
        }
    }
}

void mostrar(int* array, int tam)
{

    int i=0;
    for(i=0;i<tam;i++)
    {
            if(*(array+i)!=0)
            {
                printf("%d-%d \n ",i, *(array+i));
            }
    }
}
/// en punteros al hacer un swap se le pasa la direccion de memoria que tiene que guardar (con &) en vez de los valores
/// que se van a intercambiar
