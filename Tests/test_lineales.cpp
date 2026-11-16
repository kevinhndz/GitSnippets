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

    int numerosKevin[] = {2, 7, 11, 15};
    int resultadoKevin[2];
    twoSum(numerosKevin, 4, 9, resultadoKevin);
    assert(resultadoKevin[0] == 0);
    assert(resultadoKevin[1] == 1);

    int sinSolucionKevin[] = {1, 2, 3};
    twoSum(sinSolucionKevin, 3, 8, resultadoKevin);
    assert(resultadoKevin[0] == -1);
    assert(resultadoKevin[1] == -1);

    int repetidosKevin[] = {3, 3};
    twoSum(repetidosKevin, 2, 6, resultadoKevin);
    assert(resultadoKevin[0] == 0);
    assert(resultadoKevin[1] == 1);

    return 0;
}
