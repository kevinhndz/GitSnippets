#include <cassert>
#include <string>

#include "Lineales/linear.h"

using namespace std;

void twoSum(int numeros[], int cantidad, int objetivo, int resultado[]);
void ordenarBurbuja(int numeros[], int cantidad);

int main() {
    string nombres[] = {"Ana", "Kevin", "Moises", "Karen"};

    assert(buscarNombreLineal(nombres, 4, "Ana") == 0);
    assert(buscarNombreLineal(nombres, 4, "Kevin") == 1);
    assert(buscarNombreLineal(nombres, 4, "Karen") == 3);
    assert(buscarNombreLineal(nombres, 4, "Luis") == -1);
    assert(buscarNombreLineal(nombres, 0, "Ana") == -1);

    // AGREGAR_PRUEBA_AQUI

    return 0;
}
