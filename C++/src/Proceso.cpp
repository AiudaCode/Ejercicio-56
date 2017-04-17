#include "Proceso.h"

Proceso::Proceso()
{
    // se le asignan valores por defecto a los atributos en el constructor
    nombre_proceso = "";
    tiempo = 0;
    nombre_tarea = "";
}

Proceso::~Proceso()
{
    //dtor
}

void Proceso::setNombreProceso(string val)
{
    nombre_proceso = val;
}

string Proceso::getNombreProceso()
{
    return nombre_proceso;
}

void Proceso::setTiempo(int val)
{
    tiempo = val;
}

int Proceso::getTiempo()
{
    return tiempo;
}

void Proceso::setNombreTarea(string val)
{
    nombre_tarea = val;
}

string Proceso::getNombreTarea()
{
    return nombre_tarea;
}
