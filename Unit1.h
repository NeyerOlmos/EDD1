//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <vcl.h>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <math.hpp>
//--------------------------------------------
#include "SMemoria.h"
#include "Lista_Vector.h"
#include "ListaEnlazada.h"
#include "Conjunto_Lista.h"
#include "Conjunto_Enlazado.h"
#include "Polinomio_Vector.h"
#include "Polinomio_Lista.h"
#include "Polinomio_Enlazado.h"
#include "Pila_Vector.h"
#include "Pila_Lista.h"
#include "Polinomio_Pila.h"
#include "Cola_Lista.h"
#include "Pila_Cola.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TStringGrid *StringGrid1;
	TButton *Button1;
	TButton *Button2;
	TEdit *Edit1;
	TButton *Button9;
	TStringGrid *StringGrid4;
	TButton *Button10;
	TButton *Button11;
	TTabSheet *TabSheet3;
	TButton *Button12;
	TStringGrid *StringGrid5;
	TStringGrid *StringGrid6;
	TButton *Button13;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button14;
	TButton *Button15;
	TButton *Button16;
	TEdit *Edit5;
	TButton *Button17;
	TEdit *Edit6;
	TButton *Button18;
	TStringGrid *StringGrid7;
	TStringGrid *StringGrid8;
	TButton *Button19;
	TEdit *Edit7;
	TEdit *Edit8;
	TButton *Button20;
	TStringGrid *StringGrid9;
	TStringGrid *StringGrid10;
	TButton *Button21;
	TButton *Button22;
	TButton *Button23;
	TButton *Button24;
	TImage *Image1;
	TButton *Button25;
	TButton *Button26;
	TButton *Button27;
	TTabSheet *TabSheet4;
	TStringGrid *StringGrid11;
	TButton *Button28;
	TButton *Button29;
	TButton *Button30;
	TButton *Button31;
	TButton *Button32;
	TButton *Button33;
	TButton *Button34;
	TButton *Button35;
	TButton *Button36;
	TButton *Button37;
	TLabel *Label1;
	TTabSheet *TabSheet5;
	TButton *Button38;
	TButton *Button39;
	TButton *Button40;
	TButton *Button41;
	TButton *Button42;
	TButton *Button43;
	TStringGrid *StringGrid12;
	TTabSheet *TabSheet6;
	TButton *Button44;
	TImage *Image2;
	TButton *Button45;
	TEdit *Edit9;
	TEdit *Edit10;
	TButton *Button46;
	TButton *Button47;
	TButton *Button48;
	TButton *Button49;
	TEdit *Edit11;
	TEdit *Edit12;
	TEdit *Edit13;
	TTabSheet *TabSheet7;
	TButton *Button51;
	TImage *Image3;
	TButton *Button52;
	TButton *Button53;
	TButton *Button54;
	TButton *Button55;
	TButton *Button56;
	TButton *Button57;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TEdit *Edit19;
	TTabSheet *TabSheet8;
	TButton *Button50;
	TButton *Button58;
	TButton *Button59;
	TLabel *Label2;
	TEdit *Edit20;
	TEdit *Edit21;
	TTabSheet *TabSheet9;
	TTabSheet *TabSheet10;
	TTabSheet *TabSheet11;
	TButton *Button60;
	TButton *Button61;
	TButton *Button62;
	TLabel *Label3;
	TEdit *Edit22;
	TEdit *Edit23;
	TLabel *Label4;
	TLabel *Label5;
	TStringGrid *StringGrid13;
	TImage *Image4;
	TButton *Button63;
	TButton *Button64;
	TEdit *Edit24;
	TEdit *Edit25;
	TButton *Button65;
	TButton *Button66;
	TImage *Image5;
	TEdit *Edit26;
	TImage *Image6;
	TButton *Button67;
	TPaintBox *PaintBox1;
	TImage *Image7;
	TButton *Button68;
	TEdit *Edit28;
	TEdit *Edit29;
	TImage *Image8;
	TButton *Button69;
	TEdit *Edit30;
	TEdit *Edit31;
	TButton *Button70;
	TImage *Image9;
	TButton *Button71;
	TEdit *Edit32;
	TEdit *Edit33;
	TButton *Button72;
	TEdit *Edit34;
	TTabSheet *TabSheet12;
	TButton *Button3;
	TEdit *Edit2;
	TEdit *Edit27;
	TEdit *Edit35;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TImage *Image10;
	TImage *Image11;
	TButton *Button8;
	TEdit *Edit36;
	TEdit *Edit37;
	TTabSheet *TabSheet13;
	TStringGrid *StringGrid2;
	TButton *Button73;
	TButton *Button74;
	TEdit *Edit38;
	TButton *Button75;
	TButton *Button76;
	TLabel *Label6;
	TButton *Button77;
	TTabSheet *Pila_Cola;
	TEdit *Edit39;
	TButton *Button79;
	TLabel *Label7;
	TButton *Button80;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall Button17Click(TObject *Sender);
	void __fastcall Button18Click(TObject *Sender);
	void __fastcall Button19Click(TObject *Sender);
	void __fastcall Button20Click(TObject *Sender);
	void __fastcall Button21Click(TObject *Sender);
	void __fastcall Button22Click(TObject *Sender);
	void __fastcall Button23Click(TObject *Sender);
	void __fastcall Button24Click(TObject *Sender);
	void __fastcall Button25Click(TObject *Sender);
	void __fastcall Button26Click(TObject *Sender);
	void __fastcall Button27Click(TObject *Sender);
	void __fastcall Button28Click(TObject *Sender);
	void __fastcall Button29Click(TObject *Sender);
	void __fastcall Button32Click(TObject *Sender);
	void __fastcall Button31Click(TObject *Sender);
	void __fastcall Button33Click(TObject *Sender);
	void __fastcall Button34Click(TObject *Sender);
	void __fastcall Button35Click(TObject *Sender);
	void __fastcall Button36Click(TObject *Sender);
	void __fastcall Button37Click(TObject *Sender);
	void __fastcall Button38Click(TObject *Sender);
	void __fastcall Button39Click(TObject *Sender);
	void __fastcall Button40Click(TObject *Sender);
	void __fastcall Button41Click(TObject *Sender);
	void __fastcall Button42Click(TObject *Sender);
	void __fastcall Button43Click(TObject *Sender);
	void __fastcall Button44Click(TObject *Sender);
	void __fastcall Button45Click(TObject *Sender);
	void __fastcall Button46Click(TObject *Sender);
	void __fastcall Button47Click(TObject *Sender);
	void __fastcall Button51Click(TObject *Sender);
	void __fastcall Button52Click(TObject *Sender);
	void __fastcall Button53Click(TObject *Sender);
	void __fastcall Button54Click(TObject *Sender);
	void __fastcall Button55Click(TObject *Sender);
	void __fastcall Button57Click(TObject *Sender);
	void __fastcall Button50Click(TObject *Sender);
	void __fastcall Button58Click(TObject *Sender);
	void __fastcall Button60Click(TObject *Sender);
	void __fastcall Button62Click(TObject *Sender);
	void __fastcall Button61Click(TObject *Sender);
	void __fastcall Button63Click(TObject *Sender);
	void __fastcall Button64Click(TObject *Sender);
	void __fastcall Button65Click(TObject *Sender);
	void __fastcall Button66Click(TObject *Sender);
	void __fastcall Button67Click(TObject *Sender);
	void __fastcall Button68Click(TObject *Sender);
	void __fastcall Button69Click(TObject *Sender);
	void __fastcall Button70Click(TObject *Sender);
	void __fastcall Button71Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button73Click(TObject *Sender);
	void __fastcall Button74Click(TObject *Sender);
	void __fastcall Button75Click(TObject *Sender);
	void __fastcall Button76Click(TObject *Sender);
	void __fastcall Button77Click(TObject *Sender);
	void __fastcall Button79Click(TObject *Sender);
	void __fastcall Button80Click(TObject *Sender);




private:	// User declarations
	  SMemoria<String> MemoriaA ;



	  ListaVector<String> ListaA;

	  ListaEnlazada<int> ListaEA;



	  ConjuntoLista<String> ConjuntoA;
	  ConjuntoLista<int> ConjuntoB;
	  ConjuntoLista<int> ConjuntoC;

	  ConjuntoEnlazado<String> ConjuntoEA;



	  PolinomioVector PolinomioA;
	  PolinomioVector PolinomioB;
	  PolinomioVector PolinomioC;

	  PolinomioLista PolinomioLA;

	  PolinomioEnlazado<int> PolinomioEA;

	  PolinomioPila PolinomioPilaA;



	  PilaVector<int> PilaA;

	  PilaLista<String>  PilaListaA;



	  ColaLista<String> ColaA;
	  PilaCola<int> PilaColaA;

public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
