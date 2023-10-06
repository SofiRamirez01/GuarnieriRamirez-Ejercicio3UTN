//
// Created by sofiv on 9/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_GERENTE_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_GERENTE_H
#include "Empleado.h"
class Gerente : public Empleado{
private:
    int calidadDpto;
public:
    Cadete(const string& n, const string& t, int id, int da, int cd) : Empleado(n, t, id, da), calidadDpto(cd){}
    void setSueldoNeto()
    {
        sueldoNeto = 1000.0;
    }
};
#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_GERENTE_H
