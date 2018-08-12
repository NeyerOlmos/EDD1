//---------------------------------------------------------------------------

#ifndef Pila_VectorH
#define Pila_VectorH

//------------------------------------
//#include <Vcl.StdCtrls.hpp>
#include <Vcl.Grids.hpp>
//#include <except.h>
//#include <Vcl.Controls.hpp>
//---------------------------------------------------------------------------


const int MaxPila=100;
template <class T>
class PilaVector{
private:
  T Elemento[MaxPila];
  int tope;
public:


 PilaVector(){
   tope=0;
}

bool PilaVector::Vacia(){
  return tope==0;
}

void PilaVector::Meter(T elemento){
  if (tope<MaxPila) {
	   tope=tope+1;
	  Elemento[tope]=elemento;
  }


}
void Invertir(){

PilaVector aux;
int tope1=tope;
 for (int i = 0; i < tope1 ; i++) {
	 aux.Meter(Sacar());
 }

 PilaVector aux2;

 for (int i = 0; i < tope1 ; i++) {
	 aux2.Meter(aux.Sacar());
 }


 for (int i = 0; i < tope1 ; i++) {
	 Meter(aux2.Sacar());
 }


}


T PilaVector::Sacar(){
	T e;
	 if (!Vacia()) {
		 e=Elemento[tope];
		 tope=tope-1;
	 }else{

	 throw new Exception("Error: Pila Vacia");
	 }

  return e;
}

T PilaVector::Cima(){
	if (!Vacia()) {
		  return Elemento[tope];
	}else{
	 throw new Exception("Error: Pila Vacia");
	}


}

void Mostrar(TStringGrid *t){
	  int i;
	  t->RowCount=tope;
	  t->Height=tope*24;

	  int q=tope;

	  PilaVector Aux;
	//  Aux.Crear();
	   for (i = 0; i < q ; i++) {
		   T a=Sacar();
		   Aux.Meter(a);

		   t->Cells[0][i]=a;

	   }

	   for (i = 0; i < q ; i++) {
		  T a=Aux.Sacar();

		   Meter(a);

	   }
}


void Mostrar(int x,int y,TCanvas *t){

	//----------------------------
	t->Brush->Color=clWhite;
	t->Pen->Color=clWhite;
	t->Rectangle(0,0,1000,1000);
	t->Pen->Color=clBlue;
	//------------------------------------------------------------------
	   int q=tope;
	   int c=0;
	  PilaVector Aux;

	   for (int i = 0; i < q ; i++) {
		   T a=Sacar();
		   Aux.Meter(a);

		   if (abs(a) >100000000) {
			t->TextOutW(x+35,y+25+(c*20),IntToStr(a));
		   }else{
		   t->TextOutW(x+55,y+25+(c*20),IntToStr(a));
		   }
		   c=c+1;

	   }

	   for (int i = 0; i < q ; i++) {
		  T a=Aux.Sacar();

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
class PilaVector<String>{
private:
  String Elemento[MaxPila];
  int tope;
public:


 PilaVector(){
   tope=0;
}

bool PilaVector::Vacia(){
  return tope==0;
}

void PilaVector::Meter(String elemento){
  if (tope<MaxPila) {
	   tope=tope+1;
	  Elemento[tope]=elemento;
  }


}


String PilaVector::Sacar(){
	String e;
	 if (!Vacia()) {
		 e=Elemento[tope];
		 tope=tope-1;
	 }else{

	 throw new Exception("Error: Pila Vacia");
	 }

  return e;
}

String PilaVector::Cima(){
	if (!Vacia()) {
		  return Elemento[tope];
	}else{
	 throw new Exception("Error: Pila Vacia");
	}


}

void Mostrar(TStringGrid *t){
	  int i;
	  t->RowCount=tope;
	  t->Height=tope*24;

	  int q=tope;

	  PilaVector Aux;
	//  Aux.Crear();
	   for (i = 0; i < q ; i++) {
		   String a=Sacar();
		   Aux.Meter(a);

		   t->Cells[0][i]=a;

	   }

	   for (i = 0; i < q ; i++) {
		  String a=Aux.Sacar();

		   Meter(a);

	   }
}


void Mostrar(int x,int y,TCanvas *t){

	//----------------------------
	t->Brush->Color=clWhite;
	t->Pen->Color=clWhite;
	t->Rectangle(0,0,1000,1000);
	t->Pen->Color=clBlue;
	//------------------------------------------------------------------
	   int q=tope;
	   int c=0;
	  PilaVector Aux;

	   for (int i = 0; i < q ; i++) {
		   String a=Sacar();
		   Aux.Meter(a);

		   if ( a >IntToStr(100000000)) {
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
