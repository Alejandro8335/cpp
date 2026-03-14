#include <iostream>

using namespace std;

int main(){

    // & obtiene la dirección
    // * declara puntero o desreferencia

    // * en declaración → indica que la variable es un puntero.
    // * en uso → accede al valor apuntado (desreferencia).

    string nombre = "ale";
    string *p_nombre = &nombre;

    cout << "Direccion: " << p_nombre << "\n"; // ejemplo: 0xa6887ff790
    cout << "Valor: " << *p_nombre << "\n"; // ale

    // Modificar mediante puntero
    *p_nombre = "juan";
    cout << "Nuevo valor: " << nombre << "\n"; // juan

    cout << "----------------\n";

    int nums[5] = {1,2,3,4,5};

    // El nombre del array se convierte (decay) en puntero al primer elemento
    int *p_nums = nums;  // equivalente a &nums[0]

    cout << "Direccion nums: " << nums << "\n";
    cout << "Direccion &nums[0]: " << &nums[0] << "\n";
    cout << "Direccion &nums: " << &nums << "\n";

    cout << "----------------\n";

    // Desreferencia básica:
    // *p_nums accede al valor apuntado por p_nums, es decir, nums[0]
    cout << "Primer elemento (*p_nums): " << *p_nums << "\n"; // imprime 1

    // Aritmética de punteros:
    // p_nums + 2 avanza 2 posiciones en memoria (2 * sizeof(int) bytes)
    // *(p_nums + 2) accede al valor en esa dirección, equivalente a nums[2]
    cout << "Tercer elemento (*(p_nums + 2)): " << *(p_nums + 2) << "\n"; // imprime 3

    // El operador [] es azúcar sintáctica:
    // p_nums[2] se traduce internamente como *(p_nums + 2)
    cout << "Tercer elemento (p_nums[2]): " << p_nums[2] << "\n"; // imprime 3

    cout << "----------------\n";

    // sizeof aplicado a un arreglo devuelve el tamaño total en bytes:
    // aquí son 5 enteros → 5 * sizeof(int)
    cout << "sizeof(nums): " << sizeof(nums) << "\n";

    // sizeof aplicado a un puntero devuelve el tamaño del puntero en sí,
    // no del bloque al que apunta (normalmente 4 u 8 bytes según la arquitectura)
    cout << "sizeof(p_nums): " << sizeof(p_nums) << "\n";


    // int → ocupa el espacio necesario para guardar un número entero (por ejemplo, 4 bytes en la mayoría de compiladores modernos).
    // int* (puntero a entero) → ocupa el espacio necesario para guardar una dirección de memoria.

    int a = 5;       // 'a' es un entero, ocupa sizeof(int) bytes (ej. 4)
    int *p = &a;     // 'p' es un puntero, ocupa sizeof(int*) bytes (ej. 8 en 64 bits)

    // a → almacena directamente el valor 5.
    // p → almacena la dirección de memoria donde está guardado a.

    // entonces p ocupa lo mismo que a pero no lo mismo que 5
    return 0;
}