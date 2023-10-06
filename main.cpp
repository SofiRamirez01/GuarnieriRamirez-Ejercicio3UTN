//
// Created by River on 6/10/2023.
//

#include "helper.h"
#include <iostream>

using namespace std;

int main() {

    Cadete c("Javier", "Gerente", 1213,2,10);
    c.setSueldoNeto();

    cout << "Sueldo de " << c.getNombre() << ": $" << c.getSueldoNeto() << endl;
    return 0;
}
