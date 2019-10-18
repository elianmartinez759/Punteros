#include "persona.h"

ePersona* new_persona()
{
    ePersona* miPersona; ///{100, 40, 1.87};  /// --> esto se guarda en el segmento de codigo

    miPersona = malloc(sizeof(ePersona));

    miPersona->legajo = 100;
    miPersona->edad = 40;
    miPersona->altura = 1.87;

    return miPersona;
}

int mostrarPersona(ePersona* unaPersona)
{
    int ret = -1;
    if(unaPersona != NULL)
    {
        printf("\nLa persona es: \n"); /// --> lo desplazo 8 espacios en memoria

        printf("%d\t%d\t%f\n", unaPersona->legajo,
                            unaPersona->edad,
                            unaPersona->altura); /// *(pPersona).altura ....  /// esto se guarda en la pila
        ret = 1;
    }else
    {
        ret = -1;
    }
    return ret;
}

int delete_Persona(ePersona* unaPersona)
{
    int ret = -1;
    if(unaPersona != NULL)
    {
        free(unaPersona);

        ret = 1;
    }else
    {
        ret = -1;
    }
    return ret;
}

ePersona* new_persona_Parametros(int legajo, int edad, float altura)
{
    ePersona* miPersona = new_persona();      ///(ePersona*) malloc(sizeof(ePersona);

    if(miPersona != NULL)
    {
        miPersona->legajo = legajo;
        miPersona->edad = edad;
        miPersona->altura = altura;
    }else
    {
        printf("\nERROR.no se puede crear persona\n");
    }

    return miPersona;
}
