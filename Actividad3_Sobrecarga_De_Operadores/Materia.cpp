#include "Materia.h"

using namespace std;

Materia::Materia(const string& _nombre){
    clave = 0;
    nombre = _nombre;
    profesor = "profesor";
    libroTexto = "libro de texto";
}

Materia::Materia(const int& _clave, const string& _nombre, const string& _profesor, const string& _libroTexto):clave(_clave), nombre(_nombre), profesor(_profesor), libroTexto(_libroTexto) {}

void Materia::imprimir() const{
    cout<< clave << "|" << nombre << "|" << profesor << "|" << libroTexto;
}

void Materia::cambiaClave(const int& _clave){
    clave = _clave;
}

void Materia::cambiaProfe(const string& _profesor){
    profesor = _profesor;
}

Materia operator +(const Materia& m1, const Materia& m2){
    return Materia(m1.clave + m2.clave, m1.nombre + m2.nombre, m1.profesor + m2.profesor, m1.libroTexto + m2.libroTexto);
}

bool Materia::operator == (Materia& m){
    return (clave == m.clave && nombre == m.nombre && profesor == m.profesor && libroTexto == m.libroTexto);
}

bool Materia::operator != (Materia& m){
    return (clave != m.clave || nombre != m.nombre || profesor != m.profesor || libroTexto != m.libroTexto);
}

bool Materia::operator < (Materia& m){
    return (clave < m.clave);
}

bool Materia::operator > (Materia& m){
    return (clave > m.clave);
}

istream& operator >> (istream& i, Materia& m){
    cout<<"\n ingresa clave: ";
    i>>m.clave;
    cout<<"\n ingresa nombre: ";
    i>>m.nombre;
    cout<<"\n ingresa profesor: ";
    i>>m.profesor;
    cout<<"\n ingresa libroTexto: ";
    i>>m.libroTexto;
    return i;
}

ostream& operator << (ostream& o, const Materia& m){
    o<< m.clave << "|" << m.nombre << "|" << m.profesor << "|" << m.libroTexto;
    return o;
}
