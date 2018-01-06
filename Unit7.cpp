//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit7.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
 CppWebBrowser1->Navigate(StringToOleStr(Edit1->Text));


}
//---------------------------------------------------------------------------


void __fastcall TForm7::Image6Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"www.uybor.uz");
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image5Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"http://olx.uz/post-new-ad/");
}
//---------------------------------------------------------------------------

void __fastcall TForm7::CppWebBrowser1TitleChange(TObject *Sender, BSTR Text)
{
Edit1->Text=CppWebBrowser1->LocationURL;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image3Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"http://www.zor.uz/cat/nedvizhimost/");
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image1Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"http://kluch.uz/new-ad");
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image4Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"http://tom.uz/ru");
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image7Click(TObject *Sender)
{
 CppWebBrowser1->Navigate(L"http://www.list.uz/");

}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image8Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"http://shahar.uz/add/");

}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image2Click(TObject *Sender)
{
CppWebBrowser1->Navigate(L"http://dom.vsem.uz/");
}
//---------------------------------------------------------------------------


void __fastcall TForm7::Panel31Click(TObject *Sender)
{
if(Form1->status){
 Form1->ADOQuery1->Insert();
  try{
Application->CreateForm(__classid(TForm3),&Form3);
 Form3->Show();
}
catch(...)
{
Application->MessageBox(L"The Add form is already executed !", L"Planner", MB_OK + MB_ICONWARNING);
}
}
 else{
	 {ShowMessage("You don't have any permissions to add elements in Guest mode !");}
 }

}
//---------------------------------------------------------------------------

void __fastcall TForm7::Label15MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
 Label15->Font->Style = Label15->Font->Style << fsUnderline;
Label15->Font->Color=RGB(198, 30, 43);
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Label15MouseLeave(TObject *Sender)
{
	  Label15->Font->Style = Label15->Font->Style >> fsUnderline;
Label15->Font->Color=RGB(70, 70, 70);
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->webApp=false;
}
//---------------------------------------------------------------------------

