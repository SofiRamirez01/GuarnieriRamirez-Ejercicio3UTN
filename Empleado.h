//
// Created by sofiv on 9/10/2023.
//

#ifndef TPN2_GUARNIERIRAMIREZ_EMPLEADO_H
#define TPN2_GUARNIERIRAMIREZ_EMPLEADO_H
#include <iostream>
#include "Helper.h"
#include "ReciboDeSueldo.h"
using namespace std;
class Empleado{
protected: //para que las clases hijas puedan heredar sus atributos
    string nombre, tipoDeEmpleado;
    int diasAusente;
    long cuit;
    double sueldoNeto;
    ReciboDeSueldo recibosDeSueldo;
public:
    Empleado(const string& n, const string& t, long cu, int da) : nombre(n), tipoDeEmpleado(t), cuit(cu), diasAusente(da){
        setSueldoNeto();
    }
    virtual void setSueldoNeto(){
        sueldoNeto=0;
    }
    int getDiasAustentes() const{
        return diasAusente;
    }
    string getTipoDeEmpleado() const{
        return tipoDeEmpleado;
    }
    string getNombre() const{
        return nombre;
    }
    double getSueldoNeto() const{
        return sueldoNeto;

    }
    long getCuit(){
        return cuit;
    }
    ReciboDeSueldo getRecibo()
    {
        return recibosDeSueldo;
    }
};
#endif //TPN2_GUARNIERIRAMIREZ_EMPLEADO_H
