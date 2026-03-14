// ¿Qué significa RAII?

// RAII es la sigla de:

// Resource Acquisition Is Initialization
// (traducción: “La adquisición del recurso es inicialización”).

// Lo que quiere decir es:

// Cuando creás un objeto, tomas el recurso en el constructor.
// Cuando el objeto deja de existir, liberas el recurso en el destructor.

// En pocas palabras: “lo que se abre, se cierra solo”.

//================================================================================
//  ¿Qué es un recurso?

// Un “recurso” no es solo memoria. Puede ser:
// Memoria dinámica (new / delete)
// Archivos abiertos
// Conexiones a bases de datos
// Sockets de red
// Locks o mutex (para multithreading)

// ¿Por qué es útil?

// En C++ si abrís algo y pasa un error, lo normal sería olvidarte de cerrarlo. Eso genera fugas de memoria o recursos.

// Ejemplo peligroso:
int main(int argc, char const *argv[])
{
    FILE* f = fopen("datos.txt", "w");
    // si ocurre un error aquí...
    return 0; // nunca se cierra el archivo
    fclose(f);
}

// Idea clave
// RAII asegura:

// El recurso se abre en el constructor
// Se cierra en el destructor

// El ciclo de vida del recurso = ciclo de vida del objeto
// Es como tener un asistente automático que se encarga de cerrar todo por vos.

//================================================================================
// En C++ moderno, tenemos smart pointers, que son RAII para memoria:

#include <memory>

std::unique_ptr<int> ptr = std::make_unique<int>(10);
// no necesitamos delete

// Cuando ptr sale del scope, automáticamente libera la memoria.

//================================================================================
// Evita fugas de memoria o recursos

// Seguro ante errores o excepciones

// Código más limpio y simple