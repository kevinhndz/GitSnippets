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

    int desordenadosMoises[] = {3, 1, 2};
    ordenarBurbuja(desordenadosMoises, 3);
    assert(desordenadosMoises[0] == 1);
    assert(desordenadosMoises[1] == 2);
    assert(desordenadosMoises[2] == 3);

    int repetidosMoises[] = {2, 1, 2};
    ordenarBurbuja(repetidosMoises, 3);
    assert(repetidosMoises[0] == 1);
    assert(repetidosMoises[1] == 2);
    assert(repetidosMoises[2] == 2);

    int unNumeroMoises[] = {5};
    ordenarBurbuja(unNumeroMoises, 1);
    assert(unNumeroMoises[0] == 5);


    return 0;
}
