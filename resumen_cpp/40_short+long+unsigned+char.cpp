// 1. short
// Es una versión más pequeña de int.

// Generalmente ocupa 2 bytes (16 bits).

// Rango típico: de -32,768 a 32,767 (cuando es short int).

// Se usa cuando queremos ahorrar memoria y sabemos que los valores serán pequeños.

// Ejemplo:
short edad = 25;   // suficiente para edades humanas

// El estándar de C++ no obliga exactamente 2 bytes, solo garantiza que:
// sizeof(short) <= sizeof(int)

//============================================================================================================
// 2. long
// Es una versión más grande de int.

// Generalmente ocupa 4 bytes (32 bits), aunque en algunos sistemas puede ser más.

// Rango típico: de -2,147,483,648 a 2,147,483,647.

// Se usa cuando necesitamos manejar números más grandes que los que caben en un int.

// Ejemplo:
long poblacion = 45000000;   // población de un país

//============================================================================================================
// 3. Variantes con unsigned

// unsigned no aumenta la memoria,
// solo cambia el rango.

// unsigned short → solo números positivos (0 a 65,535).
// unsigned long → solo positivos (0 a 4,294,967,295).

//============================================================================================================
// 4. long long
// Es una versión aún más grande que long.

// Garantiza al menos 64 bits (8 bytes).

// Rango típico:
// -9,223,372,036,854,775,808
//  a
//  9,223,372,036,854,775,807

// Se usa cuando necesitamos números muy grandes.

// Ejemplo:
long long numero_grande = 9000000000000;


// También existe:
// unsigned long long
// Solo positivos (0 a 18,446,744,073,709,551,615)

// sizeof(short) ≤ sizeof(int) ≤ sizeof(long) ≤ sizeof(long long)

//============================================================================================================
// 5.char
// char normal
// Ocupa 1 byte (8 bits).

// Puede representar un carácter como 'A', '%', '7'.

// El detalle es que no está definido si es signed o unsigned, depende del compilador y la plataforma.

// En algunos compiladores, char se comporta como signed char (valores -128 a 127).

// En otros, como unsigned char (valores 0 a 255).

// 👉 Por eso, cuando necesitas estar seguro, se recomienda usar explícitamente signed char o unsigned char.


// 2. signed char
// Rango: -128 a 127.

// Se usa cuando quieres representar números pequeños con signo.

// Ejemplo:

// cpp
// signed char sc = -50;   // válido

// 3. unsigned char
// Rango: 0 a 255.

// Se usa para valores positivos, por ejemplo códigos ASCII extendidos o datos binarios.

// Ejemplo:

// cpp
// unsigned char uc = 200;   // válido

// 4. Otros tipos de carácter (para Unicode)
// Cuando necesitas representar caracteres más complejos (como letras chinas, emojis, etc.), char no alcanza. Ahí entran:

// wchar_t   // tamaño depende del sistema,En Windows wchar_t = 2 bytes
// char16_t  // 16 bits exactos (UTF-16)
// char32_t  // 32 bits exactos (UTF-32)

// Ejemplo:

// cpp
// char16_t letra = u'ñ';   // carácter en UTF-16
// char32_t emoji = U'😀';  // carácter en UTF-32

// Para imprimir, usamos wcout en lugar de cout.

// sizeof(char) == 1   // SIEMPRE

// Pero:

// sizeof(int)

// puede variar.