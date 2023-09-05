#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include <string>
#include "iostream"

class Empleado{
private:
    int claveEmpleado;
    std::string nombre, domicilio, reportaA;
    float sueldo;
public:
    Empleado();
    Empleado(const int&, const std::string&, const std::string&, const std::string&, const float&);

    void setClaveEmpleado(const int&);
    void setNombre(const std::string&);
    void setSueldo(const float&);

    int getClaveEmpleado() const;

    void imprimir() const;
    void cambiaDomicilio(const std::string&);
    void cambiaReportaA(const std::string&);
    void actualizarSueldo(const float&);

    void menuEmpleado();

    friend Empleado operator + (const Empleado&, const Empleado&);
    bool operator == (Empleado&);
    bool operator != (Empleado&);
    bool operator < (Empleado&);
    bool operator > (Empleado&);
    friend std::istream& operator>>(std::istream&, Empleado&);
    friend std::ostream& operator<<(std::ostream&, const Empleado&);
};



#endif // EMPLEADO_H_INCLUDED
