//---------------------------------------------------------------------------

#ifndef Polinomio_ListaH
#define Polinomio_ListaH


#include <vcl.h>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <math.hpp>

//---------------------------------------------------------------------------
#include "Lista_Vector.h"
//---------------------------------------------------------------------------

   class PolinomioLista{
   private:
	  ListaVector<int> LC;
	  ListaVector<double> LE;

   public:
		 void Crear();  //done
		 bool Es_Cero();      //done
		 int Grado();               //done
		 int Num_De_Terminos();          //done
		 int Coeficiente(int Exponente);       //done
		 int Get_Exponente(int NumDeTermino);        //done
		 void Desplazar_Un_Elem_Hacia_La_Pos_Lug(int lug); //done
		 void Poner_Termino(int Coeficiente, int Exponente);     //done
		 int ExisteExp(int exp);                             //done
		 void Sumar(PolinomioLista A);
		 void Sumar(PolinomioLista A,PolinomioLista B);
		 void Restar(PolinomioLista A,PolinomioLista B);
		 void Multiplicar_por_menos1();
		 void Multiplicar(PolinomioLista A,PolinomioLista B);
		 void Derivar();
		 int Potencia(int Numero,int Potencia);
		 int Calcular_Y(int X);
		 void MostrarPolinomioEnStringGrid(TStringGrid *texponentes,TStringGrid *tcoeficientes);
		 void GraficarEnCanvas(TCanvas *t);
		 void MostrarPolinomioEnLabel(TLabel *l);


		 void Mostrar(int x,int y,TCanvas *t);


   };





#endif
