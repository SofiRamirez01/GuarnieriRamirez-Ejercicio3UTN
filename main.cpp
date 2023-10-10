#include "helper.h"
#include <iostream>

using namespace std;

int main() {

    Cadete c("Javier", "Cadete", 1213,2,10);
    c.setSueldoNeto();

    cout << "Sueldo de " << c.getNombre() << ": $" << c.getSueldoNeto() << endl;

    return 0;
}
