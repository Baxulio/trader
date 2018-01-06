//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TPageControl *PageControl1;
	TTabSheet *Obj;
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TTabSheet *TabSheet2;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TButton *Button1;
	TButton *Button2;
	TDBEdit *DBEdit1;
	TDBComboBox *DBComboBox1;
	TDBComboBox *DBComboBox2;
	TDBComboBox *DBComboBox3;
	TDBComboBox *DBComboBox4;
	TDBComboBox *DBComboBox5;
	TDBComboBox *DBComboBox6;
	TDBEdit *DBEdit2;
	TDBEdit *DBEdit3;
	TLabel *Label14;
	TDBEdit *DBEdit4;
	TDateTimePicker *DateTimePicker1;
	TPanel *Panel5;
	TPanel *Panel6;
	TDBMemo *DBMemo1;
	TDBEdit *DBEdit5;
	TDBEdit *DBEdit6;
	TDBEdit *DBEdit7;
	TDBComboBox *DBComboBox7;
	TLabel *Label15;
	TTabSheet *Image;
	TImage *Image1;
	TButton *Button3;
	TOpenPictureDialog *OpenPictureDialog1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	bool ok;
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
