#include <iostream>

#include "nonlinear.h"

using namespace std;

int busquedaBinaria(int numeros[], int cantidad, int buscado) {
    int izquierda = 0;
    int derecha = cantidad - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (numeros[medio] == buscado) {
            return medio;
        }

        if (numeros[medio] < buscado) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1;
}

void busquedaBinaria() {
    int numeros[] = {2, 5, 8, 12, 16, 23, 30};
    int buscado = 16;
    int cantidad = 7;
    int posicion = busquedaBinaria(numeros, cantidad, buscado);

    if (posicion == -1) {
        cout << "Busqueda binaria: " << buscado << " no esta en el arreglo\n";
    } else {
        cout << "Busqueda binaria: " << buscado
             << " esta en la posicion " << posicion << "\n";
    }
}
