#include "persona.h"

/// Memoria dinamica

int main()
{
    ePersona* pPersona;

    pPersona = new_persona_Parametros(100,50,1.87); /// <-- Constructor por defecto.

    if(mostrarPersona(pPersona) != 1)
    {
        printf("ERROR");
    }

    delete_Persona(pPersona);

    mostrarPersona(pPersona);

    return 0;
}



/// malloc encuentra un espacio de memoria y lo reserva

