
#ifndef INTEGERCOMPARA_H
#define INTEGERCOMPARA_H 1

#include"Compara.h"
#include"ToString.h"

/*
 Para decir que la clase IntegerCompara
 hereda de la clase completamente abstracta "Compara"
 usamos la notación tradicional de C++ para herencia,
 no hay notación especial
*/

class IntegerCompara: public Compara, public ToString
{
    /*
        Atributos; como no disponemos de clase "Integer", como en Java
        usamos directamente un atributo del tipo básico "int"
    */
    public:
        int dato;

    /* Constructor; recibe de parámetro un double */
    public:
        IntegerCompara(int d);

    /*
        Debemos incluir todos los métodos de la clase completamente
        abstracta "Compara"; si no, la clase "IntegerCompara"
        sería abstracta
    */
        bool mayorQue(Compara *);
        bool menorQue(Compara *);
        bool igualQue(Compara *);
        void toString ();
};

#endif
