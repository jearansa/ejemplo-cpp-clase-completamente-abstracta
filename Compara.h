
#ifndef COMPARA_H
#define COMPARA_H 1

/*
 La cabecera de la clase no cambia,
 como en el caso de las clases abstractas en C++
 C++ no dispone de estructuras espec�ficas para
 clases abstractas o completamente abstractas
 */

class Compara
{
      /* La clase completamente abstracta carece de atributos propios
       y de constructores; la finalidad de la misma no es
       que declaremos objetos, sino declarar una colecci�n de m�todos */
      public:
             /*
              Todos los m�todos de la clase completamente abstracta
              deben ser declarados como "virtual" y "=0";
              deben ser enlazados de manera din�mica,
              y adem�s su definici�n es "vac�a",
              son abstractos y no habr� fichero "*.cpp"
             */

             /*
                La clase completamente abstracta "Compara" se puede
                usar como par�metro de m�todos; observa que hacemos
                uso de punteros, no de objetos, para evitar el
                constructor de copia y el paso por valor,
                que eliminar�a el polimorfismo
             */
             virtual bool mayorQue (Compara *) = 0;
             virtual bool menorQue (Compara *) = 0;
             virtual bool igualQue (Compara *) = 0;
};

#endif
