#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    int id;
    int orden;
    char apellido[31];
}ePersona;

void inicializar(ePersona* per, int);
void mostrar(ePersona* per, int);
void ordenar(int*, int);/// falta arrelar
void swap(int*, int*);/// falta arreglar
void pedirDatos(ePersona* listaPersonas, int tam, int id);

int main()
{
    ePersona personas[50];
    inicializar(personas,50);
    int id = 1;
    int opcion;

    do
    {
          printf("1.cargar personas\n2.mostrar personas\n5.salir\n");
          scanf("%d",&opcion);
          switch(opcion)
          {
          case 1:
              CargarPersonas(personas,50,id);
              id++;
            break;
          case 2:
              mostrar(personas,50);
            break;
          }

          system("cls");

    }while(opcion != 5);

    return 0;
}

void inicializar(ePersona* per, int tam) ///<-- Esto es de estruc
{
        int i;
        for(i=0;i<tam;i++)
        {
            (*(per+i)).id =-1;   ///(per+i)->id=-1;  //// Para conseguir la posicion de memoria de i es: &(per+i)->id=-1
        }
}

void mostrar(ePersona* per, int tam){

        int i=0;
        for(i=0;i<tam;i++)
        {
                if((per+i)->id != -1)
                {
                    printf("%d-%f-%s \n ",(per+i)->id ,(per+i)->orden ,(per+i)->apellido);
                }
        }
}

/*void ordenar(ePersona*per, int tam){
    int i=0;
    int j=0;
    for(i= 0; i< tam -1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if((per+i)-> >*(per+j))
            {
                swap(*(array+i), *(array+j));
            }
        }
    }

}*/
void swap(int* a, int* b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void pedirDatos(ePersona* per, int tam, int id)
{
    system("cls");
    printf("Ingrese el apellido");
    fflush(stdin);
    gets(&(per->apellido));
    printf("\nIngrese la orden");
    scanf("%f", &(per->orden));
    per->id = id;
}

int estaVacio(ePersona* listaPersonas, int tam)
{
    int i;
    int espacioVacio;
    for(i=0;i<tam;i++)
    {
        if((listaPersonas + i)->id == -1)
        {
            espacioVacio = i;
            break;
        }
    }
    return espacioVacio;
}

void CargarPersonas(ePersona* listaPersonas, int tam, int id)
{
    int retorno = -1;
    int i;
    i = estaVacio(listaPersonas,tam);

    if(i != -1)
    {
        pedirDatos((listaPersonas + i), tam, id);
    }else
    {
        printf("\nERROR.Nohay mas espacio\n");
    }
    printf("\nPersona cagada\n");
}

/// per[0]. id | per->id | (per + 0)->id | (*per).id | (*(per + 0)).id |

