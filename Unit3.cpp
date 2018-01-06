//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
#include "Vcl.Imaging.jpeg.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
ok=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
if(mrOk==MessageDlg("Everything will be lost!", mtWarning,
				TMsgDlgButtons() <<mbOK<<mbCancel , 0)){

			       Close();
		}

}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->ADOQuery1->CancelUpdates();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
ok=true;
DBEdit2->Text=DateTimePicker1->DateTime.DateTimeString() ;
Form1->ADOQuery1->Post();
Form1->Label3->Caption="+"+IntToStr((StrToInt(Form1->Label3->Caption)+1));
Form1->setTotalCount_Prince_Char();

Form1->Label77->Caption="+ Added an element ["+DBEdit2->Text+"]:";
Form1->Label76->Caption="     - Address: "+DBEdit1->Text;
Form1->Label75->Caption="     - "+DBComboBox6->Text+"/"+DBComboBox5->Text+"/"+DBComboBox4->Text;
Form1->Label58->Caption="     - Phone: "+DBEdit6->Text;

if(Form1->PageControl1->ActivePage==Form1->PageControl1->Pages[0])
{
String s="SELECT * FROM flat";
Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Clear();
Form1->ADOQuery1->SQL->Add(s);
Form1->ADOQuery1->Open();
}
else if(Form1->PageControl1->ActivePage==Form1->PageControl1->Pages[1])
{
String s="SELECT * FROM flat WHERE ÂÈÄ_ÇÀÏÐÎÑÀ='Sale'";
Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Clear();
Form1->ADOQuery1->SQL->Add(s);
Form1->ADOQuery1->Open();
}
else if (Form1->PageControl1->ActivePage==Form1->PageControl1->Pages[2]) {
String s="SELECT * FROM flat WHERE ÂÈÄ_ÇÀÏÐÎÑÀ='Buy'";
Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Clear();
Form1->ADOQuery1->SQL->Add(s);
Form1->ADOQuery1->Open();
	 }
else
{
String s="SELECT * FROM flat WHERE ÂÈÄ_ÇÀÏÐÎÑÀ='Giving rent' OR ÂÈÄ_ÇÀÏÐÎÑÀ='Taking rent'";
Form1->ADOQuery1->Close();
Form1->ADOQuery1->SQL->Clear();
Form1->ADOQuery1->SQL->Add(s);
Form1->ADOQuery1->Open();
}
//Sale
//Buy
//Giving rent
//Taking rent
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
TDateTime dt=Now();
DateTimePicker1->DateTime=dt;

if(!(TBlobField*)Form1->ADOQuery1->FieldByName("photo1")->IsNull){

 TMemoryStream* strm = new TMemoryStream;
 TJPEGImage *ptJpg=new TJPEGImage;
 ((TGraphicField*)Form1->ADOQuery1->FieldByName("photo1"))->SaveToStream(strm);
 strm->Seek(0,0);
 if (*(Word*)strm->Memory == 0xD8FF) Image1->Picture->Graphic=ptJpg;
 Image1->Picture->Graphic->LoadFromStream(strm);
		delete strm;
		delete ptJpg;
	  }

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
if(OpenPictureDialog1->Execute())
 Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);

	   if(Image1->Picture->Graphic != 0)
	   {
	   TMemoryStream* strm2 = new TMemoryStream();
	   Image1->Picture->Graphic->SaveToStream(strm2);
	   ((TGraphicField*)Form1->ADOQuery1->FieldByName("photo1"))->LoadFromStream(strm2);

	   delete strm2;


	   }
}
//---------------------------------------------------------------------------

