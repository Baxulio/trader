//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"
#include "Unit9.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
bool close=true;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Image13Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Image13MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image10->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Image13MouseLeave(TObject *Sender)
{
Image10->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::headerMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
   if(Button == mbLeft)
		{
		long SC_DRAGMOVE = 0xF012;
		ReleaseCapture();
		SendMessage(Form8->Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormCreate(TObject *Sender)
{
Ini=new TIniFile(ExtractFilePath(ParamStr(0))+"settings.ini");
if(!Ini->SectionExists("User")){Ini->WriteString("User","password","admin");}
Form8->Height=230;
password=Ini->ReadString("User","password","Def");
Ini->Free();
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Panel10Click(TObject *Sender)
{
Form8->Height=370;
GroupBox1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Edit1Change(TObject *Sender)
{
if (Edit1->Text!="") {
	Panel7->Color=RGB(70,70,70);
}
else Panel7->Color=RGB(150,150,150);

if(Edit1->Text==password)
	{Image3->Visible=true;Image4->Visible=false; Panel9->Color=RGB(81,206,94);}
else {Image3->Visible=false;Image4->Visible=true; Panel9->Color=RGB(150,150,150);}

}
//---------------------------------------------------------------------------
void __fastcall TForm8::Panel7MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Edit1->PasswordChar='\0';
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Panel7MouseLeave(TObject *Sender)
{
Edit1->PasswordChar=L'x';
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Panel9Click(TObject *Sender)
{
close=false;
 if(Panel9->Color==RGB(81,206,94))
 {
	Cursor=crHourGlass;
	Form1->status=true;


	Form1->ADOConnection1->Connected=true;
	Form1->ADOQuery1->Active=true;
	Form1->ADOQuery1->Open();
	Form1->ADOQuery2->Active=true;
	Form1->ADOQuery2->Open();

	if(Form1->ADOQuery1->Active)Form1->Label3->Caption="+"+IntToStr(Form1->ADOQuery1->RecordCount);
	Form1->Image6Click(Form1);
	Form1->setTotalCount_Prince_Char();
	Form1->setNotarius();
	Form1->setPlanner();

	Form1->userAdmin->Visible=true;
	Form1->logOff->Visible=true;
	Form1->AlphaBlend=false;
	Cursor=crArrow;
	//Form1->Timer1->Enabled=true;

	Ini=new TIniFile(ExtractFilePath(ParamStr(0))+"settings.ini");
	Form1->Label77->Caption=Ini->ReadString("Last Operation","1","Def");
	Form1->Label76->Caption=Ini->ReadString("Last Operation","2","Def");
	Form1->Label75->Caption=Ini->ReadString("Last Operation","3","Def");
	Form1->Label58->Caption=Ini->ReadString("Last Operation","4","Def");
	Ini->Free();

	Form8->Close() ;
 }
 else
	{
	ShowMessage("First you should write the correct password !");
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm8::Label3Click(TObject *Sender)
{
Edit1->Text="";
Image3->Visible=false;
Image4->Visible=false;
Application->CreateForm(__classid(TForm9),&Form9);
Form9->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
if(close)Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Panel3Click(TObject *Sender)
{
   Cursor=crHourGlass;
	close=false;

	Form1->ADOConnection1->Connected=true;
	Form1->ADOQuery1->Active=true;
	Form1->ADOQuery1->Open();
	Form1->ADOQuery2->Active=true;
	Form1->ADOQuery2->Open();

	if(Form1->ADOQuery1->Active)Form1->Label3->Caption="+"+IntToStr(Form1->ADOQuery1->RecordCount);

	Form1->Image6Click(Form1);
	Form1->setTotalCount_Prince_Char();
	Form1->setNotarius();
	Form1->setPlanner();
	Form1->logOff->Visible=false;
	Form1->AlphaBlend=false;
	Cursor=crArrow;
	//Form1->Timer1->Enabled=true;
    Ini=new TIniFile(ExtractFilePath(ParamStr(0))+"settings.ini");
	Form1->Label77->Caption=Ini->ReadString("Last Operation","1","Def");
	Form1->Label76->Caption=Ini->ReadString("Last Operation","2","Def");
	Form1->Label75->Caption=Ini->ReadString("Last Operation","3","Def");
	Form1->Label58->Caption=Ini->ReadString("Last Operation","4","Def");
	Ini->Free();

	Form8->Close() ;
}
//---------------------------------------------------------------------------



void __fastcall TForm8::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
                   if(Key==vkReturn)Panel9Click( NewInstance());
}
//---------------------------------------------------------------------------

