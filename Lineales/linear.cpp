#include <iostream>
#include <string>
#include "linear.h"

using namespace std;

int buscarNombreLineal(string nombres[], int cantidad, string buscado) {
    for (int i = 0; i < cantidad; i++) {
        if (nombres[i] == buscado) {
            return i;
        }
    }

    return -1;
}

void buscarNombreLineal() {
    string nombres[] = {"Ana", "Kevin", "Moises", "Karen"};
    string buscado = "Kevin";
    int cantidad = 4;
    int posicion = buscarNombreLineal(nombres, cantidad, buscado);

    if (posicion == -1) {
        cout << "Busqueda lineal: " << buscado << " no esta en el arreglo\n";
    } else {
        cout << "Busqueda lineal: " << buscado
             << " esta en la posicion " << posicion << "\n";
    }
}
