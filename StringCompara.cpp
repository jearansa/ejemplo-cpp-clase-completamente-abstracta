
#include "StringCompara.h"
#include <cstring>
#include <iostream>

using namespace std;

StringCompara::StringCompara(string d){
    this->dato = d;
}

bool StringCompara::mayorQue(Compara *c){
     /*
        Observa la conversi�n de tipos que hacemos aqu�,
        al estilo de la que realizamos en Java;
        La operaci�n que hace la conversi�n de tipos se
        denomina dynamic_cast<nombre_tipo>:
     */
     if (StringCompara * sc = dynamic_cast<StringCompara *>(c)){
        return (this->dato.compare (sc->dato) > 0);
     }
     return false;
}

bool StringCompara::menorQue(Compara *c){
     if (StringCompara * sc = dynamic_cast<StringCompara *>(c)){
        return (this->dato.compare (sc->dato) < 0);
     }
     return false;
}

bool StringCompara::igualQue(Compara *c){
     if (StringCompara * sc = dynamic_cast<StringCompara *>(c)){
        return (this->dato.compare (sc->dato) == 0);
     }
     return false;
}

void StringCompara::toString( ) {
     cout << this->dato << endl;
}
