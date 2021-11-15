
#ifndef COMPARA_H
#define COMPARA_H 1

/*
 La cabecera de la clase no cambia,
 como en el caso de las clases abstractas en C++
 C++ no dispone de estructuras específicas para
 clases abstractas o completamente abstractas
 */

class Compara
{
      /* La clase completamente abstracta carece de atributos propios
       y de constructores; la finalidad de la misma no es
       que declaremos objetos, sino declarar una colección de métodos */
      public:
             /*
              Todos los métodos de la clase completamente abstracta
              deben ser declarados como "virtual" y "=0";
              deben ser enlazados de manera dinámica,
              y además su definición es "vacía",
              son abstractos y no habrá fichero "*.cpp"
             */

             /*
                La clase completamente abstracta "Compara" se puede
                usar como parámetro de métodos; observa que hacemos
                uso de punteros, no de objetos, para evitar el
                constructor de copia y el paso por valor,
                que eliminaría el polimorfismo
             */
             virtual bool mayorQue (Compara *) = 0;
             virtual bool menorQue (Compara *) = 0;
             virtual bool igualQue (Compara *) = 0;
};

#endif
