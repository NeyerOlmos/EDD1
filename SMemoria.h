//---------------------------------------------------------------------------
#include "vcl.h"
#include <Vcl.Controls.hpp>
#ifndef SMemoriaH
#define SMemoriaH
//---------------------------------------------------------------------------
template <class R>
struct Nodo{
   R dato;
   int link;
};
const max=16;

template <class T>
class SMemoria{
 private:// atributos
	Nodo<T> M[max+1];
	int libre;
 public:  // funciones y procedimientos

  SMemoria(){
  libre=1;
  for(int i=1; i<=max; i++)  {
	M[i].link=i+1;
	M[i].dato=NULL;
  }
	M[max].link=-1;

}

int PedirEspacio(int nro)
{ 	int c=1 ,x=libre;
	while (c<=nro){
	if (x!=-1) {
		libre=M[libre].link;
	}
	c=c+1;
	}
  M[libre-1].link=-1;
  return x;

}


int MostrarLibre()
{
return  libre;
}


void LiberarEspacio(int dir)
{



	int x,a,ant;
	   x=dir;

	   //----
		 if (Estado(dir)==false) {
		 ant=dir;
		 x=dir;
		   while (x!=-1){
			   ant=x;
			   x=M[x].link;
			   M[ant].dato=0;
			   }
			M[ant].link=this->libre;
			this->libre=dir;
		 }
}

int CantEspLibre(){
	int x = libre;
	int c = 0;
	while(x != -1){
		c = c + 1;
		x = M[x].link;
	}
	return c;
}

int CantEspOcupado(){
	int c = (max + 1) - CantEspLibre();
	return c;
}

bool Estado(int dir){
	int x = libre;
	bool c = false;
	while((x != -1) && (c == false)){
		if(x == dir){
			c = true;
		}
		x = M[x].link;
	}
	return c;
}

void PonerDato(int dir,int lugar, T valor){
    int i, x=dir;
	for (i = 1; i < lugar; i++) {
		x=M[x].link;
	}
	M[x].dato=valor;
	}


T ObtenerDato(int dir, int lugar){
	   int i, x=dir;
	for (i = 1; i < lugar; i++) {
		x=M[x].link;
	}
	M[x].dato;
	return M[x].dato;
	}

	int ObtenerLink(int dir)
{
    return (M[dir].link);
}

bool EsDirLibre(int dir){
	int i=libre;
	while (i!=dir && i!=-1)
		i=M[i].link;
	return (i==dir);
}

 void mostrar(int x, int y, TCanvas *t)
{
	int and = 90, anl = 60, al = 30;

	t->Font->Height = 20; //

	t->Font->Height = 19;
	for (int i = 1; i <= max; i++) {
		if (!Estado(i)) {
			t->Brush->Color = clRed;
		}
		else {
			t->Brush->Color = clGreen;
		}

		// rectangulo de direccion
		t->RoundRect(x - 205, y + (i*al), x - 165, y + ((i + 1)*al),15,15);
		t->TextOut(x - 195, y + (i*al) + 8, IntToStr(i));

		// rectangulo de dato
		t->RoundRect(x - 165, y + (i*al), x -90, y + (i + 1)*al,15,15);
		t->TextOut(x - 140, y + i*al + 8, M[i].dato);

		// rectangulo de links
		t->RoundRect(x -90, y + (i*al), x -50,
			y + (i + 1)*al,15,15);
		t->TextOut(x - 75, y + i*al + 8, IntToStr(M[i].link));



	}

	}
  };
  //extern SMemoria *TDAMemoria;
#endif
