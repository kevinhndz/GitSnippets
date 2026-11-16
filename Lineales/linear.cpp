#include <iostream>
#include <string>
#include "linear.h"

using namespace std;

void buscarNombreLineal() {
    string nombres[] = {"Ana", "Kevin", "Moises", "Karen"};
    string buscado = "Kevin";
    int cantidad = 4;
    bool encontrado = false;

    for (int i = 0; i < cantidad; i++) {
        if (nombres[i] == buscado) {
            cout << "Busqueda lineal: " << buscado
                      << " esta en la posicion " << i << "\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Busqueda lineal: " << buscado << " no esta en el arreglo\n";
    }
}
