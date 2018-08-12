//---------------------------------------------------------------------------

#pragma hdrstop

#include "Polinomio_Pila.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)




void PolinomioPila::Crear(){

  nt=0;
}

bool PolinomioPila::Es_Cero(){
  return PolPila.Vacia();
}

int PolinomioPila::Grado(){


}






void PolinomioPila::Poner_Termino(int Coeficiente, int Exponente){
   PolPila.Meter(Exponente);
   PolPila.Meter(Coeficiente);
   nt=nt+1;


}

void PolinomioPila::Mostrar(int x, int y, TCanvas *t ){
  PolPila.Mostrar(x,y,t);
}

 double PolinomioPila::Potencia(double Numero,double Potencia){
   int i;
   double result=Numero;
	 if (Potencia>0) {


	  for (i = 1 ; i < Potencia; i++) {
		  result=result*Numero;
	   }
	 }else{
	 result=1;
	 }


	 return result;
 }


 double PolinomioPila::Calcular_Y(double X){
		int i;
		double y=0;
		double x;


	 for (i =0 ; i < nt; i++) {
	//	x=Potencia(X,VE[i]);
	 //	y=y+VC[i]*x;
	 }



  return y;
 }

void PolinomioPila::Graficar(TImage *t){

    double T(50);    // 10 se ve bien
	 double v(20);         // 9 10 12 15 18 20 30 36  45 60 90 180
	 double w=v;

	// v=v/T;
 // dibujo de los margenes-------------------------------------------------------
   t->Canvas->Pen->Color=clBlack;
   t->Canvas->Pen->Width=2;
   int xx(t->Width);
   int yy(t->Height);
   t->Canvas->Rectangle(1,1,xx,yy);
	double TT((xx/2+5)/w);


  //dibujo de las Lineas de los ejes X y Y ---------------------


   t->Canvas->Pen->Color=clRed;
   t->Canvas->Pen->Width=1;
   t->Canvas->MoveTo(xx/2+5,0);
   t->Canvas->LineTo(xx/2+5,yy);
   t->Canvas->MoveTo(0,yy/2+5);
   t->Canvas->LineTo(xx,yy/2+5);

   //dibujo de los triangulos de las puntas de los ejes X y Y ----------------
   TPoint vertices[3];
	vertices[0] = Point(0,yy/2+5);
	vertices[1] = Point(5,(yy/2));
	vertices[2] = Point(5,(yy/2)+10);
	t->Canvas->Polygon(vertices, 2);

	vertices[0] = Point(xx,yy/2+5);
	vertices[1] = Point(xx-5,(yy/2));
	vertices[2] = Point(xx-5,(yy/2)+10);
	t->Canvas->Polygon(vertices, 2);

	vertices[0] = Point(xx/2+5,0);
	vertices[1] = Point((xx/2),5);
	vertices[2] = Point((xx/2)+10,5);
	t->Canvas->Polygon(vertices, 2);

	vertices[0] = Point(xx/2+5,yy);
	vertices[1] = Point((xx/2),yy-5);
	vertices[2] = Point((xx/2)+10,yy-5);
	t->Canvas->Polygon(vertices, 2);
	t->Canvas->MoveTo(xx/2+5,yy/2+5);

	//dibujado de lineas en los ejes X y Y ------------------------------------

	//lineas del eje X
	double x=w;
	double y=(yy/2);    //200
	int i;
	for (i = 1; i <= ((TT*2)+1); i++) {
	t->Canvas->MoveTo(x,y);
	t->Canvas->LineTo(x,y+10);
	x=x+w;

	}

	//lineas del eje Y

	x=(xx/2);    //300
	y=w;
	for (i = 1; i < ((TT*2)+1); i++) {
	t->Canvas->MoveTo(x,y);
	t->Canvas->LineTo(x+10,y);
	y=y+w;
	}

   //colocado de los numeros en los ejes X y Y ----------------------------
	t->Canvas->TextOut((xx/2)-2,(yy/2)+1,"0");
					// 298,201,"0" pone algostring en canvas
	//eje X
	x=(xx/2)+w+3;//323
	y=(yy/2)+10;//210
	for (i =1 ; i < (TT+1); i++) {
		  t->Canvas->TextOutW(x,y,IntToStr(i));
		  x=x+w;
	}

	x=(xx/2)-(w+3); //272
	for (i = 1; i < (TT+1); i++) {
		 t->Canvas->TextOutW(x,y,IntToStr(-i));
		  x=x-w;
	}
	//eje Y


	x=(xx/2)-10; //290
	y=(yy/2)-(w+6); //174

	for (i = 1; i < (TT+1); i++) {
		 t->Canvas->TextOutW(x,y,IntToStr(i));
		 y=y-w;
	}

	y=(yy/2)+(w-6);//214
	x=(xx/2)-15; //285
	for (i = 1; i < (TT+1); i++) {
		 t->Canvas->TextOutW(x,y,IntToStr(-i));
		 y=y+w;
	}


   //1er intento de graficar un polinomio :v ----------------------------------------------------------------------
	 t->Canvas->Pen->Color=clBlue;
	 x=0;
	 y=0;

	// double TT(180/w);
	 double Y = Calcular_Y(-TT);
	if (Y>0) {
	  t->Canvas->MoveTo(x,((yy/2)-Y*(w)+5));
	} else{
	 t->Canvas->MoveTo(x,((yy/2)+Y*(-w)+5));
		   }
	 //	   double T(5);    // 10 se ve bien
	 //	  double v(20);
	   v=v/T;
	  for (double i = (-(TT)+(1/T)); i < TT; i=(i+(1/T))) { // T para regular tamanho
		  x=x+v;
		  Y = Calcular_Y(i);
		  if (Y>0) {
			double az=((yy/2)-Y*(w)+5);
			t->Canvas->LineTo(x,az);
		  t->Canvas->MoveTo(x,(((yy/2)-Y*(w))+5));
		  }else{
		  t->Canvas->LineTo(x,((((yy/2)+Y*(-w)))+5));
		  t->Canvas->MoveTo(x,((((yy/2)+Y*(-w)))+5));
				}

	  }


}







