#include <stdio.h>

int main()
{
  int i,j;
  int* p=&j;
  int* q;

  p = &i;

  p = &*&i;

  i = (int)p;

  //q = &p; // Error por que es un puntero a puntero.

  //*q = &j; // Error por que se quiere guardar la direccion de j en el valor del puntero q

  //i = (*&)j; // error expresion invalida.

  i = *&*&j;

  i = *p++ + *q;

  //i = (int*)1245678;//Error mal uso de casting, se quiere dar el tipo puntero a un valor numerico

    return 0;
}

