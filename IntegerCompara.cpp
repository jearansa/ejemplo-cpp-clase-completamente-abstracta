
#include "IntegerCompara.h"
#include <iostream>

using namespace std;

IntegerCompara::IntegerCompara(int i){
    this->dato=i;
}

bool IntegerCompara::mayorQue(Compara *c){
     IntegerCompara * ic;
     /*
        Observa la conversión de tipos que hacemos aquí,
        al estilo de la que realizamos en Java;
        La operación que hace la conversión de tipos se
        denomina dynamic_cast<nombre_tipo>:
        la siguiente operación se puede poner en un condicional;
        más detalles en https://en.cppreference.com/w/cpp/language/dynamic_cast
     */
     if (IntegerCompara * ic = dynamic_cast<IntegerCompara *>(c)){
        return (this->dato > ic->dato);
     }
     return false;
}

bool IntegerCompara::menorQue(Compara *c){
     /*
        IntegerCompara * ic = (IntegerCompara *) c;
        La siguiente operación se puede poner en un condicional;
        más detalles en http://en.cppreference.com/w/cpp/language/dynamic_cast
     */
     if (IntegerCompara * ic = dynamic_cast<IntegerCompara *>(c)){
        return (this->dato < ic->dato);
     }
     return false;
}

bool IntegerCompara::igualQue(Compara *c){
     IntegerCompara * ic;
     /*
        La siguiente operación se puede poner en un condicional;
        más detalles en http://en.cppreference.com/w/cpp/language/dynamic_cast
     */
     if (IntegerCompara * ic = dynamic_cast<IntegerCompara *>(c)){
        return (this->dato == ic->dato);
     }
     return false;
}

string IntegerCompara::toString( ) {
   return to_string (this->dato);
}
