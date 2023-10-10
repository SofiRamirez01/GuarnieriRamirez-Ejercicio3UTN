//
// Created by River on 9/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_RECIBODESUELDO_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_RECIBODESUELDO_H
#include "Helper.h"
#include "Empleado.h"
#include "BonoPorPresentismo.h"
#include "BonoPorResultado.h"

class ReciboDeSueldo{
public:
    ReciboDeSueldo(double montoBonoPorPresentismo, double montoBonoPorResultado){
        bonoPorResultado = montoBonoPorResultado;
        bonoPorPresentismo = montoBonoPorPresentismo;

    }
    double getBonoP(){
        return bonoPorPresentismo;
    }
    double getBonoR(){
        return bonoPorResultado;
    }
private:
    double bonoPorPresentismo;
    double bonoPorResultado;
};

#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_RECIBODESUELDO_H
