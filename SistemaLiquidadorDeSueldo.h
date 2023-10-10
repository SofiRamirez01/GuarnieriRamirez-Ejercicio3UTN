//
// Created by River on 6/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_SISTEMALIQUIDADORDESUELDO_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_SISTEMALIQUIDADORDESUELDO_H
#include "ReciboDeSueldo.h"
#include "Empleado.h"
#include "Bono.h"
#include "BonoPorPresentismo.h"
#include "BonoPorResultado.h"
#include <list>
class SistemaLiquidadorDeSueldo {
public:
    SistemaLiquidadorDeSueldo(string name) : nombreEmpresa(name){}
    ReciboDeSueldo calcularSueldo(Empleado * empleado){
        BonoPorPresentismo * bonoP;
        double montoBonoP = bonoP->calcularBono(empleado);
        BonoPorResultado * bonoR;
        double montoBonoR = bonoR->calcularBono(empleado);
        ReciboDeSueldo recibo(montoBonoP,montoBonoR);
        return recibo;
    }
    void AgregarEmpleado(Empleado p) {
        listaEmpleados.push_back(p);
    }
    void getNombre(){
        cout << nombreEmpresa << endl;
    }

    void ImprimirReciboDeSueldo(Empleado * empleado){
        cout << "---------------RECIBO-DE-SUELDO----------------" << endl;
        cout << "1. Empleado: " << empleado->getNombre() <<".\n";
        cout << "2. Categoria: " << empleado->getTipoDeEmpleado() <<".\n";
        cout << "3. Sueldo Neto: $" << empleado->getSueldoNeto() <<".\n";
        cout << "4. Bono por presentismo: $" << empleado->getRecibo().getBonoP() <<".\n";
        cout << "4. Bono por resultado: $" << empleado->getRecibo().getBonoR() <<".\n";
        double total =  empleado->getSueldoNeto() + empleado->getRecibo().getBonoP() + empleado->getRecibo().getBonoR();
        cout << "5. Sueldo Total: $" << total <<".\n";
        cout << "-----------------------------------------------" << endl;
    }

    void gestionarTodo(){
        cout << "+-------------------------------------------------+" << endl;
        cout << "|                 ELIJA UNA OPCION                |" << endl;
        cout << "| 1. Ingresar Nueva Empresa                       |" << endl;
        cout << "| 2. Ingresar Nuevo Empleado                      |" << endl;
        cout << "| 3. Calcular Sueldo                              |" << endl;
        cout << "| 4. Mostrar Lista de Empleados                   |" << endl;
        cout << "| 5. Imprimir Recibo                              |" << endl;
        cout << "| 0. SALIR                                        |" << endl;
        cout << "+-------------------------------------------------+" << endl;
        cout << "- Opcion: ";
    }
private:
    string nombreEmpresa;
    list <Empleado> listaEmpleados;
};

#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_SISTEMALIQUIDADORDESUELDO_H