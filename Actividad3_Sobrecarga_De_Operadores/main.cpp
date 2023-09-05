#include <iostream>
#include "Empleado.h"
#include "Materia.h"

using namespace std;

int main()
{
    int clave;
    string nombre;
    float sueldo;
    Empleado jefePlanta, jefePersonal;

    cout<< "--- Jefe de planta ---\n";
    cout<< "clave:"; cin>> clave;
    jefePlanta.setClaveEmpleado(clave);
    cout<< "nombre:"; cin>> nombre;
    jefePlanta.setNombre(nombre);
    cout<< "sueldo:"; cin>> sueldo;
    jefePlanta.setSueldo(sueldo);

    cout<< "--- Jefe de personal ---\n";
    cout<< "clave:"; cin>> clave;
    jefePersonal.setClaveEmpleado(clave);
    cout<< "nombre:"; cin>> nombre;
    jefePersonal.setNombre(nombre);
    cout<< "sueldo:"; cin>> sueldo;
    jefePersonal.setSueldo(sueldo);

    Materia programacion("programacion"), basesDeDatos("bases de datos");

    int opc = 1;
    while(opc != 3){
        cout<< "\n\nTeclea 1 para trabajar con la clase empleado, 2 para trabajar con la clase materia o 3 para salir\n--->";
        cin>> opc;
        cout<< endl;

        switch(opc){
        case 1:
            int clave;
            cout<< "Clave del empleado elegido:"; cin>> clave;

            if(clave == jefePersonal.getClaveEmpleado())
                jefePersonal.menuEmpleado();
            else if(clave == jefePlanta.getClaveEmpleado())
                jefePlanta.menuEmpleado();
            else
                cout<< "La clave no corresponde con ninguno de los 2 empleados\n";
            break;
        case 2:
            int opc1;
            cout<< "\nQue accion deseas realizar?\n";
            cout<< "1.Cambiar la clave de la materia programacion\n";
            cout<< "2.Cambiar el nombre del profesor que imparte bases de datos\n";
            cout<< "3.Imprimir los datos de la materia 'bases de datos'\n";
            cout<< "--->";
            cin>> opc1;

            switch(opc1){
                case 1:
                    int clave;
                    cout<< "Ingresa la nueva clave de la materia:"; cin>> clave;
                    programacion.cambiaClave(clave);
                    break;
                case 2:
                    {
                        string profesor;
                        cout<< "Ingresa el nombre del nuevo profesor:"; cin>> profesor;
                        basesDeDatos.cambiaProfe(profesor);
                        break;
                    }
                case 3:
                    basesDeDatos.imprimir();
                    break;
                default:
                    cout<< "Ingresa una opcion valida\n";
            }
            break;
        case 3:
            break;
        default:
            cout<< "Ingrese una opcion valida";

        }
    }

}
