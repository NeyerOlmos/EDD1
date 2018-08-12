//---------------------------------------------------------------------------

#ifndef Pila_ListaH
#define Pila_ListaH
//---------------------------------------------------------------------------
#include "Lista_Vector.h"

//-------------------------------

template <class T>
class PilaLista{

private :
	ListaVector<T> L;


public:
	 PilaLista(){}


	void PilaLista::Meter(T Elemento){
	 L.Inserta(1,Elemento);
		 }


	T PilaLista::Sacar(){
	  T x=L.Recupera(1);
	   L.Suprime(1);
	   return x;
	}

	bool PilaLista::Vacia(){

		  return L.Vacia();
	}
	T PilaLista::Cima(){

		return L.Recupera(1);
	}

	void PilaLista::MostrarPilaLista(TStringGrid *t){

	L.MostrarListaEnStringGrid(t);
	}


	void PilaLista::Mostrar(int x,int y,TCanvas *t){

	//----------------------------
	t->Brush->Color=clWhite;
	t->Pen->Color=clWhite;
	t->Rectangle(0,0,1000,1000);
	t->Pen->Color=clBlue;
	//------------------------------------------------------------------
	   int q=L.Longitud();
	   int c=0;
	  PilaLista Aux;
	//  Aux.Crear();
	   for (int i = 0; i < q ; i++) {
		   T a=Sacar();
		   Aux.Meter(a);

		   if (abs(a) >100000) {
			t->TextOutW(x+35,y+25+(c*20),IntToStr(a));
		   }else{
		   t->TextOutW(x+55,y+25+(c*20),IntToStr(a));
		   }
		   c=c+1;

	   }

	   for (int i = 0; i < q ; i++) {
		  int a=Aux.Sacar();

		   Meter(a);

	   }
	//------------------------------------------------------------------
	t->MoveTo(x,y);
	t->LineTo(x+30,y);



	t->LineTo(x+30,y+20+(c*20));

	t->LineTo(x+100,y+20+(c*20));


	t->LineTo(x+100,y);

	t->LineTo(x+130,y);
	for (int i = 0; i < c; i++) {
	  t->MoveTo(x+30,y+20+(i*20));

	  t->LineTo(x+100,y+20+(i*20));
	}

	}

};



template <>
class PilaLista<String>{

private :
	ListaVector<String> L;


public:
	 PilaLista(){}


	void PilaLista::Meter(String Elemento){
	 L.Inserta(1,Elemento);
		 }


	String PilaLista::Sacar(){
	  String x=L.Recupera(1);
	   L.Suprime(1);
	   return x;
	}

	bool PilaLista::Vacia(){

		  return L.Vacia();
	}
	String PilaLista::Cima(){

		return L.Recupera(1);
	}

	void PilaLista::MostrarPilaLista(TStringGrid *t){

	L.MostrarListaEnStringGrid(t);
	}


	void PilaLista::Mostrar(int x,int y,TCanvas *t){

	//----------------------------
	t->Brush->Color=clWhite;
	t->Pen->Color=clWhite;
	t->Rectangle(0,0,1000,1000);
	t->Pen->Color=clBlue;
	//------------------------------------------------------------------
	   int q=L.Longitud();
	   int c=0;
	  PilaLista Aux;
	//  Aux.Crear();
	   for (int i = 0; i < q ; i++) {
		   String a=Sacar();
		   Aux.Meter(a);

		   if (a >IntToStr(100000)) {
			t->TextOutW(x+35,y+25+(c*20),(a));
		   }else{
		   t->TextOutW(x+55,y+25+(c*20),(a));
		   }
		   c=c+1;

	   }

	   for (int i = 0; i < q ; i++) {
		  String a=Aux.Sacar();

		   Meter(a);

	   }
	//------------------------------------------------------------------
	t->MoveTo(x,y);
	t->LineTo(x+30,y);



	t->LineTo(x+30,y+20+(c*20));

	t->LineTo(x+100,y+20+(c*20));


	t->LineTo(x+100,y);

	t->LineTo(x+130,y);
	for (int i = 0; i < c; i++) {
	  t->MoveTo(x+30,y+20+(i*20));

	  t->LineTo(x+100,y+20+(i*20));
	}

	}

};



#endif
