#include "Empleado.h"

using namespace std;

Empleado::Empleado(){
    claveEmpleado = 0;
    nombre = "nombre";
    domicilio = "domicilio";
    reportaA = "reporta a";
    sueldo = 0;
}

Empleado::Empleado(const int& _claveEmpleado, const std::string& _nombre, const std::string& _domicilio, const std::string&_reportaA, const float& _sueldo){
    claveEmpleado = _claveEmpleado;
    nombre = _nombre;
    domicilio = _domicilio;
    reportaA = _reportaA;
    sueldo = _sueldo;
}

void Empleado::setClaveEmpleado(const int& _clave){
    claveEmpleado = _clave;
}

void Empleado::setNombre(const string& _nombre){
    nombre = _nombre;
}

void Empleado::setSueldo(const float& _sueldo){
    sueldo = _sueldo;
}

int Empleado::getClaveEmpleado() const{
    return claveEmpleado;
}

void Empleado::imprimir() const{
    cout<< nombre << "|" << claveEmpleado << "|" << domicilio << "|" << sueldo << endl << "Reporta a:" << reportaA << endl;
}

void Empleado::cambiaDomicilio(const string& nuevoDomicilio){
    domicilio = nuevoDomicilio;
}

void Empleado::cambiaReportaA(const string& nuevoReportaA){
    reportaA = nuevoReportaA;
}

void Empleado::actualizarSueldo(const float& porcentajeAumento){
    sueldo = sueldo + sueldo*(porcentajeAumento/100);
}

void Empleado::menuEmpleado(){
    int opc;
    float sueldoAux;
    string aux;

    cout<< "\nQue accion deseas realizar?\n";
    cout<< "1.Cambiar el domicilio del empleado\n";
    cout<< "2.Actualizar el sueldo del empleado\n";
    cout<< "3.Imprimir los datos del empleado\n";
    cout<< "4.Cambiar el nombre de la persona a la que reporta el empleado\n";
    cout<< "--->";
    cin>> opc;

    switch(opc){
    case 1:
        cout<< "Ingresa el nuevo domicilio:"; cin>> aux;
        cambiaDomicilio(aux);
        break;
    case 2:
        cout<< "Ingresa el porcentaje a aumentar el sueldo:"; cin>> sueldoAux;
        actualizarSueldo(sueldoAux);
        break;
    case 3:
        imprimir();
        break;
    case 4:
        cout<< "Ingresa el nombre de la persona a la que reporta el empleado:"; cin>> aux;
        cambiaReportaA(aux);
        break;
    }
}

Empleado operator +(const Empleado& m1, const Empleado& m2){
    return Empleado(m1.claveEmpleado + m2.claveEmpleado, m1.nombre + m2.nombre, m1.domicilio + m2.domicilio, m1.reportaA + m2.reportaA, m1.sueldo + m2.sueldo);
}

bool Empleado::operator == (Empleado& m){
    return (claveEmpleado == m.claveEmpleado && nombre == m.nombre && domicilio == m.domicilio && reportaA == m.reportaA && sueldo == m.sueldo);
}

bool Empleado::operator != (Empleado& m){
    return (claveEmpleado != m.claveEmpleado || nombre != m.nombre || domicilio != m.domicilio || reportaA != m.reportaA || sueldo != m.sueldo);
}

bool Empleado::operator < (Empleado& m){
    return (claveEmpleado < m.claveEmpleado);
}

bool Empleado::operator > (Empleado& m){
    return (claveEmpleado > m.claveEmpleado);
}

istream& operator >> (istream& i, Empleado& m){
    cout<<"\n ingresa clave: ";
    i>>m.claveEmpleado;
    cout<<"\n ingresa nombre: ";
    i>>m.nombre;
    cout<<"\n ingresa domicilio: ";
    i>>m.domicilio;
    cout<<"\n ingresa reportaA: ";
    i>>m.reportaA;
    cout<<"\n ingresa sueldo: ";
    i>>m.sueldo;
    return i;
}

ostream& operator << (ostream& o, const Empleado& m){
    o<< m.claveEmpleado << "|" << m.nombre << "|" << m.domicilio << "|" << m.reportaA << "|" << m.sueldo;
    return o;
}
