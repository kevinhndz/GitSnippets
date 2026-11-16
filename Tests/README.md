# Pruebas

- `test_lineales.cpp` contiene las pruebas de los algoritmos en `Lineales/`.
- `test_no_lineales.cpp` contiene las pruebas de los algoritmos en `NoLineales/`.

Cada archivo tiene `#include <cassert>` una sola vez, arriba. Para agregar una
prueba, escribe nuevos `assert` dentro de su `main()`. El CI ejecuta ambos
archivos cuando se abre o actualiza un PR hacia `main`.
