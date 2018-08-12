//---------------------------------------------------------------------------


#include <conio.h>

#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

ConjuntoA.mostrar(StringGrid1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
ShowMessage(IntToStr(ConjuntoA.Cardinal()));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{ String x=(Edit1->Text);
ConjuntoA.inserta(x);
ConjuntoA.mostrar(StringGrid1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{

ListaA.MostrarListaEnStringGrid(StringGrid4);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
int x= StrToInt(InputBox("Inserta","Direccion: ","1"));
  String y=(InputBox("Inserta","Elemento: ","1"));
ListaA.Inserta(x,y);
ListaA.MostrarListaEnStringGrid(StringGrid4);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{int x=  StrToInt(InputBox("Inserta","Direccion: ","1"));
ListaA.Suprime(x);
ListaA.MostrarListaEnStringGrid(StringGrid4);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button12Click(TObject *Sender)
{
PolinomioA.Crear();
PolinomioA.Copy(PolinomioB);
PolinomioA.MostrarPolinomioEnStringGrid(StringGrid5,StringGrid6);
PolinomioA.MostrarPolinomioEnLabel(Label1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{

int x= StrToInt(Edit3->Text);
int y= StrToInt(Edit4->Text);
PolinomioA.Poner_Termino(x,y);
PolinomioA.MostrarPolinomioEnStringGrid(StringGrid5,StringGrid6);
PolinomioA.MostrarPolinomioEnLabel(Label1);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button14Click(TObject *Sender)
{
ShowMessage("el polinomio tiene "+IntToStr(PolinomioA.Num_De_Terminos())+" terminos");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
  ShowMessage("El polinomio es de grado: "+IntToStr(PolinomioA.Grado()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{ int x=StrToInt(Edit5->Text);
ShowMessage("El coeficiente del termino que tiene el exponente "+ IntToStr(x)+ " es: "+FloatToStr(PolinomioA.Coeficiente(x)) );
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{int x=StrToInt(Edit6->Text);
ShowMessage("El exponente del termino  "+IntToStr(x)+" es: "+IntToStr(PolinomioA.Get_Exponente(x)));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{


PolinomioB.Crear();
PolinomioB.MostrarPolinomioEnStringGrid(StringGrid7,StringGrid8);
PolinomioB.MostrarPolinomioEnLabel(Label3);
window(10,10,40,11);

   textcolor(BLACK);
   textbackground(WHITE);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{

double x= StrToFloat(Edit7->Text);
int y= StrToInt(Edit8->Text);
PolinomioB.Poner_Termino(x,y);
PolinomioB.MostrarPolinomioEnStringGrid(StringGrid7,StringGrid8);
PolinomioB.MostrarPolinomioEnLabel(Label3);
//PolinomioB.GraficarEnCanvas(Image1->Canvas);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{

PolinomioC.Sumar(PolinomioA,PolinomioB);
PolinomioC.MostrarPolinomioEnStringGrid(StringGrid9,StringGrid10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
PolinomioC.Restar(PolinomioA,PolinomioB);
PolinomioC.MostrarPolinomioEnStringGrid(StringGrid9,StringGrid10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
PolinomioC.Crear();
PolinomioC.MostrarPolinomioEnStringGrid(StringGrid9,StringGrid10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
PolinomioC.Multiplicar(PolinomioA,PolinomioB);
PolinomioC.MostrarPolinomioEnStringGrid(StringGrid9,StringGrid10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
PolinomioB.Derivar();
PolinomioB.MostrarPolinomioEnStringGrid(StringGrid7,StringGrid8);
PolinomioB.MostrarPolinomioEnLabel(Label3);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button25Click(TObject *Sender)
{
//ShowMessage(IntToStr(1));
//Form2->Visible=true;
//PolinomioB.GraficarEnCanvas(Form2->Canvas);
//PolinomioB.GraficarPolinomioPuntoPorPunto(Form2);
//->Canvas
PolinomioB.GraficarCanvas(Image1);
PolinomioB.MostrarIteraciones(StringGrid13);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
{ int x=StrToInt(InputBox("Calcular F(x)","X: ","0"));
ShowMessage(FloatToStr(PolinomioB.Calcular_Y(x)));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button27Click(TObject *Sender)
{
int x=PolinomioB.Potencia(0,2);
ShowMessage(IntToStr(x));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button28Click(TObject *Sender)
{

PilaA.Mostrar(StringGrid11);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button29Click(TObject *Sender)
{
PilaA.Meter(StrToInt(InputBox("Meter","Numero: ","1")));
PilaA.Mostrar(StringGrid11);
//PilaA.Mostrar(StringGrid11);
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Button32Click(TObject *Sender)
{ ShowMessage(IntToStr( ConjuntoA.Ordinal(StrToInt(Edit2->Text))));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button31Click(TObject *Sender)
{   int q=StrToInt(InputBox("recupera","direccion: ","1"));
String a=ListaA.Recupera(q);
ShowMessage((a));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender)
{
String x=(InputBox("suprime","elemenro: ","1"));
ConjuntoA.suprime(x);
ConjuntoA.mostrar(StringGrid1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button34Click(TObject *Sender)
{
int x=StrToInt(InputBox("Recupera direccion","elemento: ","1"));
ShowMessage(IntToStr(ListaA.Recupera_dir(x)));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button35Click(TObject *Sender)
{
if (PilaA.Vacia()) {
	ShowMessage("si");
}else{  ShowMessage("no");}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button36Click(TObject *Sender)
{
 String x=PilaA.Sacar();
  PilaA.Mostrar(StringGrid11);
  ShowMessage((x));

  }
//---------------------------------------------------------------------------

void __fastcall TForm1::Button37Click(TObject *Sender)
{   String x=PilaA.Cima();
  ShowMessage((x));


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button38Click(TObject *Sender)
{
ShowMessage(IntToStr(ListaA.Primero() ));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button39Click(TObject *Sender)
{

//PilaListaA.Crear();
PilaListaA.MostrarPilaLista(StringGrid12);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button40Click(TObject *Sender)
{
PilaListaA.Meter((InputBox("Meter","Numero: ","1")));
PilaListaA.MostrarPilaLista(StringGrid12);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button41Click(TObject *Sender)
{
String x=PilaListaA.Sacar();
  PilaListaA.MostrarPilaLista(StringGrid12);
  ShowMessage((x));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button42Click(TObject *Sender)
{

if (PilaListaA.Vacia()) {
	ShowMessage("si");
}else{  ShowMessage("no");}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button43Click(TObject *Sender)
{
String x=PilaListaA.Cima();
  ShowMessage((x));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button44Click(TObject *Sender)
{
  //	MemoriaA = new SMemoria;
   // MemoriaA.Crear();
	MemoriaA.mostrar(300,10,Image2->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button45Click(TObject *Sender)
{
int x=StrToInt(Edit9->Text);
MemoriaA.PedirEspacio(x);
MemoriaA.mostrar(300,10,Image2->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button46Click(TObject *Sender)
{
int x=StrToInt(Edit10->Text);
MemoriaA.LiberarEspacio(x);
MemoriaA.mostrar(300,10,Image2->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button47Click(TObject *Sender)
{
int x=StrToInt(Edit11->Text);
int y=StrToInt(Edit12->Text);
String z=(Edit13->Text);
MemoriaA.PonerDato(x,y,z);
MemoriaA.mostrar(300,10,Image2->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button51Click(TObject *Sender)
{
// ListaEA.Crear();
 ListaEA.Mostrar(300,10,Image3->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button52Click(TObject *Sender)
{
int x=StrToInt(Edit14->Text);
int y=StrToInt(Edit15->Text);
ListaEA.Inserta(x,y);
ListaEA.Mostrar(300,10,Image3->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button53Click(TObject *Sender)
{
int x=StrToInt(Edit16->Text);
int y=StrToInt(Edit17->Text);
ListaEA.Modifica(x,y);
ListaEA.Mostrar(300,10,Image3->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button54Click(TObject *Sender)
{
int x=StrToInt(Edit18->Text);

ListaEA.Suprime(x);
ListaEA.Mostrar(300,10,Image3->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button55Click(TObject *Sender)
{ int x=StrToInt(Edit19->Text);
ShowMessage(IntToStr(ListaEA.Localiza(x)));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button57Click(TObject *Sender)
{
int x=StrToInt(InputBox("Eliminar","Elemento: ",""));
ListaEA.EliminaDato(x);
ListaEA.Mostrar(300,10,Image3->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button50Click(TObject *Sender)
{
PolinomioLA.Crear();
PolinomioLA.MostrarPolinomioEnLabel(Label2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button58Click(TObject *Sender)
{
PolinomioLA.Poner_Termino(StrToInt(Edit20->Text),StrToInt(Edit21->Text));
PolinomioLA.MostrarPolinomioEnLabel(Label2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button60Click(TObject *Sender)
{
  double a=3.5495;
  double b=a;
 
  b=floor(a);
 // b=floorf(b);
  ShowMessage("N= "+FloatToStr(a)+" redondeo con floor= "+FloatToStr(b) );
  b=ceil(a);
  ShowMessage("N= "+FloatToStr(a)+" redondeo con ceil= "+FloatToStr(b) );
 // b=Min(10,20);
  //b=2*pow()

  b=SimpleRoundTo(a,-1);
  ShowMessage("N= "+FloatToStr(a)+" redondeo con SimpleRounTo= "+FloatToStr(b) );
  }
//---------------------------------------------------------------------------


void __fastcall TForm1::Button62Click(TObject *Sender)
{
PolinomioB.Integrar();
PolinomioB.MostrarPolinomioEnLabel(Label3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button61Click(TObject *Sender)
{
int x=StrToFloat(Edit23->Text);       //(InputBox("Area","Limite inferior",""));

int y=StrToFloat(Edit22->Text);         //(InputBox("Area","Limite superior",""));
//PolinomioB.GraficarArea(Image1->Canvas,x,y);
 ShowMessage("El Area bajo la curva es: "+FloatToStr(PolinomioB.pintar(Image1,x,y)));

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button63Click(TObject *Sender)
{
//PolinomioEA.Crear();
PolinomioEA.Mostrar(Image4->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button64Click(TObject *Sender)
{
 PolinomioEA.PonerTermino(StrToInt(Edit24->Text),StrToInt(Edit25->Text));
 PolinomioEA.Mostrar(Image4->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button65Click(TObject *Sender)
{
//ConjuntoEA.Crear();
ConjuntoEA.Mostrar(Image5->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button66Click(TObject *Sender)
{
ConjuntoEA.Inserta((Edit26->Text));
ConjuntoEA.Mostrar(Image5->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button67Click(TObject *Sender)
{

ConjuntoA.Mostrar(StrToInt(Edit27->Text),StrToInt(Edit35->Text),Image6->Canvas);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button68Click(TObject *Sender)
{
int x=StrToInt(Edit28->Text);

int y=StrToInt(Edit29->Text);
PilaA.Mostrar(x,y,Image7->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button69Click(TObject *Sender)
{

int x=StrToInt(Edit30->Text);

int y=StrToInt(Edit31->Text);
PilaListaA.Mostrar(x,y,Image8->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button70Click(TObject *Sender)
{
PolinomioB.Mostrar(0,0,Image1->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button71Click(TObject *Sender)
{
 int x=StrToInt(Edit32->Text);

 int y=StrToInt(Edit33->Text);
 PolinomioLA.Mostrar(x,y,Image9->Canvas);
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Button8Click(TObject *Sender)
{
PolinomioPilaA.Crear();


PolinomioB.Crear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
PolinomioPilaA.Poner_Termino(StrToInt(Edit36->Text),StrToInt(Edit37->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
PolinomioPilaA.Mostrar(0,0,Image11->Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button73Click(TObject *Sender)
{

ColaA.Mostrar(StringGrid2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button74Click(TObject *Sender)
{
ColaA.Poner((Edit38->Text));
ColaA.Mostrar(StringGrid2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button75Click(TObject *Sender)
{

ShowMessage(IntToStr(ListaA.Fin()) );
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button76Click(TObject *Sender)
{
String x=ColaA.Sacar();
 Label6->Caption=(x);
 ColaA.Mostrar(StringGrid2);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button77Click(TObject *Sender)
{
PilaA.Invertir();
PilaA.Mostrar(StringGrid11);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button79Click(TObject *Sender)
{
int x = StrToInt(InputBox("introducir dato","dato =","10"));
  PilaColaA.meter(x);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button80Click(TObject *Sender)
{

  int x= PilaColaA.sacar();
   Label7->Caption=IntToStr(x);
  }
//---------------------------------------------------------------------------

