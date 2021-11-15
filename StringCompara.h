
#ifndef STRINGCOMPARA_H
#define STRINGCOMPARA_H 1

#include <string>

#include"Compara.h"
#include"ToString.h"

using namespace std;

// Para decir que la clase StringCompara
// hereda de la clase completamente abstracta "Compara"
// usamos la notaci�n tradicional de C++ para herencia,
// no hay notaci�n especial

class StringCompara: public Compara, public ToString
{
    // Atributos; como no disponemos de clase "String", como en Java
    // usamos directamente un atributo del tipo b�sico "char []"
    public:
        string dato;

    //Constructor; recibe de par�metro un double
    public:
        StringCompara(string);

    // Debemos incluir todos los m�todos de la clase completamente
    // abstracta "Compara"; si no, la clase "StringCompara"
    // ser�a abstracta
        bool mayorQue(Compara *);
        bool menorQue(Compara *);
        bool igualQue(Compara *);
        void toString ();
};

#endif
