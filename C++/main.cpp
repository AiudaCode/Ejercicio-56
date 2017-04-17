#include <iostream>
#include "Proceso.h"
#include "Registro.h"
#include "stdlib.h"

using namespace std;

// método para llenar el vector
void llenar(Proceso *pro)
{
    // pedimos el nombre del proceso
    string n_proceso, n_tarea;
    int t;
    cout << "Digite nombre del proceso" << endl;
    cout << ">> ";
    cin >> n_proceso;
    // encapsulamos la variable n_proceso
    pro->setNombreProceso(n_proceso);

    // pedimos el tiempo de uso del procesador
    cout << "Digite tiempo de uso del procesador" << endl;
    cout << ">> ";
    cin >> t;
    // encapsulamos la variable t
    pro->setTiempo(t);
    // pedimos el nombre de la tarea
    cout << "Digite nombre de la tarea ejecutada" << endl;
    cout << ">> ";
    cin >> n_tarea;
    // encapsulamos la variable n_tarea
    pro->setNombreTarea(n_tarea);
}

// método para mostrar la informacion del vector
void mostrar(Registro *obj)
{
    // recorremos el vector con el ciclo for
    for (int i = 0; i < obj->getTamano(); i++)
    {
        // acumulamos en la variable datos la informacion que haya en la posicion i del vector
        cout << "Nombre del proceso: " << obj->getVector(i)->getNombreProceso() << endl;
        cout << "Tiempo de uso del procesador: " << obj->getVector(i)->getTiempo() << endl;
        cout << "Nombre de la tarea: " << obj->getVector(i)->getNombreTarea() << endl << endl;
    }
}

// método para mostrar el menu de opciones
int menu()
{
    int opcion;
    do
    {
        cout << "======== MENÚ =======" << endl;
        cout << "1. Mostrar registros" << endl;
        cout << "2. Ordenar registros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        system("cls");
    }
    while (opcion < 1 || opcion > 3);
    return opcion;
}

int main(void)
{
    // creamos un objeto de la clase Registro (Instanciación)
    Registro *obj = new Registro();
    // declaramos un objeto de la clase Proceso
    Proceso *pro;
    int opcion, tam;
    // pedimos el tamaño del vector
    cout << "Digite tamano del Vector" << endl;
    cout << ">> ";
    cin >> tam;
    // encapsulamos la variable tam
    obj->setTamano(tam);
    // creamos el vector
    obj->crearVector();
    // recorremos el vector con el ciclo for
    for (int i = 0; i < obj->getTamano(); i++)
    {
        // creamos un nuevo objeto de la clase Proceso
        pro = new Proceso();
        cout << "Llene la información del registro " << i << endl;
        // llenamos la informacion de ese objetos
        llenar(pro);
        // guardamos en la posicion i el objeto pro
        obj->setVector(i, pro);
    }
    do
    {
        // le asignamos a la variable opcion el valor que retorne el metodo menu
        opcion = menu();
        // dependiendo del valor que tenga la variabl opcion se seleccionara un caso
        switch(opcion)
        {
            case 1:
                mostrar(obj);
                break;
            case 2:
                obj->ordenar();
                cout << "REGISTROS ORDENADOS!" << endl;
                break;
            default:
                break;
        }
    }
    while (opcion != 3);
}
