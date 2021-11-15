
#ifndef STRINGCOMPARA_H
#define STRINGCOMPARA_H 1

#include <string>

#include"Compara.h"
#include"ToString.h"

using namespace std;

// Para decir que la clase StringCompara
// hereda de la clase completamente abstracta "Compara"
// usamos la notación tradicional de C++ para herencia,
// no hay notación especial

class StringCompara: public Compara, public ToString
{
    // Atributos; como no disponemos de clase "String", como en Java
    // usamos directamente un atributo del tipo básico "char []"
    public:
        string dato;

    //Constructor; recibe de parámetro un double
    public:
        StringCompara(string);

    // Debemos incluir todos los métodos de la clase completamente
    // abstracta "Compara"; si no, la clase "StringCompara"
    // sería abstracta
        bool mayorQue(Compara *);
        bool menorQue(Compara *);
        bool igualQue(Compara *);
        void toString ();
};

#endif
