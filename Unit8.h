//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Mask.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.DBChart.hpp>
#include <VCLTee.Series.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include "IniFiles.hpp"
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TPanel *client;
	TPanel *footer;
	TPanel *header;
	TImage *Image8;
	TImage *Image10;
	TImage *Image13;
	TImage *Image2;
	TPanel *downBorder;
	TPanel *leftBorder;
	TPanel *rightBorder;
	TPanel *topBorder;
	TPanel *Panel1;
	TLabel *Label1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TImage *Image1;
	TLabel *Label2;
	TGroupBox *GroupBox1;
	TEdit *Edit1;
	TPanel *Panel7;
	TPanel *Panel8;
	TPanel *Panel9;
	TImage *Image3;
	TImage *Image4;
	TLabel *Label3;
	TPanel *Panel10;
	void __fastcall Image13Click(TObject *Sender);
	void __fastcall Image13MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image13MouseLeave(TObject *Sender);
	void __fastcall headerMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Panel10Click(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Panel7MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel7MouseLeave(TObject *Sender);
	void __fastcall Panel9Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Panel3Click(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);


private:

public:		// User declarations
		TIniFile *Ini;
		String password;

	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
