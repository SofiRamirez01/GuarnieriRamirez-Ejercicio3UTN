//
// Created by River on 9/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_BONOPORPRESENTISMO_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_BONOPORPRESENTISMO_H
#include "Bono.h"
#include "Gerente.h"
#include "Cadete.h"
#include "Empleado.h"

class BonoPorPresentismo : public Bono {
public:
    double calcularBono (Empleado * empleado){
        int resultado = 0;
        if (empleado->getTipoDeEmpleado() == "gerente"){    //en caso que sea gerente
            Gerente* gerente = dynamic_cast<Gerente*>(empleado);
            int calidad = gerente->getCalidadDpto();
            if (calidad > 75){
              resultado = 1;
            } else {
                if (calidad > 50){
                    resultado = 2;
                } else {
                    resultado = 3;
                }
            }
        } //gerente
        if (empleado->getTipoDeEmpleado() == "cadete"){ //en caso que sea cadete
            Cadete* cadete = dynamic_cast<Cadete*>(empleado);
            int cantidad = cadete->getcantidadTareas();
            if (cantidad > 200){
                resultado = 1;
            } else {
                if (cantidad > 150){
                    resultado = 2;
                } else {
                    resultado = 3;
                }
            }
        } //cadete
        double montoBonoPorPresentismo = 0;
        if (resultado == 1){
            montoBonoPorPresentismo = empleado->getSueldoNeto() * 0.1;
        }
        if (resultado == 2){
            montoBonoPorPresentismo = 80;
        } else {
            montoBonoPorPresentismo = 0;
        }
        double rdo = 500;
        //cout << "El bono por presentismo es de $ "<<montoBonoPorPresentismo<<".\n";
        return montoBonoPorPresentismo;
    };
};

#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_BONOPORPRESENTISMO_H
