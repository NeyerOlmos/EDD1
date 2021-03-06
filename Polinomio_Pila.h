//---------------------------------------------------------------------------

#ifndef Polinomio_PilaH
#define Polinomio_PilaH
//---------------------------------------------------------------------------
#include "Pila_Vector.h"
#include "vcl.h"
//-------------------------------------------------


class PolinomioPila{
	  private:

		 PilaVector<int> PolPila;
		 int nt;



	  public:



	   void Crear();
		 bool Es_Cero();
		 int Grado();
		 int Num_De_Terminos();
		 int Coeficiente(int Exponente);
		 int Get_Exponente(int NumDeTermino);
		 void Desplazar_Un_Elem_Hacia_La_Pos_Lug(int lug);
		 int ExisteExp(int exp);
		 void Poner_Termino(int Coeficiente, int Exponente);
		  double Calcular_Y(double X);
		  double Potencia(double Numero,double Potencia);
		 void Graficar(TImage *t);
		 void Mostrar(int x,int y, TCanvas *t);



};








#endif
