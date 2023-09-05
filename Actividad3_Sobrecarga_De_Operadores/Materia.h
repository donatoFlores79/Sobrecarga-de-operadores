#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

#include <string>
#include <iostream>

class Materia{
private:
    int clave;
    std::string nombre, profesor, libroTexto;
public:
    Materia(const std::string&);
    Materia(const int&, const std::string&, const std::string&, const std::string&);

    void imprimir() const;
    void cambiaClave(const int&);
    void cambiaProfe(const std::string&);

    friend Materia operator + (const Materia&, const Materia&);
    bool operator == (Materia&);
    bool operator != (Materia&);
    bool operator < (Materia&);
    bool operator > (Materia&);
    friend std::istream& operator>>(std::istream&, Materia&);
    friend std::ostream& operator<<(std::ostream&, const Materia&);
};

#endif // MATERIA_H_INCLUDED
