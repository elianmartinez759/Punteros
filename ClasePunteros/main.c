#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int unEntero = 10;
    int* puntero = NULL;
    int* otroPuntero;

    puntero = &unEntero;        //<-- & pasa la direccion de memoria de unEntero al puntero.

    printf("ingrese numero: ");
    scanf("%d", puntero);       //<-- sin & o * ya que el puntero es una direccion de memoria en si.*/

    if(puntero != NULL)
    {
        otroPuntero = puntero;
        printf("el numero es: %d\n", *puntero);     // --> 10

    }else
    {
        printf("no apunta a nada.\n");
    }




        //printf("el numero es: %d\n", unEntero);// --> 10
        /*printf("el numero es: %d\n", &unEntero);// --> direccion de memoria 0x40
        printf("el numero es: %d\n", puntero);// --> direccion de memoria 0x40
        printf("el numero es: %d\n", &puntero);// --> direccion de memoria 0x75*/

    return 0;
}
