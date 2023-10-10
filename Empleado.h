//
// Created by sofiv on 9/10/2023.
//

#ifndef TPN2_GUARNIERIRAMIREZ_EMPLEADO_H
#define TPN2_GUARNIERIRAMIREZ_EMPLEADO_H
#include <iostream>

using namespace std;
class Empleado{
protected: //para que las clases hijas puedan heredar sus atributos
    string nombre, tipoDeEmpleado;
    int cuit, diasAusente;
    double sueldoNeto;
    //ReciboDeSueldo recibosDeSueldo;
public:
    Empleado(const string& n, const string& t, int cu, int da) : nombre(n), tipoDeEmpleado(t), cuit(cu), diasAusente(da){
        setSueldoNeto();
    }
    virtual void setSueldoNeto(){
        sueldoNeto=0;
    }
    int getDiasAustentes(){
        return diasAusente;
    }
    string getTipoDeEmpleado(){
        return tipoDeEmpleado;
    }
    string getNombre(){
        return nombre;
    }
    double getSueldoNeto()
    {
        return sueldoNeto;
    }
};
#endif //TPN2_GUARNIERIRAMIREZ_EMPLEADO_H
