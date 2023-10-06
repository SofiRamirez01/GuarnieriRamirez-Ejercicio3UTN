//
// Created by River on 6/10/2023.
//

#ifndef GUARNIERIRAMIREZ_EJERCICIO3UTN_EMPLEADO_H
#define GUARNIERIRAMIREZ_EJERCICIO3UTN_EMPLEADO_H
class Empleado{
protected: //para que las clases hijas puedan heredar sus atributos
    string nombre, tipoDeEmpleado;
    int idEmpleado, diasAusente;
    double sueldoNeto;
    //ReciboDeSueldo recibosDeSueldo;
public:
    Empleado(const string& n, const string& t, int id, int da) : nombre(n), tipoDeEmpleado(t), idEmpleado(id), diasAusente(da),{}
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
};

#endif //GUARNIERIRAMIREZ_EJERCICIO3UTN_EMPLEADO_H
