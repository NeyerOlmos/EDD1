//---------------------------------------------------------------------------

#ifndef Polinomio_VectorH
#define Polinomio_VectorH
#include <except.h>
#include <vcl.h>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <math.hpp>

//---------------------------------------------------------------------------
const int MaxP=15;


class PolinomioVector{
	 private:
		   int VE[MaxP];
		   double VC[MaxP];
		   int nt;


		   int ngra;
		   int	Intervalo;
	 public:
		 void Crear();
		 bool Es_Cero();
		 int Grado();
		 void Copy(PolinomioVector P);
		 int Num_De_Terminos();
		 double Coeficiente(int Exponente);
		 int Get_Exponente(int NumDeTermino);
		 void Desplazar_Un_Elem_Hacia_La_Pos_Lug(int lug);
		 void Poner_Termino(double Coeficiente, int Exponente);
		 int ExisteExp(int exp);
		 void Sumar(PolinomioVector A);
		 void Sumar(PolinomioVector A,PolinomioVector B);
		 void Restar(PolinomioVector A,PolinomioVector B);
		 void Multiplicar_por_menos1();
		 void Multiplicar(PolinomioVector A,PolinomioVector B);
		 void Derivar();
		 void Integrar();
		 double Potencia(double Numero,double Potencia);
		 double Calcular_Y(double X);
		 double AreaBajoLaCurva(int A_LimiteInferior,  int B_LimiteSuperior);
		 void MostrarPolinomioEnStringGrid(TStringGrid *texponentes,TStringGrid *tcoeficientes);
	   	 void MostrarIteraciones(TStringGrid *t);
		 void GraficarEnCanvas(TCanvas *t);
		 void GraficarArea(TCanvas *r,int a ,int b);
		 void MostrarPolinomioEnLabel(TLabel *l);
		 void GraficarCanvas(TImage *t);
		 double pintar(TImage *t,int a,int b);

		 void Mostrar(int x, int y,TCanvas *t);


		 void Lin_Bairstow(int p,int q, double Error);


	
		 };










#endif
