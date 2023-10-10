//
// Created by River on 9/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_BONOPORRESULTADO_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_BONOPORRESULTADO_H
#include "Empleado.h"
# include "Helper.h"
#include "Bono.h"

class BonoPorResultado : public Bono {
public:
    double calcularBono(Empleado * empleado) {
        double montoBonoPorResultado = 0;
        if (empleado->getTipoDeEmpleado() == "gerente") {    //en caso que sea gerente
            return montoBonoPorResultado;
        }   //gerente
        if (empleado->getTipoDeEmpleado() == "cadete") { //en caso que sea cadete
            int cantidadDiasAusente = empleado->getDiasAustentes();
            if (cantidadDiasAusente == 0) {
                montoBonoPorResultado = 100;
            } else {
                if (cantidadDiasAusente == 1) {
                    montoBonoPorResultado = 50;
                } else {
                    montoBonoPorResultado = 0;      //redundante para legibilidad del código
                }
            }
        } //cadete
        //cout << "El bono por resultadd es de $ "<<montoBonoPorResultado<<".\n";
        return montoBonoPorResultado;
    };
};
#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_BONOPORRESULTADO_H