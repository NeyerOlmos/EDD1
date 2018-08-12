//---------------------------------------------------------------------------

#ifndef Conjunto_ListaH
#define Conjunto_ListaH
#include "Lista_Vector.h"
//---------------------------------------------------------------------------
	template <class T>
class ConjuntoLista{
 private:
	  ListaVector<T> elem;

 public:



 ConjuntoLista(){

}

bool ConjuntoLista::Vacia(){
   return elem.Vacia();

}
int ConjuntoLista::Cardinal(){
	return elem.Longitud();
}

int ConjuntoLista::Ordinal(T ele){



  return elem.Recupera_dir(ele);

}
void ConjuntoLista::inserta(T elemento){
//if (elem.vacia()) {
if (!pertenece(elemento)) {


	elem.Inserta(1,elemento);
	}else{
	throw new Exception("Error: elemento ya esta en la lista");
	}

}




void ConjuntoLista::suprime(T elemento){
	if (pertenece(elemento)) {
		elem.Suprime(elem.Recupera_dir(elemento));
	}

}

  bool ConjuntoLista::pertenece(T elemento){
	int i=0;
	bool r=false;
	while (i<elem.Longitud()&& r==false){

	  int q=elem.Recupera(i+1);

	   if (q==elemento) {
		 r=true;
	   }
	   i++;
	}


	 return r;

  }


  T ConjuntoLista::muestrea() {
	   int x=elem.Recupera(Random(elem.Longitud())+1);
	  return x;
  }


  void ConjuntoLista::Union(ConjuntoLista A,ConjuntoLista B){
	  while (A.Cardinal()!=0) {
			T elemento=A.muestrea();
			 if (!pertenece(elemento)) {


			 inserta(elemento);
			 }A.suprime(elemento);
	  }

	   while (B.Cardinal()!=0){
			T elemento=B.muestrea();
			if (!pertenece(elemento)) {


			inserta(elemento);
			}B.suprime(elemento);
	   }



  }


  void ConjuntoLista::Interserccion(ConjuntoLista A,ConjuntoLista B){
	 while (A.Cardinal()!=0){
		 int x=A.muestrea();
		   if (B.pertenece(x)) {
			  inserta(x);
		   }
		   A.suprime(x);

		 }

  }

  void ConjuntoLista::No_Interseccion(ConjuntoLista A,ConjuntoLista B){
	int q=A.Cardinal();
	int i=0;
	while (i<=q){
	  int x=A.muestrea();

	  if (B.pertenece(x)) {
		 A.suprime(x);
		 B.suprime(x);
	  }
	  i=i+1;
	}
	 Union(A,B);
  }


void ConjuntoLista::mostrar(TStringGrid *t){
	elem.MostrarListaEnStringGrid(t);

}


void ConjuntoLista::Mostrar(int x,int y,TCanvas *t){
  int i=0;
  int tam;
  while (i<=10){

	if (elem.Longitud()<= pow(2.0,i)) {
	   tam=pow(2.0,i);
	   i=11;
	}else{
	  i=i+1;
	 }


  }
  t->Pen->Color=clWhite;
  t->Brush->Color=clWhite;

  t->Rectangle(0,0,1000,1000);

   t->Pen->Color=clBlack;
   t->Brush->Color=clWhite;
  int xc=(tam/2)*20;
  int yc=(tam/2)*20;
  int inter=0;
  int interY=0;
 t->Ellipse(x,y,x+tam*20,y+tam*20);

 t->Brush->Color=clWhite;

 for (i = 1; i <= elem.Longitud(); i++) {

  t->TextOutW(x+1+(tam*3)+inter ,y+(tam*3)+interY,IntToStr(elem.Recupera(i)));

  if (inter < tam*20-(tam*3)-50) {

	  inter =inter+10 + t->TextWidth(IntToStr(elem.Recupera(i)));
	 }else {
	 inter=0;
	 interY=interY+12;
	 }

 }



}

};






template <>
class ConjuntoLista<String>{
 private:
	  ListaVector<String> elem;

 public:



 ConjuntoLista(){

}

bool ConjuntoLista::Vacia(){
   return elem.Vacia();

}
int ConjuntoLista::Cardinal(){
	return elem.Longitud();
}

int ConjuntoLista::Ordinal(String ele){



  return elem.Recupera_dir(ele);

}
void ConjuntoLista::inserta(String elemento){
//if (elem.vacia()) {
if (!pertenece(elemento)) {


	elem.Inserta(1,elemento);
	}else{
	throw new Exception("Error: elemento ya esta en la lista");
	}

}




void ConjuntoLista::suprime(String elemento){
	if (pertenece(elemento)) {
		elem.Suprime(elem.Recupera_dir(elemento));
	}

}

  bool ConjuntoLista::pertenece(String elemento){
	int i=0;
	bool r=false;
	while (i<elem.Longitud()&& r==false){

	  String q=elem.Recupera(i+1);

	   if (q==elemento) {
		 r=true;
	   }
	   i++;
	}


	 return r;

  }


  String ConjuntoLista::muestrea() {
	   String x=elem.Recupera(Random(elem.Longitud())+1);
	  return x;
  }


  void ConjuntoLista::Union(ConjuntoLista A,ConjuntoLista B){
	  while (A.Cardinal()!=0) {
			T elemento=A.muestrea();
			 if (!pertenece(elemento)) {


			 inserta(elemento);
			 }A.suprime(elemento);
	  }

	   while (B.Cardinal()!=0){
			T elemento=B.muestrea();
			if (!pertenece(elemento)) {


			inserta(elemento);
			}B.suprime(elemento);
	   }



  }


  void ConjuntoLista::Interserccion(ConjuntoLista A,ConjuntoLista B){
	 while (A.Cardinal()!=0){
		 String x=A.muestrea();
		   if (B.pertenece(x)) {
			  inserta(x);
		   }
		   A.suprime(x);

		 }

  }

  void ConjuntoLista::No_Interseccion(ConjuntoLista A,ConjuntoLista B){
	int q=A.Cardinal();
	int i=0;
	while (i<=q){
	  String x=A.muestrea();

	  if (B.pertenece(x)) {
		 A.suprime(x);
		 B.suprime(x);
	  }
	  i=i+1;
	}
	 Union(A,B);
  }


void ConjuntoLista::mostrar(TStringGrid *t){
	elem.MostrarListaEnStringGrid(t);

}


void ConjuntoLista<String>::Mostrar(int x,int y,TCanvas *t){
  int i=0;
  int tam;
  while (i<=10){

	if (elem.Longitud()<= pow(2.0,i)) {
	   tam=pow(2.0,i);
	   i=11;
	}else{
	  i=i+1;
	 }


  }
  t->Pen->Color=clWhite;
  t->Brush->Color=clWhite;

  t->Rectangle(0,0,1000,1000);

   t->Pen->Color=clBlack;
   t->Brush->Color=clWhite;
  int xc=(tam/2)*20;
  int yc=(tam/2)*20;
  int inter=0;
  int interY=0;
 t->Ellipse(x,y,x+tam*20,y+tam*20);

 t->Brush->Color=clWhite;

 for (i = 1; i <= elem.Longitud(); i++) {

  t->TextOutW(x+1+(tam*3)+inter ,y+(tam*3)+interY,(elem.Recupera(i)));

  if (inter < tam*20-(tam*3)-50) {

	  inter =inter+10 +t->TextWidth((elem.Recupera(i)));
	 }else {
	 inter=0;
	 interY=interY+12;
	 }

 }



}

};











#endif
