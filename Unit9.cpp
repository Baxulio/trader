//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit8.h"
#include "IniFiles.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Edit2Change(TObject *Sender)
{
if(Edit2->Text==Form8->password)
{
	Image1->Visible=false; Image2->Visible=true; Panel2->Color=RGB(81,206,94);
}
else
{
	Image1->Visible=true; Image2->Visible=false; Panel2->Color=RGB(150,150,150);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Panel2Click(TObject *Sender)
{
if(Panel2->Color==RGB(81,206,94))
 {
	Form8->Ini=new TIniFile(ExtractFilePath(ParamStr(0))+"settings.ini");
	Form8->Ini->WriteString("User","password",Edit1->Text);
	Form8->password=Form8->Ini->ReadString("User","password","Def");
	Form8->Ini->Free();
	Form9->Close();
 }
 else
	{ShowMessage("First you should write the correct old passwod !");}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Panel3Click(TObject *Sender)
{
Form9->Close();
}
//---------------------------------------------------------------------------

