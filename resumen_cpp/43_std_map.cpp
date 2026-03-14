/*
========================================
RESUMEN COMPLETO DE std::map
========================================

- Contenedor asociativo (clave -> valor)
- Claves únicas
- Ordenado automáticamente por la clave
- Implementado como árbol balanceado (O(log n))
*/

// std::map en C++ es equivalente a un dict de Python.

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    /*
    ========================================
    1) CREACIÓN
    ========================================
    */

    map<string, int> edades;   // clave: string, valor: int


    /*
    ========================================
    2) INSERTAR ELEMENTOS
    ========================================
    */

    // Forma 1: operator[]
    edades["Juan"] = 20;
    edades["Ana"] = 25;

    // Forma 2: insert
    edades.insert({"Carlos", 30});

    // Forma 3: emplace (más eficiente)
    edades.emplace("Pedro", 40);


    /*
    ========================================
    3) ACCEDER A ELEMENTOS
    ========================================
    */

    cout << "Edad de Juan: " << edades["Juan"] << endl;

    // IMPORTANTE:
    // Si la clave no existe, operator[] la crea con valor por defecto
    cout << "Edad de Luis (no existía): "
         << edades["Luis"] << endl; // se crea con 0


    /*
    ========================================
    4) RECORRER EL MAP
    ========================================
    */

    cout << "\nRecorrido con range-based for:\n";

    /*
    auto        → que el compilador deduzca el tipo
    &           → evitar copias
    const       → no modificar
    */

    for (const auto& par : edades) {
        cout << par.first << " -> " << par.second << endl;
        /*
        par.first   → "Juan"   (la clave)
        par.second  → 20       (el valor)
        */
    }

    // Con iteradores
    cout << "\nRecorrido con iteradores:\n";

    /*
    end() devuelve un iterador especial que apunta después del último elemento.
    begin() devuelve un iterador al primer elemento del std::map.
    */

    for (auto it = edades.begin(); it != edades.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
        /*
        it->first   = clave
        it->second  = valor

        it->algo
        Es lo mismo que:
        (*it).algo
        */
    }


    /*
    ========================================
    5) BUSCAR ELEMENTOS
    ========================================
    */

    auto it = edades.find("Ana");
    /*
    🔹 un iterador al elemento si lo encuentra
    🔹 edades.end() si NO lo encuentra
    */

    if (it != edades.end()) {
        cout << "\nAna encontrada: "
             << it->second << endl;
    }


    /*
    ========================================
    6) VERIFICAR SI EXISTE UNA CLAVE
    ========================================
    */

    /*
    count retorna:
    0  → no existe
    1  → existe
    */

    if (edades.count("Carlos") > 0) {
        cout << "Carlos existe\n";
    }


    /*
    ========================================
    7) ELIMINAR ELEMENTOS
    ========================================
    */

    edades.erase("Luis");  // elimina por clave

    // buscando y eliminar (usando iterador)
    auto it2 = edades.find("Pedro");
    if (it2 != edades.end()) {
        edades.erase(it2);
    }


    /*
    ========================================
    8) TAMAÑO Y ESTADO
    ========================================
    */

    cout << "\nSize: " << edades.size() << endl;

    // empty devuelve true si esta vacio
    if (edades.empty()) {
        cout << "El map está vacío\n";
    }


    /*
    ========================================
    9) LIMPIAR TODO
    ========================================
    */

    edades.clear();


    /*
    ========================================
    10) MAP CON CLAVE INT
    ========================================
    */

    map<int, string> numeros;

    numeros[1] = "Uno";
    numeros[2] = "Dos";
    numeros[3] = "Tres";

    for (const auto& par : numeros) {
        cout << par.first << " -> "
             << par.second << endl;
    }


    /*
    ========================================
    11) ORDEN AUTOMÁTICO
    ========================================

    std::map SIEMPRE ordena por clave.
    */

    map<int, string> prueba;

    prueba[10] = "Diez";
    prueba[2]  = "Dos";
    prueba[7]  = "Siete";

    cout << "\nOrdenado automáticamente:\n";

    for (const auto& p : prueba) {
        cout << p.first << " ";
    }
    // salida: 2 7 10


    /*
    ========================================
    COMPLEJIDAD
    ========================================

    insert  -> O(log n)
    find    -> O(log n)
    erase   -> O(log n)
    []      -> O(log n)

    O = orden de crecimiento

    vector   → mirar uno por uno → O(n)

    map      → árbol → bajar niveles → O(log n)
    */

}