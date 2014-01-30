#include <iostream>
#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include "MagoOscuro.h"

using namespace std;

int main(){
   Curador curador1(100,10, 5);
   Tanque tanque1(120, 20);
   MagoOscuro mago(80,20);

   tanque1.imprimir();

   mago.atacar(&tanque1);

   tanque1.imprimir();

   mago.activarPoder();
   mago.atacar(&tanque1);

   tanque1.imprimir();

   mago.activarPoder();
   tanque1.activarPoder();
   mago.atacar(&tanque1);

   tanque1.imprimir();

    return 0;
}


