//
// Created by River on 6/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_CLASE2_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_CLASE2_H
#include "Empleado.h"
class Cadete : public Empleado{
private:
    int cantidadTareas;
public:
    Cadete(const string& n, const string& t, int id, int da, int ct) : Empleado(n, t, id, da), cantidadTareas(ct){}
    void setSueldoNeto()
    {
         sueldoNeto = 1500.0;
    }
};
#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_CLASE2_H
