//---------------------------------------------------------------------------

#ifndef Conjunto_EnlazadoH
#define Conjunto_EnlazadoH

#include "SMemoria.h"
//---------------------------------------------------------------------------
struct Nodo2{
	int dato;
	//Nodo2 *Sig;
};
typedef Nodo2 Direccion3;

template <class T>
class ConjuntoEnlazado{

	private:
	SMemoria<T> M;
		int Cant;
		Direccion3 PtrConj;
	public:
	  /* void	Crear();
		int Cardinal();
		bool Vacio();
		int Ordinal(int e);
		void Inserta(int e);
		void Suprime(int e);
		bool Pertenece(int e);
		int Muestrea();

		void Mostrar(TCanvas *t); */




 ConjuntoEnlazado()
{  // M.Crear();
	PtrConj.dato  = -1;
	Cant = 0;
}

int ConjuntoEnlazado::Cardinal()
{
	return Cant;
}

bool ConjuntoEnlazado::Vacio()
{
	return (Cant == 0);
}

int ConjuntoEnlazado::Ordinal(T e)
{
	if (Cant!=0) {
		int resp = 0;
		int pc = PtrConj.dato;
	while (pc!=-1){
		resp = resp + 1;
		if ((M.ObtenerDato(pc,1))==e) {
			return resp;
			pc = -1;
		}else{
			pc = M.ObtenerDato(pc,2);
			}
		}
	   	throw new Exception ("ERROR ELEMENTO NO EXISTE");
	}else{
		throw new Exception("ERROR CONJUNTO VACIO");
	}
}
void ConjuntoEnlazado::Inserta(T e)
{
  if (!Pertenece(e)) {
	int dir = M.PedirEspacio(2);
		if (dir !=-1) {
			M.PonerDato(dir,1,e);
			M.PonerDato(dir,2,PtrConj.dato);
			PtrConj.dato = dir;
			Cant = Cant +1;
		}else{
			throw new Exception ("ERROR NO EXISTE ESPACIO");
		}
  }else{
	  throw new Exception("ERROR ELEMENTO YA EXISTE");
  }
}

void ConjuntoEnlazado::Suprime(T e)
{   int c= 1,ant;
	int a = PtrConj.dato;

	while (a!=-1){
		int k = M.ObtenerDato(a,1);
			if (k==e) {
				if (c==1) {
					PtrConj.dato = M.ObtenerDato(a,2);
					 M.LiberarEspacio(a);
					 Cant=Cant-1;
					 a=-1;
				}else{
					int z = M.ObtenerDato(a,2);
					M.PonerDato(ant,2,z);
					M.LiberarEspacio(a);
					Cant=Cant-1;
					a=-1;
				}
			}else{
				ant = a;
				a=M.ObtenerDato(a,2);
				c=c+1;
			}
		}
	//throw new Exception ("ERROR ELEMENTO NO EXISTE!");
}

bool ConjuntoEnlazado::Pertenece(T e)
{   T k;
	int a = PtrConj.dato;
	while (a!=-1){
			k = M.ObtenerDato(a,1);
			if (k==e) {
				  return (k==e);
			}else{
				a = M.ObtenerDato(a,2);
			}
		}
		 return (k==e);
}

T ConjuntoEnlazado::Muestrea()
{    int c=0,p = PtrConj.dato ;
	int i;
	if (Cant!=0) {
			i = rand() % (Cant);
			while (c<=i)
				if (c==i) {
					return M.ObtenerDato(p,1);
				}else{
					c=c+1;
					p = M.ObtenerDato(p,2);
					}
	}else{
		throw new Exception("ERROR CONJUNTO VACIO");
	}
}

void ConjuntoEnlazado::Mostrar( TCanvas *t)
{ /*
	int i,c;
	int and=90, al=30;
if (Cant==0) {
	throw new Exception("CONJUNTO VACIO!");
 }else{
	for(int i=1; i<=Cant; i++){
	 t->Brush->Color=clWhite;
	 t->Font->Height =19;
	 t->Rectangle(x-40,y+(i*al),x,y+(i+1)*al);
//---------------------------------------------
	 int c, b=1, n = PtrConj.dato ,w = M.ObtenerDato(PtrConj.dato,2);
   if (i==1) {
		 c = n;
	   }
  while (b < i) {
	   c = y;
	   w =M.ObtenerDato(w,2);
	   b = b+1;
	   }
//-----------------------------------------------
	 t->TextOutW(x-25,y+(i*al)+3,IntToStr(c));
	 t->Rectangle(x,y+(i*al),x+and+and,y+(i+1)*al);
//-------------------------------------------------
int q;
  int d=1;
  int h = PtrConj.dato;
   int z = M.ObtenerDato(PtrConj.dato,2);
   if (i==1) {
		 q = M.ObtenerDato(h,1);
	   }
  while (d < i) {
	   int r = M.ObtenerDato(z,1);
	   q = r;
	   z =M.ObtenerDato(z,2);
	   d = d+1;
	   }
//------------------------------------------------
	 t->TextOut(x+130,y+i*al+8,IntToStr(c));
		}
	}



	*/
	M.mostrar(300,10,t);
}
};








