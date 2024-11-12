
#include <iostream>
#include "StringCompara.h"
#include "IntegerCompara.h"
#include <Windows.h>

using namespace std;

int main (){
	SetConsoleOutputCP(CP_UTF8);


	/*
       Las clases completamente abstractas pueden ser usadas,
       al igual que las clases abstractas, para:

       1. Declarar herencias desde otras clases (StringCompara.h,
       IntegerCompara.h)

       2. Declarar objetos de la misma,
       que serán construidos por medio de alguna de las clases
       completamente definidas que heredan de la misma:

       Compara * d1 = new IntegerCompara (5), * s1 = new StringCompara ("hola");

       3. Declarar estructuras genéricas de los mismos;
       atención, porque también podemos construir el array
       por medio de la "interface", aunque la misma no
       tenga constructores propios;
   */

    /*
       Es importante el uso de punteros para que los métodos
       "mayorQue (Compara *): bool", "menorQue (Compara *): bool" ...
       se comporten de modo polimorfo
    */

    ToString * v [50];
    ToString * v1 [50];


	/*
      En el array v1 podemos incluir objetos de cualquier
      clase que herede de la clase completamente abstracta "Compara *"
      de manera indistinta
    */

    for (int i = 0; i < 50; i = i + 1){
     ToString * i1 = new IntegerCompara (i * i);
     v [i] = i1;
     /* Construimos una cadena a partir del int "i";
	  La función adecuada es "sprintf" */
	 // char buffer [50];
	 // sprintf (buffer, "%d%d%d", i, i, i);
     // to_string(i).append (to_string (i)).append (to_string (i));
	 ToString * sc =
		new StringCompara (to_string(i).append (to_string (i)).append (to_string (i)));
	 v1 [i] = sc;
	}

	/*
     Mostramos las componentes del array gracias al método
     "toString(): void" que pertenecía a la clase "ToString"
    */

    for (int i = 0; i < 50; i++){
     cout << "El elemento en la posición " << i;
     cout << " del vector de IntegerCompara es ";
     cout << v [i]->toString() << endl;

     cout << "El elemento en la posición " << i;
     cout << " del vector de StringCompara es ";
     cout << v1 [i]->toString() << endl;
    }

    return 0;
}
