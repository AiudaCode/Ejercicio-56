#include "Registro.h"

Registro::Registro()
{
    tamano = 0;
    vector = NULL;
}

Registro::~Registro()
{
    //dtor
}

// métodos Setters y Getters de los atributos de la clase
void Registro::setTamano(int val)
{
    tamano = val;
}
int Registro::getTamano()
{
    return tamano;
}
void Registro::setVector(int pos, Proceso *val)
{
    vector[pos] = *val;
}

Proceso *Registro::getVector(int pos)
{
    return &vector[pos];
}

// método para crear el vector
void Registro::crearVector()
{
    // le asignamos al vector de tipo Proceso un tamaño del valor de la variable tamano
    vector = new Proceso[tamano];
}

void Registro::cambiar(int p1, int p2)
{
    // inicializamos una variable de tipo proceso en el valor que haya en la posicion p1 del vector
   Proceso *temp = getVector(p1);
   // en la poscion p1 le asignamos el valor que haya en la posicion p2 del vector
   setVector(p1, getVector(p2));
   // en la poscion p2 le asignamos el valor que haya en la variable temp
   setVector(p2, temp);
}

// método para ordenar por el tiempo de uso
void Registro::ordenar()
{
    // recorremos con el ciclo for el vector
   for (int i = 0; i < getTamano(); i++)
   {
        // con el otro ciclo for recorremos la siguiente posicion de i
        for (int j = i+1; j < getTamano(); j++)
        {
            // si la el tiempo de la posicion i del vector es mayor a su siguiente posicion
            if (getVector(i)->getTiempo() > getVector(j)->getTiempo())
            {
                // entonces cambiamos esas posiciones
                cambiar(i, j);
            }
        }
   }
}
