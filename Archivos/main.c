#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE* pArchive;

    char miNombre[50];

    pArchive = fopen("C:\\ARCHIVOS2\\miNombre.txt","w");///<-- "w" es para  | "r" para lectura | "wb" y "rb" para binarios | "a" para todo el archivo.

    fprintf(pArchive, "Elian");/// + para normal

    printf("mi nombre es: %s",miNombre);

    ///fwrite(); /// + para binario
    /*


    pArchive = fopen("D:\\ARCHIVOS\\miNombre.txt","r");

    fgets(miNombre, 50, pArchive);*/



    fclose(pArchive);/// <-- Para cerrar.

    return 0;
}
