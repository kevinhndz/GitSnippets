#include <cassert>
#include <iostream>
#include <string>

#include "Lineales/linear.h"
#include "NoLineales/nonlinear.h"

using namespace std;

void probarBusquedaLineal() {
    string nombres[] = {"Ana", "Kevin", "Moises", "Karen"};

    assert(buscarNombreLineal(nombres, 4, "Ana") == 0);
    assert(buscarNombreLineal(nombres, 4, "Kevin") == 1);
    assert(buscarNombreLineal(nombres, 4, "Karen") == 3);
    assert(buscarNombreLineal(nombres, 4, "Luis") == -1);
    assert(buscarNombreLineal(nombres, 0, "Ana") == -1);
}

void probarBusquedaBinaria() {
    int numeros[] = {2, 5, 8, 12, 16, 23, 30};

    assert(busquedaBinaria(numeros, 7, 2) == 0);
    assert(busquedaBinaria(numeros, 7, 12) == 3);
    assert(busquedaBinaria(numeros, 7, 30) == 6);
    assert(busquedaBinaria(numeros, 7, 9) == -1);
    assert(busquedaBinaria(numeros, 0, 2) == -1);
}

int main() {
    probarBusquedaLineal();
    probarBusquedaBinaria();

    cout << "Todas las pruebas de busqueda pasaron.\n";
    return 0;
}
