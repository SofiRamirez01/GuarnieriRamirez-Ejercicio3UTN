//
// Created by sofiv on 9/10/2023.
//

#ifndef TPN2_GUARNIERIRAMIREZ_HELPER_H
#define TPN2_GUARNIERIRAMIREZ_HELPER_H
# include "Empleado.h"
# include "Cadete.h"
# include "Gerente.h"
# include <iomanip>
# include <iostream>



Empleado* crearNuevoEmpleado() {
    string nombre;
    int diasAusente, tipoDeEmpleado;
    long cuit;
    do{
        cout<<"Que tipo de empleado desea crear? (1-Gerente 2-Cadete):";
        cin>>tipoDeEmpleado;
        if(tipoDeEmpleado!=1&&tipoDeEmpleado!=2)
            cout<<"Tipo incorrecto, intente nuevamente.."<<endl;
    } while (tipoDeEmpleado!=1&&tipoDeEmpleado!=2);

    cout << "ingrese el nombre del empleado:";
    cin >> nombre;
    cout << "Ingrese los dias ausentes durante el mes:";
    cin >> diasAusente;
    cout << "Ingrese el cuit del empleado:";
    cin >> cuit;

    Empleado* nuevoEmpleado = NULL;

    switch (tipoDeEmpleado) {
        case 1: {
            int calidadD;
            cout << "Ingrese la calidad del departamento obtenida durante el mes:";
            cin >> calidadD;
            nuevoEmpleado = new Gerente(nombre, "gerente", cuit, diasAusente, calidadD);
            break;
        }
        case 2: {
            int cantidadT;
            cout << "Ingrese la cantidad de tareas realizadas durante el mes:";
            cin >> cantidadT;
            nuevoEmpleado = new Cadete(nombre, "cadete", cuit, diasAusente, cantidadT);
            break;
        }
    }

    return nuevoEmpleado;
};

void imprimirEmpleado(Empleado *pEmpleado) {
    cout<<left<<setw(8)<<pEmpleado->getNombre()<<setw(10)<<pEmpleado->getTipoDeEmpleado()<<setw(8)<<pEmpleado->getDiasAustentes()
        <<setw(10)<<pEmpleado->getCuit()<<setw(10)<<pEmpleado->getSueldoNeto();


    if (dynamic_cast<Gerente *>(pEmpleado) != nullptr) {
        Gerente* gerente = dynamic_cast<Gerente*>(pEmpleado);
        cout<<left<<setw(6)<<gerente->getCalidadDpto()<<endl;
    }
    if (dynamic_cast<Cadete*>(pEmpleado) != nullptr) {
        Cadete* cadete = dynamic_cast<Cadete*>(pEmpleado);
          cout<<setw(6)<<left<<cadete->getcantidadTareas()<<endl;
    }
};

#endif //TPN2_GUARNIERIRAMIREZ_HELPER_H
