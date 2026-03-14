/*
    =====================================
            std::string y UTF-8
    =====================================

    IMPORTANTE:
    std::string NO entiende caracteres.
    Solo almacena BYTES.

    UTF-8 es una codificación donde:
        'A'  -> 1 byte
        'á'  -> 2 bytes
        '€'  -> 3 bytes
        '😀' -> 4 bytes

    std::string::size() cuenta BYTES, no caracteres visuales.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "===== UTF-8 BASICO =====\n";

    string s1 = "A";
    cout << "A size: " << s1.size() << endl;  // 1 (en ascii)

    string s2 = "á";
    cout << "á size: " << s2.size() << endl;  // 2 (en UTF-8)

    string s3 = "€";
    cout << "á size: " << s3.size() << endl;  // 3 (en UTF-8)

    string s4 = "😀";
    cout << "😀 size: " << s4.size() << endl;  // 4 (en UTF-8)

    cout << "\n===== EJEMPLO MIXTO =====\n";

    string texto = "Aá😀";

    cout << "Contenido: " << texto << endl;
    cout << "Size (bytes): " << texto.size() << endl;

    /*
        Visualmente hay 3 caracteres:
        A
        á
        😀

        Pero size() devuelve 1 + 2 + 4 = 7 bytes.
    */

    cout << "\n===== CUIDADO CON [] =====\n";

    /*
    IMPORTANTE:

    std::string guarda BYTES, no caracteres.

    "Aá😀" en UTF-8 ocupa:

    A  -> 1 byte
    á  -> 2 bytes
    😀 -> 4 bytes

    Total: 7 bytes

    Por eso texto.size() devuelve 7.
    */

    for (size_t i = 0; i < texto.size(); i++) {

        /*
        size_t i = 0          -> empieza en el primer byte
        i < texto.size()      -> hasta el último byte
        i++                   -> avanza 1 BYTE por vuelta
        texto[i]              -> accede a UN BYTE (no a un carácter)
        */

        cout << "Byte " << i << ": " << (int)(unsigned char)texto[i] << endl;
    }

    /*
        texto[i] accede a BYTES individuales.
        Puede romper caracteres si los tratás como letras.
    */


    //====================================================================================
    //====================================================================================
    // ascii 7 bit (0 - 127)
    // char 8 bit (0 - 255)

    char c = 225;
    cout << c; // ß

    return 0;
}