
#include "IntegerCompara.h"
#include <iostream>

using namespace std;

IntegerCompara::IntegerCompara(int i){
    this->dato=i;
}

bool IntegerCompara::mayorQue(Compara *c){
     IntegerCompara * ic;
     /*
        Observa la conversi�n de tipos que hacemos aqu�,
        al estilo de la que realizamos en Java;
        La operaci�n que hace la conversi�n de tipos se
        denomina dynamic_cast<nombre_tipo>:
        Al parecer la siguiente operaci�n se puede poner en un condicional;
        m�s detalles en http://en.cppreference.com/w/cpp/language/dynamic_cast
     */
     if (IntegerCompara * ic = dynamic_cast<IntegerCompara *>(c)){
        return (this->dato < ic->dato);
     }
     return false;
}

bool IntegerCompara::menorQue(Compara *c){
     /*
        IntegerCompara * ic = (IntegerCompara *) c;
        Al parecer la siguiente operaci�n se puede poner en un condicional;
        m�s detalles en http://en.cppreference.com/w/cpp/language/dynamic_cast
     */
     if (IntegerCompara * ic = dynamic_cast<IntegerCompara *>(c)){
        return (this->dato < ic->dato);
     }
     return false;
}

bool IntegerCompara::igualQue(Compara *c){
     IntegerCompara * ic;
     /*
        Al parecer la siguiente operaci�n se puede poner en un condicional;
        m�s detalles en http://en.cppreference.com/w/cpp/language/dynamic_cast
     */
     if (IntegerCompara * ic = dynamic_cast<IntegerCompara *>(c)){
        return (this->dato == ic->dato);
     }
     return false;
}

void IntegerCompara::toString( ) {
     cout << this->dato << endl;
}
