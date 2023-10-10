#include "helper.h"
#include <iostream>

using namespace std;

int main() {

    Cadete c("Javier", "Cadete", 1213,2,10);
    c.setSueldoNeto();

    cout << "Sueldo de " << c.getNombre() << ": $" << c.getSueldoNeto() << "Su cantidad de tareas es:"<<c.getcantidadTareas()<<endl;

    return 0;
}
