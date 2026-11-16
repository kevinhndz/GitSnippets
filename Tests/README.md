# Pruebas

`test_busquedas.cpp` prueba las dos busquedas que ya existen. Cada `assert` compara
el resultado real de una funcion con el resultado esperado. Si no coinciden,
la prueba falla y el CI aparece en rojo.

Para agregar otro algoritmo, crea un archivo llamado `test_nombre.cpp` en esta
carpeta. Incluye sus casos de prueba y una funcion `main()` que los llame. El
workflow compila y ejecuta automaticamente todos los archivos `test_*.cpp`.
Las funciones de los algoritmos van en `Lineales/` o `NoLineales/`; sus archivos
`.cpp` no deben tener otra funcion `main()`.

Para probar las busquedas en tu computadora, desde la carpeta del proyecto:

```bash
g++ -std=c++17 -I. Tests/test_busquedas.cpp Lineales/*.cpp NoLineales/*.cpp -o /tmp/test_busquedas
/tmp/test_busquedas
```
