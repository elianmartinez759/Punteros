#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    //char nombre[31];
    int edad;
    float altura;
}ePersona; /// e == s

ePersona* new_persona(); /// crea una persona *

int mostrarPersona(ePersona* unaPersona); /// muestra una persona *

int delete_Persona(ePersona* unaPersona); /// libera el puntero

ePersona* new_persona_Parametros(int, int, float);



