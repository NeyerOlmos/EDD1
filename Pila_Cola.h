//---------------------------------------------------------------------------

#ifndef Pila_ColaH

#include "Cola_Lista.h"
#define Pila_ColaH
//---------------------------------------------------------------------------

template <class T>
class PilaCola{
private:
 ColaLista<T>  cola ;

public:

PilaCola(){

}
void PilaCola::meter(T dato){

cola.Poner(dato);

}
T PilaCola::sacar(){

 Pila_Cola<T> PilaAux;
 while (!cola.Vacia()){
   PilaAux.meter(cola.Sacar());
 }
 int x = PilaAux.








}




} ;



#endif
