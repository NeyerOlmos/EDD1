//---------------------------------------------------------------------------

#ifndef ListaEnlazadaH
#define ListaEnlazadaH
#include "vcl.h"
#include "SMemoria.h"
//---------------------------------------------------------------------------
struct Nodo1{
 int dato;
 Nodo1 *sig;
};

typedef Nodo1 Direccion;


  template <class T>
  class ListaEnlazada{
	private:// atributos de la clase ListaEnlazada
	SMemoria<T> M;
	 Direccion PtrElementos;
	 int longitud;

	public://funciones y procedimientos

   /*	 void Crear();
	 int Fin();
	 int Primero();
	 int Siguiente(int direccion);
	 int Anterior(int direccion);
	 void Inserta(int direccion, int elemento);
	 void Modifica(int direccion, int elemento);
	 void Suprime(int direccion);
	   int Recupera(int dir) ;
	 int Longitud();
	 bool Vacia();
	 void Mostrar(int x, int y,TCanvas *t);
	 int MostrarPtrEle();
	 int MostrarDir(int Nro);
	  int Localiza(int ele);
	  void EliminaDato(int Ele)  ;
	 int MostrarDato(int Nro);
	 int MostrarSig(int Nro);
	 void Anula();
	 bool RecuperaC(int Ele);   */





	 ListaEnlazada(){
	  // M.Crear();
	  longitud=0;
	  PtrElementos.dato =-1;

	 }
   int Fin(){
   int PtrFin=-1;
		if (Vacia()) {
			throw new Exception("Error: Lista Vacia");
		}else {
		 int x = PtrElementos.dato;
		 while (x!=-1){
			  PtrFin=x;
			  //x=TDAMemoria->ObtenerDato(x,2);
			  x=M.ObtenerDato(x,2);
			 }

		 }
	  return PtrFin;
   }

	 int Primero(){
		if (!Vacia()) {
			return PtrElementos.dato;

		  }	else{
			throw new Exception("Error: Lista Vacia");

		}

	 }

	 int Siguiente(int direccion){
	 if (Vacia()) {
		 throw new Exception("Error: Lista Vacia");
		// return -1;
	 }else{
		 if (direccion==Fin()) {
				 //throw new Exception("Error: La direccion enviada es la ultima y no tiene siguiente");
		  return -1;
		 }else
			return   M.ObtenerDato(direccion,2);     //TDAMemoria->ObtenerDato(direccion,2);


		}


	 }

	 int Anterior(int direccion){
		if (Vacia()) {
			throw new Exception("Error: Lista Vacia");
		}else{
			 if (direccion==Primero()) {
			 throw new Exception("Error: La direccion enviada es la primera y no tiene anterior");

			 }else{
				 int x=PtrElementos.dato;
				 int ant=-1;
				  while (x!=-1){

						if (x==direccion) {
						  return ant;

						}else{
							 ant=x;
							 x= M.ObtenerDato(x,2);  //TDAMemoria->ObtenerDato(x,2);

						   }
					}
				 }
		   }
	 }




   int Longitud()
{
	return longitud;
}


   bool Vacia(){

	return longitud==0;
}

   void Inserta(int direccion, T elemento){

	int x=M.PedirEspacio(2);        // TDAMemoria->PedirEspacio(2);
		if (x!=-1) {
		  M.PonerDato(x,1,elemento);// TDAMemoria->PonerDato(x,1,elemento);
		  M.PonerDato(x,2,-1);// TDAMemoria->PonerDato(x,2,-1);

		if (Vacia()) {
			PtrElementos.dato=x;
			longitud=1;
		}else{
		   longitud = longitud +1;
			if (direccion==Primero()) {
			   M.PonerDato(x,2,direccion);   //	TDAMemoria->PonerDato(x,2,direccion);
				PtrElementos.dato=x;
			}else {
				 int ant=Anterior(direccion);
					 M.PonerDato(ant,2,x); // TDAMemoria->PonerDato(ant,2,x);
				   M.PonerDato(x,2,direccion);	//  TDAMemoria->PonerDato(x,2,direccion);
			   }
		  }
	 }else{

		  throw new Exception("Error: error del espacio memoria");
		}
   }



   void Modifica(int direccion,T elemento){

		if (Vacia()) {
			throw new Exception("Error: ListaVacia");
		}else{
	   M.PonerDato(direccion,1,elemento);  //	TDAMemoria->PonerDato(direccion,1,elemento);

		}

   }


   void Suprime(int direccion){
	  if (Vacia()) {
	  throw new Exception("Error: Lista Vacia");

	  } else{
	  if (direccion==PtrElementos.dato) {
	  int x=PtrElementos.dato;
	  PtrElementos.dato= M.ObtenerDato(PtrElementos.dato,2);  //TDAMemoria->ObtenerDato(PtrElementos,2);
		M.LiberarEspacio(x);   //  TDAMemoria->LiberarEspacio(x);
	   //	M.PonerDato(x,1,0);  //TDAMemoria->PonerDato(x,1,0);
		//M.PonerDato(x,2,0);   //TDAMemoria->PonerDato(x,2,0);

	  }  else{
		  /* if (p==Fin()) {
					ant = Anterior(p);
					M->PonerDato(ant,-1,2);
					M->LiberarEspacio(p);
				}else{
					ant = Anterior(p);
					M->PonerDato(ant,Siguiente(p),2);
					M->LiberarEspacio(p);
				}

			*/




		int ant = Anterior(direccion);
	  M.PonerDato(ant,2,Siguiente(direccion)); //TDAMemoria->PonerDato(ant,2,Siguiente(direccion));
	  M.LiberarEspacio(direccion);	//TDAMemoria->LiberarEspacio(direccion);
	 // M.PonerDato(direccion,1,0);	TDAMemoria->PonerDato(direccion,1,0);
	 // M.PonerDato(direccion,2,0); TDAMemoria->PonerDato(direccion,2,0);
		}

	 longitud=longitud-1;
   }


  }
T Recupera(int dir)
{
 if (Vacia()) {
	 throw new Exception("Error: Lista Vacia");
 }  else
 return  M.ObtenerDato(dir,1); // TDAMemoria->ObtenerDato(dir,1);
}

   void Anula()
{ // SMemoria M;
   ListaEnlazada();
 }



   void Mostrar(int x, int y,TCanvas *t){
	/*
   int and=90, anl=60, al=30;


	t->Font->Height=20;	//

	t->Font->Height=19;
			for(int  i=1; i<=longitud; i++)
	{
		// rectangulo de direccion
		t->TextOut(x-195,y+(i*al)+8,IntToStr(MostrarDir(i)));

		//rectangulo de dato
		t->RoundRect(x-165,y+(i*al),x+and+and-50,y+(i+1)*al,15,15);
		t->TextOut(x-30,y+i*al+8,IntToStr(MostrarDato(i)));

		//rectangulo de links
		  t->RoundRect(x+and+and-50,y+(i*al),x+and+and-90,y+(i+1)*al,15,15);
		 t->TextOut(x+and+and-75,y+i*al+8,IntToStr(MostrarSig(i)));

	}

	t->Brush->Color = clWhite;
	t->Font->Size = 14;
	t->TextOut(x-200, y, "Dir"); // Imprime la palabra Dir
	t->TextOut(x-50, y, "Dato"); // Imprime la palabra Dato


	*/

	M.mostrar(x,y,t);
   }



   int Localiza(T Ele)
{
	if (Vacia()) {
	   throw new Exception("Error: Lista Vacia");
	  // return -1;
	}  else {
		int x = Primero();
		while (x!= -1)
			{
			 int p = Recupera(x);
			 if (p==Ele) {
					return x;
			 }  else    {
			  x = Siguiente(x);
			  }
			}

	}
}

void EliminaDato(T Ele)
{
	if (Vacia()) {
	   throw new Exception("Error: lista vacia");
	}  else {
	while (Localiza(Ele)!= -1) {
	  int x = Localiza(Ele);
	  Suprime(x);
	  //TDAMemoria->LiberarEspacio(x);
	}
	}
 // return;
}



   int MostrarPtrEle() {
 return PtrElementos.dato;

}

   int MostrarDir(int Nro) {
int c;
  int b=1;
  int x = PtrElementos.dato;
   int y = M.ObtenerDato(PtrElementos.dato,2);// TDAMemoria->ObtenerDato(PtrElementos,2);
   if (Nro==1) {
		 c = x;
	   }
  while (b < Nro) {
	   c = y;
	   y = M.ObtenerDato(y,2);  //TDAMemoria->ObtenerDato(y,2);
	   b = b+1;
	   }
return c;
}

int MostrarDato(int Nro) {
int c;
  int b=1;
  int x = PtrElementos.dato;
   int y =M.ObtenerDato(PtrElementos.dato,2);// TDAMemoria->ObtenerDato(PtrElementos,2);

   if (Nro==1) {
		 c =M.ObtenerDato(x,1);// TDAMemoria->ObtenerDato(x,1);
	   }
  while (b < Nro) {
	   int r =M.ObtenerDato(y,1);// TDAMemoria->ObtenerDato(y,1);
	   c = r;
	   y =M.ObtenerDato(y,2); //TDAMemoria->ObtenerDato(y,2);
	   b = b+1;
	   }

return c;
  }

  int MostrarSig(int Nro) {
int c;
  int b=1;
  int x = PtrElementos.dato;
   int y =M.ObtenerDato(PtrElementos.dato,2);// TDAMemoria->ObtenerDato(PtrElementos,2);

   if (Nro==1) {
		 c = x;
	   }
  while (b < Nro) {
	   y =M.ObtenerDato(y,2);//  TDAMemoria->ObtenerDato(y,2);
	   c = y;
	   b = b+1;
	   }

return c;
  }

  bool RecuperaC(T Ele){
  bool resp = false;
   int x = Localiza(Ele);
   if (x != -1) {
	  resp = true;
   }
   return resp;
  }

  };

 // extern ListaEnlazada *ListaE;


#endif
