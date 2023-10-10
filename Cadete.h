//
// Created by sofiv on 9/10/2023.
//

#ifndef TPN2_GUARNIERIRAMIREZ_CADETE_H
#define TPN2_GUARNIERIRAMIREZ_CADETE_H
#include "Empleado.h"

class Cadete : public Empleado{
private:
    int cantidadTareas;
public:
    Cadete(const string& n, const string& t, int cu, int da, int ct) : Empleado(n, t, cu, da), cantidadTareas(ct){
        setSueldoNeto();
    }
    void setSueldoNeto() override
    {
        sueldoNeto = 1500.0;
    }
    int getcantidadTareas() const
    {
        return cantidadTareas;
    }
};
#endif //TPN2_GUARNIERIRAMIREZ_CADETE_H
