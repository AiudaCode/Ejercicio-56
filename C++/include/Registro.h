#ifndef REGISTRO_H
#define REGISTRO_H
#include "Proceso.h"
#include <iostream>

using namespace std;

class Registro
{
    public:
        Registro();
        virtual ~Registro();
        void setTamano(int val);
        int getTamano();
        void setVector(int pos, Proceso *val);
        Proceso *getVector(int pos);
        void crearVector();
        void cambiar(int p1, int p2);
        void ordenar();
    protected:

    private:
        // de declaran los atributos privados de la clase
        int tamano;
        Proceso *vector;
};

#endif // REGISTRO_H
