//---------------------------------------------------------------------------

#ifndef Cola_ListaH
#define Cola_ListaH

#include "Lista_Vector.h"
//---------------------------------------------------------------------------

template <class T>
class ColaLista{

private:
	 ListaVector<T> L;


public:

 ColaLista(){
}

bool ColaLista::Vacia(){

  return L.Vacia();
}

void ColaLista::Poner(T Elemento){
   if (!L.Vacia()) {


   L.Inserta(L.Fin(),Elemento);

   L.Modifica(L.Anterior(L.Fin()),L.Recupera(L.Fin()));
   L.Modifica(L.Fin(),Elemento);
   }else{

   L.Inserta(1,Elemento);

   }


}

T ColaLista::Sacar(){
T x;
 if (!L.Vacia()) {

 x=L.Recupera(L.Primero());
 L.Suprime(L.Primero());
 }else{

 throw new Exception("Error: Cola VAcia");
 }
 return x;
}



int ColaLista::Primero(){
  if (L.Vacia()) {
			   throw new Exception("Error: Cola Vacia");
  }
  return L.Primero();
}


void ColaLista::Mostrar(TStringGrid *t){
 L.MostrarListaEnStringGrid(t);

}



};



#endif
