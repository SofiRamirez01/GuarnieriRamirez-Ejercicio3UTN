#include "helper.h"
#include <iostream>

using namespace std;

int main() {
    Empleado *c = crearNuevoEmpleado();
    Empleado *d = crearNuevoEmpleado();
    cout<<left<<setw(8)<<"NOMBRE"<<setw(10)<<"TIPO"<<setw(8)<<"D. AUS"<<setw(10)<<"CUIT"<<setw(10)<<"S.NETO"<<setw(6)<<"RESULT"<<endl;
    imprimirEmpleado(c);
    imprimirEmpleado(d);
    return 0;
}