template <>
class ConjuntoEnlazado<String>{

	private:
	SMemoria<String> M;
		int Cant;
		Direccion3 PtrConj;
	public:

 ConjuntoEnlazado()
{  // M.Crear();
	PtrConj.dato  = -1;
	Cant = 0;
}

int ConjuntoEnlazado::Cardinal()
{
	return Cant;
}

bool ConjuntoEnlazado::Vacio()
{
	return (Cant == 0);
}

int ConjuntoEnlazado::Ordinal(String e)
{
	if (Cant!=0) {
		int resp = 0;
		int pc = PtrConj.dato;
	while (pc!=-1){
		resp = resp + 1;
		if ((M.ObtenerDato(pc,1))==e) {
			return resp;
			pc = -1;
		}else{
			pc = StrToInt(M.ObtenerDato(pc,2));
			}
		}
		throw new Exception ("ERROR ELEMENTO NO EXISTE");
	}else{
		throw new Exception("ERROR CONJUNTO VACIO");
	}
}
void ConjuntoEnlazado::Inserta(String e)
{
  if (!Pertenece(e)) {
	int dir = M.PedirEspacio(2);
		if (dir !=-1) {
			M.PonerDato(dir,1,e);
			M.PonerDato(dir,2,IntToStr(PtrConj.dato));
			PtrConj.dato = dir;
			Cant = Cant +1;
		}else{
			throw new Exception ("ERROR NO EXISTE ESPACIO");
		}
  }else{
	  throw new Exception("ERROR ELEMENTO YA EXISTE");
  }
}

void ConjuntoEnlazado::Suprime(String e)
{   int c= 1,ant;
	int a = PtrConj.dato;

	while (a!=-1){
		String k = M.ObtenerDato(a,1);
			if (k==e) {
				if (c==1) {
					PtrConj.dato = StrToInt(M.ObtenerDato(a,2));
					 M.LiberarEspacio(a);
					 Cant=Cant-1;
					 a=-1;
				}else{
					int z = StrToInt(M.ObtenerDato(a,2));
					M.PonerDato(ant,2,z);
					M.LiberarEspacio(a);
					Cant=Cant-1;
					a=-1;
				}
			}else{
				ant = a;
				a= StrToInt(M.ObtenerDato(a,2));
				c=c+1;
			}
		}
	//throw new Exception ("ERROR ELEMENTO NO EXISTE!");
}

bool ConjuntoEnlazado::Pertenece(String e)
{   String k;
	int a = PtrConj.dato;
	while (a!=(-1)){
			k = M.ObtenerDato(a,1);
			if (k==e) {
				  return (k==e);
			}else{
				a = StrToInt(M.ObtenerDato(a,2));
			}
		}
		 return (k==e);
}

String ConjuntoEnlazado::Muestrea()
{    int c=0,p = PtrConj.dato ;
	int i;
	if (Cant!=0) {
			i = rand() % (Cant);
			while (c<=i)
				if (c==i) {
					return M.ObtenerDato(p,1);
				}else{
					c=c+1;
					p = StrToInt(M.ObtenerDato(p,2));
					}
	}else{
		throw new Exception("ERROR CONJUNTO VACIO");
	}
}

void ConjuntoEnlazado::Mostrar( TCanvas *t)
{
	M.mostrar(300,10,t);
}
};
//extern ConjuntoM *CM;
#endif
