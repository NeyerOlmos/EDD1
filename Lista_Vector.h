//---------------------------------------------------------------------------

#ifndef Lista_VectorH
#define Lista_VectorH


#include <Vcl.StdCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <except.h>
#include <Vcl.Controls.hpp>
//---------------------------------------------------------------------------
const  MaxL=100;

 template <class T>
 class ListaVector{

   private: //atributos.

  /* struct Enteros{
   }V[50];*/

   T Elemento[MaxL];
   int longitudL;

   public:  //metodos funciones y procedimientos.
	  /* void Crear();
	   int Fin();
	   int Primero();
	   int Siguiente(int direccion);
	   int Anterior(int direccion);
	   bool Vacia();
	   int Recupera(int direccion);
	   int Recupera_dir(int elemento);
	   int Longitud();
	   void Inserta(int direccion,int elemento);
	   void Suprime(int direccion);
	   void Modifica(int direccion,int elemento);

	   void MostrarListaEnStringGrid(TStringGrid *t);  */


		ListaVector(){
	  longitudL=0;
	  }


	int ListaVector::Fin(){
	if (Vacia()) {

	throw new Exception("Lista Vacia");

		}else {

		 return longitudL;

		 }

	}


	int ListaVector::Primero(){
	 if (!Vacia()) {
		 return 1;
	 }else {
		throw new Exception("Lista Vacia");
	 }

	}


	int ListaVector::Siguiente(int direccion){
		 if (Vacia()) {
			 throw new Exception("Lista Vacia");
		 }else {
			 if (direccion==longitudL) {
				  throw new Exception("Error: no hay una direccion siguiente a la que envio");

			 }else{

				  return direccion+1;
				}

			}

	}


	int ListaVector::Anterior(int direccion){
		if (Vacia()) {
			 throw new Exception("Lista Vacia");
		 }else {
			 if (direccion==1) {
				  throw new Exception("Error: no hay una direccion anterior a la que envio");

			 }else{

				  return direccion-1;
				}

			}


	}


	bool ListaVector::Vacia(){
		return longitudL==0;
	}


	T ListaVector::Recupera(int direccion){
	   if (Vacia()) {
			throw new Exception("Error: no se puede recuperar el elemento 'Lista Vacia'");
	   }else{
			if (!((direccion>=1)&&(direccion<=longitudL))) {
			 throw new Exception("Error: no se puede recuperar el elemento de esa direccion 'direccion erronea'");

			}else{
				return Elemento[direccion-1] ;

			   }

		   }
	}



	int ListaVector::Longitud(){
	return longitudL;

	}



	void ListaVector::Inserta(int direccion,T elemento){

   if (!Vacia()) {



		if (longitudL==MaxL) {
		   throw new Exception("Error: no se puede insertar 'Lista LLena'");
	   }else if (!((direccion>=1)&&(direccion<=longitudL))) {
		   throw new Exception("Error: no se puede insertar 'Direccion incorrecta'");
		}
	 }


	   int i=longitudL;
	   while (i>=direccion){
	   Elemento[i]=Elemento[i-1];
	   i=i-1;
	   }
	   Elemento[direccion-1]=elemento;

	   longitudL=longitudL+1;

}




	void ListaVector::Suprime(int direccion){
	   if (longitudL==0) {
		   throw new Exception("Error: no se puede suprimir 'Lista Vacia'");
	   }
		if (!((direccion>=1)&&(direccion<=longitudL))) {
		   throw new Exception("Error:no se puede suprimir 'Direccion incorrecta'");
		   }

	   int i=direccion;
		while (i<=longitudL){
		 Elemento[i-1]=Elemento[i];
		 i=i+1;
		}
		longitudL=longitudL-1;



	}

	void ListaVector::Modifica(int direccion,T elemento){
	   if (longitudL==0) {
		   throw new Exception("Lista Vacia");
	   }

	   if (!((direccion>=1)&&(direccion<=longitudL))) {
		   throw new Exception("Error de Direccion");
		}

		Elemento[direccion-1]=elemento;
	}





	int ListaVector::Recupera_dir(T elemento){

	   int i=0;
	bool r=false;
	while (i<Longitud()&& r==false){

	  T q=Recupera(i+1);

	   if (q==elemento) {
		 r=true;
	   }
	   i++;

	  }


	 return i;


	}

	void ListaVector::MostrarListaEnStringGrid(TStringGrid *t){
	 t->ColCount=longitudL;
	 t->Width=longitudL*40;
	 int i;
	 for (i = 0; i < longitudL; i++) {
		 t->Cells[i][0]=Elemento[i];
	 }

	}
 };
#endif
