#include <cassert>

#include "NoLineales/nonlinear.h"

int main() {
    int numeros[] = {2, 5, 8, 12, 16, 23, 30};

    assert(busquedaBinaria(numeros, 7, 2) == 0);
    assert(busquedaBinaria(numeros, 7, 12) == 3);
    assert(busquedaBinaria(numeros, 7, 30) == 6);
    assert(busquedaBinaria(numeros, 7, 9) == -1);
    assert(busquedaBinaria(numeros, 0, 2) == -1);

    return 0;
}
