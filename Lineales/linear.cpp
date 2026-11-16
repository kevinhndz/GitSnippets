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


void twoSum(int numeros[], int cantidad, int objetivo, int resultado[]) {
    resultado[0] = -1;
    resultado[1] = -1;

    for (int i = 0; i < cantidad; i++) {
        for (int j = i + 1; j < cantidad; j++) {
            if (numeros[i] + numeros[j] == objetivo) {
                resultado[0] = i;
                resultado[1] = j;
                return;
            }
        }
    }
}

void ordenarBurbuja(int numeros[], int cantidad) {
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temporal = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temporal;
            }
        }
    }

}

bool esPalindromo(char palabra[]) {
    int longitud = 0;

    while (palabra[longitud] != '\0') {
        longitud++;
    }

    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            return false;
        }
    }

    return true;
}

