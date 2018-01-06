//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "SHDocVw_OCX.h"
#include <Vcl.OleCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.GIFImg.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <SHDocVw.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TCppWebBrowser *CppWebBrowser1;
	TEdit *Edit1;
	TButton *Button1;
	TPanel *Panel1;
	TScrollBox *ScrollBox1;
	TPanel *Panel4;
	TImage *Image1;
	TPanel *Panel3;
	TImage *Image2;
	TPanel *Panel5;
	TImage *Image3;
	TPanel *Panel6;
	TImage *Image4;
	TPanel *Panel7;
	TImage *Image5;
	TPanel *Panel8;
	TImage *Image6;
	TPanel *Panel9;
	TImage *Image7;
	TPanel *Panel10;
	TImage *Image8;
	TPanel *Panel11;
	TPanel *Panel12;
	TImage *Image9;
	TLabel *Label1;
	TPanel *Panel13;
	TPanel *Panel15;
	TPanel *Panel20;
	TImage *Image10;
	TPanel *Panel21;
	TPanel *Panel22;
	TPanel *Panel23;
	TPanel *Panel24;
	TLabel *Label2;
	TDBEdit *DBEdit10;
	TPanel *Panel25;
	TDBEdit *DBEdit8;
	TDBEdit *DBEdit3;
	TPanel *Panel27;
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TImage *Image14;
	TDBEdit *DBEdit2;
	TDBEdit *DBEdit4;
	TDBEdit *DBEdit5;
	TPanel *Panel14;
	TSplitter *Splitter1;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label7;
	TPanel *Panel28;
	TLabel *Label8;
	TLabel *Label9;
	TDBEdit *DBEdit6;
	TPanel *Panel29;
	TLabel *Label10;
	TDBEdit *DBEdit7;
	TPanel *Panel30;
	TLabel *Label11;
	TDBEdit *DBEdit9;
	TLabel *Label12;
	TDBEdit *DBEdit11;
	TPanel *Panel16;
	TLabel *Label3;
	TDBEdit *DBEdit12;
	TPanel *Panel17;
	TLabel *Label13;
	TDBEdit *DBEdit13;
	TPanel *Panel18;
	TLabel *Label14;
	TDBEdit *DBEdit14;
	TPanel *Panel19;
	TImage *Image15;
	TPanel *Panel31;
	TLabel *Label6;
	TScrollBox *ScrollBox2;
	TLabel *Label15;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall CppWebBrowser1TitleChange(TObject *Sender, BSTR Text);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall Image8Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Panel31Click(TObject *Sender);
	void __fastcall Label15MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label15MouseLeave(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
