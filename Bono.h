//
// Created by River on 9/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_BONO_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_BONO_H
#include "Helper.h"
#include "Empleado.h"

class Bono {
public:
    Bono( int nroBono , double montoP) : idBono(nroBono) , monto(montoP){}
    virtual double calcularBono (Empleado * empleado){}
private:
    int idBono;
    double monto;
};

#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_BONO_H
