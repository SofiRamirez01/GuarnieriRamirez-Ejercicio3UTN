//
// Created by sofiv on 9/10/2023.
//

#ifndef TPN2_GUARNIERIRAMIREZ_GERENTE_H
#define TPN2_GUARNIERIRAMIREZ_GERENTE_H
#include "Empleado.h"

class Gerente : public Empleado{
private:
    int calidadDpto;
public:
    Gerente(const string& n, const string& t, int cu, int da, int cd) : Empleado(n, t, cu, da), calidadDpto(cd){
        setSueldoNeto();
    }
    void setSueldoNeto() override
    {
        sueldoNeto = 1000.0;
    }
    int getCalidadDpto() const
    {
        return calidadDpto;
    }


};
#endif //TPN2_GUARNIERIRAMIREZ_GERENTE_H
