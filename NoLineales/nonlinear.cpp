#include <iostream>

#include "nonlinear.h"

using namespace std;

void busquedaBinaria() {
    int numeros[] = {2, 5, 8, 12, 16, 23, 30};
    int buscado = 16;
    int izquierda = 0;
    int derecha = 6;
    bool encontrado = false;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (numeros[medio] == buscado) {
            cout << "Busqueda binaria: " << buscado
                      << " esta en la posicion " << medio << "\n";
            encontrado = true;
            break;
        }

        if (numeros[medio] < buscado) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    if (!encontrado) {
        cout << "Busqueda binaria: " << buscado << " no esta en el arreglo\n";
    }
}
