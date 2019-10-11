#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int a;
    float d;
    char c;
}eDato;

void cargaDatos(eDato*, int);
void mostrarDatos(eDato*, int);


int main()
{
    /* Codigo original del ejemplo

    eDato unDato = {1,5.3,'B'};
    eDato* pDato;

    pDato = &unDato;


    printf("%d -- %.2f -- %c",(*pDato).a,
                              (*pDato).d,
                              (*pDato).c); /// --> primero va al puntero y luego con esa direccion muestra .a.d.c*/
    eDato unDato[2] = {{2,3.26,'C'},{1,5.3,'B'}};
    eDato* pDato;

    pDato = unDato;

    cargaDatos(pDato,2);
    mostrarDatos(pDato,2);

    return 0;
}

void cargaDatos(eDato* listaDatos, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese entero: ");
        scanf("%d", &(listaDatos+i)->a);
        printf("Ingrese flotante: ");
        scanf("%f", &(listaDatos+i)->d);
        printf("Ingrese caracter: ");
        fflush(stdin);
        (listaDatos+1)->c = getchar();
    }
}

void mostrarDatos(eDato* listaDatos, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("\n%d -- %.2f -- %c",(listaDatos + i)->a,
                                    (listaDatos + i)->d,
                                    (listaDatos + i)->c);  /// --> parentesis entre parentesis para que de prioridad a la direccion de memoria y no al valor en si.
    }
}

 /* eDato unDato = {1,5.3,'B'};
    eDato* pDato;

    pDato = &unDato;


    printf("%d -- %.2f -- %c",(*pDato).a,
                              (*pDato).d,
                              (*pDato).c); */

///printf("%d -- %.2f -- %c", unDato.a, unDato.d, unDato.c);

/// LAs flachas reemplazan al .a eliminando un parentesis y el *
