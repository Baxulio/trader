//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.MPlayer.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TStaticText *StaticText1;
	TTimer *Timer1;
	TDateTimePicker *TimePicker;
	TButton *AlarmBttn;
	TButton *CancelAlarmBttn;
	TOpenDialog *AlarmOpenDialog;
	TMediaPlayer *MediaPlayer;
	TTimer *Timer2;
	TMemo *Memo1;
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TStringGrid *StringGrid1;
	TGroupBox *GroupBox3;
	TPanel *Panel1;
	TPanel *Panel6;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label6;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TLabel *Label7;
	TLabel *Label8;
	TEdit *Edit7;
	TEdit *Edit8;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall AlarmBttnClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall CancelAlarmBttnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations

	__fastcall TForm5(TComponent* Owner);
	bool bIsTimerOn;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
