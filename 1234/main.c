#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int id[50];
    char nombre[50];
    char apellido[50];
} sEmpleado;

int main()
{
    FILE* pArchivo;
    char lector[100];
    char id[50];
    char nombre[51];
    char apellido[51];
    int i = 0;

    sEmpleado lista[50];

    sEmpleado unEmpleado;

    pArchivo = fopen("MOCK_DATA.csv", "r");

    while(!feof(pArchivo))
    {

        fscanf(pArchivo, "%[^,],%[^,],%[^,],",id,nombre,apellido);

        //unEmpleado.id = atoi(id);
        strcpy(unEmpleado.nombre,nombre);
        strcpy(unEmpleado.apellido,apellido);
        lista[i]=unEmpleado;
        i++;

        printf("%s---%s---%s\n");

    }
    fclose(pArchivo);
}
