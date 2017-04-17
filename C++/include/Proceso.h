#ifndef PROCESO_H
#define PROCESO_H
#include <iostream>

using namespace std;

class Proceso
{
    public:
        Proceso();
        virtual ~Proceso();
        void setNombreProceso(string val);
        string getNombreProceso();
        void setTiempo(int val);
        int getTiempo();
        void setNombreTarea(string val);
        string getNombreTarea();
    protected:

    private:
        // de declaran los atributos privados de la clase
        string nombre_proceso;
        int tiempo;
        string nombre_tarea;
};

#endif // PROCESO_H
