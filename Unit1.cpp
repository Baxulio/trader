//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Unit1.h"
//#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
#include "Unit14.h"
#include "TraderPCH1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "SHDocVw_OCX"
//#pragma link "ShockwaveFlashObjects_OCX"
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
bool __fastcall TForm1::checkInternet()
{
try
	 {
	 IdHTTP1->ConnectTimeout = 1000;
	 IdHTTP1->ReadTimeout = 1000;

	   IdHTTP1->Get("http://www.test.uz");
	   //MessageBox(0, L"Соединение с Интернет есть", L"Информация", MB_OK + MB_ICONINFORMATION);
	   Label11->Caption="connected";
	   Label11->Color=clLime;
	   return true;
	 }
   catch(EIdHTTPProtocolException &E)
	 {
		 // ....
	 Label11->Caption="disconnected";
	 Label11->Color=clRed;
	 return false;
	 }
   catch(EIdSocketError &E)
	 {
	   //ShowMessage(E.LastError);
	  Label11->Caption="disconnected";
	 Label11->Color=clRed;
	 return false;
	 }
   catch(...)
   {
	 //ShowMessage(E.LastError);
	 MessageBox(0, L"No Internet connection", L"No Internet", MB_OK + MB_ICONINFORMATION);
	  Label11->Caption="disconnected";
	 Label11->Color=clRed;
	 return false;
   }
}
void __fastcall TForm1::setTotalCount_Prince_Char()
{
Label61->Caption=IntToStr(StrToInt(Label3->Caption));                       //" records";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM flat WHERE Query='Sale'");
ADOQuery1->Open();
Label62->Caption=IntToStr(ADOQuery1->RecordCount);//+" records to buy";

ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM flat WHERE Query='Buy'");
ADOQuery1->Open();
Label63->Caption=IntToStr(ADOQuery1->RecordCount);//+" records to sale";

ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM flat WHERE Query='Giving rent' OR Query='Taking rent'");
ADOQuery1->Open();
Label64->Caption=IntToStr(ADOQuery1->RecordCount);//+" records to give/take rent";


ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM flat WHERE Cost=(SELECT MAX(Cost) FROM flat)");
ADOQuery1->Open();

Label65->Caption=ADOQuery1Cost->Value.operator UnicodeString();

ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM flat WHERE Cost=(SELECT MIN(Cost) FROM flat)");
ADOQuery1->Open();

Label66->Caption=ADOQuery1Cost->Value.operator UnicodeString();

ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT * FROM flat");
ADOQuery1->Open();
double s=0;
for(int i=1; i<=ADOQuery1->RecordCount; i++)
		{
			ADOQuery1->RecNo=i;
			s+=ADOQuery1Cost->Value.operator double();   }

Label67->Caption=FloatToStr(s);

}
void __fastcall TForm1::setNotarius()
{
	Label68->Caption=IntToStr(ADOQuery2->RecordCount);
}
void __fastcall TForm1::setPlanner(){}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
status=false;                                                         //гость

Panel31->Visible=false;
base->Visible=false;
stat->Visible=false;
notarius->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image8MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image7->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8MouseLeave(TObject *Sender)
{
Image7->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
if(Panel8->Color!=RGB(66,131,222))
	Panel8->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7MouseLeave(TObject *Sender)
{
  if(Panel8->Color!=RGB(66,131,222))
		Panel8->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image12MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{

		Image11->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12MouseLeave(TObject *Sender)
{
Image11->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image10->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13MouseLeave(TObject *Sender)
{
Image10->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
SendMessage(Handle, WM_SYSCOMMAND, SC_MINIMIZE, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)                                        			//menu  Base CLICK
{
if(Panel8->Color!=RGB(66,131,222))
{
Panel8->Color=RGB(66,131,222);
Panel5->Color=RGB(90,90,90);
Panel13->Color=RGB(90,90,90);
Panel11->Color=RGB(90,90,90);

base->Visible=true;
					   															//680-width , client
Panel31->Visible=true;
Panel30->Visible=1;
Panel32->Visible=1;
Panel28->Visible=1;
ComboBox1->Clear();
ComboBox1->Items->AddStrings(ADOQuery1->FieldList->ToStringArray());
ComboBox1->Items->Delete(ComboBox1->Items->IndexOf("Photo1"));
ComboBox1->Items->Delete(ComboBox1->Items->IndexOf("Photo2"));
ComboBox1->Items->Delete(ComboBox1->Items->IndexOf("Photo3"));
ComboBox1->Items->Delete(ComboBox1->Items->IndexOf("Photo4"));
ComboBox1->Items->Delete(ComboBox1->Items->IndexOf("Photo5"));

notarius->Visible=false;
Main->Visible=false;
}																			//edit menu
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
         if(Button == mbLeft)
		{
		long SC_DRAGMOVE = 0xF012;
		ReleaseCapture();
		SendMessage(Form1->Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SettingsOverMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
SettingsOn->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SettingsOverMouseLeave(TObject *Sender)
{
SettingsOn->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CalcClick(TObject *Sender)
{
//ShellExecute(Handle, L"open",L"1.htm",NULL,NULL,SW_RESTORE);
WinExec("calc.exe",0);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
if(Panel5->Color!=RGB(66,131,222))
	Panel5->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6MouseLeave(TObject *Sender)
{
  if(Panel5->Color!=RGB(66,131,222))
		Panel5->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
if(Panel5->Color!=RGB(66,131,222))
{
Panel5->Color=RGB(66,131,222);
Panel8->Color=RGB(90,90,90);
Panel13->Color=RGB(90,90,90);
Panel11->Color=RGB(90,90,90);

Main->Visible=true;
base->Visible=false;                                                              					//680-width , client
notarius->Visible=false;
Panel31->Visible=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image18MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
if(Panel13->Color!=RGB(66,131,222))
	Panel13->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image18MouseLeave(TObject *Sender)
{
if(Panel13->Color!=RGB(66,131,222))
		Panel13->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image18Click(TObject *Sender)
{
if(Panel13->Color!=RGB(66,131,222))
{
 Panel13->Color=RGB(66,131,222);
Panel8->Color=RGB(90,90,90);
Panel5->Color=RGB(90,90,90);
Panel11->Color=RGB(90,90,90);

base->Visible=false;                                                              					//680-width , client

Panel31->Visible=true;
Panel30->Visible=false;
Panel32->Visible=false;
Panel28->Visible=false;
ComboBox1->Clear();
ComboBox1->Items->AddStrings(ADOQuery2->FieldList->ToStringArray());

Main->Visible=false;
notarius->Visible=true;

}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
if(!plan){
Application->CreateForm(__classid(TForm5),&Form5);
Form5->Show();
plan=true;
}
else
{

		Application->MessageBox(L"Planner is already executed !", L"Planner", MB_OK + MB_ICONWARNING);
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Panel11->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16MouseLeave(TObject *Sender)
{
		Panel11->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image23MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Panel18->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image23MouseLeave(TObject *Sender)
{
	Panel18->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image19MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
  	Panel17->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image19MouseLeave(TObject *Sender)
{
		Panel17->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image26MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image25->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image26MouseLeave(TObject *Sender)
{
Image25->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image26Click(TObject *Sender)
{
if(navigation->Width==76)navigation->Width=180;
else navigation->Width=76;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image19Click(TObject *Sender)

{
if(!checkInternet()){Application->MessageBox(L"Sorry, but I can't connect internet :(", L"No Internet connection!", MB_OK + MB_ICONWARNING); return;}
if(!webApp ){
Application->CreateForm(__classid(TForm7),&Form7);
Form7->Show();
webApp=true;
}
else
{
Application->MessageBox(L"Web::App is already executed !", L"Web::App", MB_OK + MB_ICONWARNING);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PageControl1Change(TObject *Sender)
{
if(PageControl1->ActivePage==PageControl1->Pages[0])
{
String s="SELECT * FROM flat";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
else if(PageControl1->ActivePage==PageControl1->Pages[1])
{
String s="SELECT * FROM flat WHERE Query='Sale'";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
else if (PageControl1->ActivePage==PageControl1->Pages[2]) {
String s="SELECT * FROM flat WHERE Query='Buy'";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
	 }
else
{
String s="SELECT * FROM flat WHERE Query='Giving rent' OR Query='Taking rent'";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
//Sale
//Buy
//Giving rent
//Taking rent
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
if(Panel8->Color==RGB(66,131,222) && base->Visible)
{
if(PageControl1->ActivePage==PageControl1->Pages[0])
{
String s="SELECT * FROM flat WHERE District LIKE '"+Edit1->Text+"%'"+"OR Address LIKE '"+Edit1->Text+"%'"+"OR Owner LIKE '"+Edit1->Text+"%'"+"OR Status LIKE '"+Edit1->Text+"%'"+"OR Type LIKE'"+Edit1->Text+"%'"+"OR Query LIKE'"+Edit1->Text+"%'";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
else if(PageControl1->ActivePage==PageControl1->Pages[1])
{
String s="SELECT * FROM flat WHERE Query='Sale' AND District LIKE'"+Edit1->Text+"%'"+"OR (Query='Sale' AND Address LIKE'"+Edit1->Text+"%'"+"OR (Query='Sale' AND Owner LIKE'"+Edit1->Text+"%'"+"OR (Query='Sale' AND Status LIKE'"+Edit1->Text+"%'"+"OR (Query='Sale' AND Type LIKE'"+Edit1->Text+"%'";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
else if (PageControl1->ActivePage==PageControl1->Pages[2]) {
String s="SELECT * FROM flat WHERE Query='Buy' AND District LIKE'"+Edit1->Text+"%'"+"OR (Query='Buy' AND Address LIKE'"+Edit1->Text+"%'"+"OR (Query='Buy' AND Owner LIKE'"+Edit1->Text+"%'"+"OR (Query='Buy' AND Status LIKE'"+Edit1->Text+"%')"+"OR (Query='Buy' AND Type LIKE'"+Edit1->Text+"%')";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
	 }
else
{
String s="SELECT * FROM flat WHERE Query LIKE 'rent%' AND District LIKE'"+Edit1->Text+"%'"+"OR (Query LIKE 'rent%' AND Address LIKE'"+Edit1->Text+"%'"+"OR (Query LIKE 'rent%' AND Owner LIKE'"+Edit1->Text+"%'"+"OR (Query LIKE 'rent%' AND Status LIKE'"+Edit1->Text+"%'"+"OR (Query LIKE 'rent%' AND Type LIKE'"+Edit1->Text+"%'";
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
}
else if(Panel13->Color==RGB(66,131,222) && notarius->Visible)
{
String s="SELECT * FROM nota WHERE Name LIKE '"+Edit1->Text+"%'"+"OR Location LIKE '"+Edit1->Text+"%'"+"OR Responsible LIKE '"+Edit1->Text+"%'"+"OR Mobile_phone LIKE '"+Edit1->Text+"%'"+"OR Office_phone LIKE'"+Edit1->Text+"%'";
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add(s);
ADOQuery2->Open();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
if(Panel8->Color==RGB(66,131,222) && base->Visible)
{
if(PageControl1->ActivePage==PageControl1->Pages[0])
{
String s="SELECT * FROM flat ORDER BY "+ComboBox1->Text;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
else if(PageControl1->ActivePage==PageControl1->Pages[1])
{
String s="SELECT * FROM flat WHERE Query='Sale' ORDER BY "+ComboBox1->Text;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
else if (PageControl1->ActivePage==PageControl1->Pages[2]) {
String s="SELECT * FROM flat WHERE Query='buy' ORDER BY "+ComboBox1->Text;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
	 }
else
{
String s="SELECT * FROM flat WHERE Query='Giving rent' OR Query='Taking rent' ORDER BY "+ComboBox1->Text;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add(s);
ADOQuery1->Open();
}
}
else if(Panel13->Color==RGB(66,131,222) && notarius->Visible)
{
String s="SELECT * FROM nota ORDER BY "+ComboBox1->Text;
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add(s);
ADOQuery2->Open();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image32MouseLeave(TObject *Sender)
{
Image31->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image32MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image31->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image38MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image37->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image38MouseLeave(TObject *Sender)
{
Image37->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image38Click(TObject *Sender)
{
if(status){

 String cap= "Are you sure to delete this element  : "+ DBEdit2->Text+ " :: " +DBEdit7->Text+ " :: " +DBEdit4->Text +" ::-> " +DBEdit3->Text;

wchar_t *temp=new wchar_t[cap.Length()+1];
StringToWideChar(cap,temp,cap.Length()+1);

if (Application->MessageBox(temp, L"Deleting !!!", MB_YESNO + MB_ICONQUESTION) != IDYES)
{
			delete temp;
			return;
}
else	{
			ADOQuery1->DeleteRecords(arCurrent);
			Label3->Caption="+"+IntToStr((StrToInt(Label3->Caption)-1));
			setTotalCount_Prince_Char();

			Label77->Caption="+ Deleted an element ["+ Date().DateString()+Time().TimeString() +"]:";
			Label76->Caption="     - Address: "+DBEdit3->Text;
			Label75->Caption="     - "+DBEdit5->Text+"/"+DBEdit7->Text+"/"+DBEdit4->Text;
			Label58->Caption="     - Phone: "+DBEdit6->Text;

			delete temp;
			}
 }
 else{
	 {ShowMessage("You don't have any permissions to delete elements in Guest mode !");}
 }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image32Click(TObject *Sender)
{
 if(status){
 ADOQuery1->Insert();
 Application->CreateForm(__classid(TForm3),&Form3);
 Form3->ShowModal();
 }
 else{
	 {ShowMessage("You don't have any permissions to add elements in Guest mode !");}
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image41MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image40->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image41MouseLeave(TObject *Sender)
{
Image40->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image41Click(TObject *Sender)
{
if(status){
 ADOQuery1->Edit();
Application->CreateForm(__classid(TForm3),&Form3);
 Form3->ShowModal();
 }
 else{
	 {ShowMessage("You don't have any permissions to edit elements in Guest mode !");}
 }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image35Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm4),&Form4);
Form4->frxReport1->ShowReport();
Form4->frxReport1->Export(Form4->frxPDFExport1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image34Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm4),&Form4);
 Form4->frxReport1->ShowReport();
Form4->frxReport1->Export(Form4->frxCSVExport1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image33Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm4),&Form4);
 Form4->frxReport1->ShowReport();
Form4->frxReport1->Export(Form4->frxRTFExport1);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image23Click(TObject *Sender)
{
if(!templMaker){
Application->CreateForm(__classid(TForm6),&Form6);
Form6->ShowModal();
templMaker=true;
}
else
{
Application->MessageBox(L"Template Maker is already executed !", L"Template Maker", MB_OK + MB_ICONWARNING);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image60MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image35->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image60MouseLeave(TObject *Sender)
{
Image35->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image60Click(TObject *Sender)
{
 Application->CreateForm(__classid(TForm10),&Form10);
Form10->ShowModal();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


void __fastcall TForm1::DBGrid4CellClick(TColumn *Column)
{
if(!(TBlobField*)ADOQuery1->FieldByName("photo1")->IsNull){

 TMemoryStream* strm = new TMemoryStream;
 TJPEGImage *ptJpg=new TJPEGImage;
 ((TGraphicField*)ADOQuery1->FieldByName("photo1"))->SaveToStream(strm);
 strm->Seek(0,0);
 if (*(Word*)strm->Memory == 0xD8FF) Image33->Picture->Graphic=ptJpg;
 Image33->Picture->Graphic->LoadFromStream(strm);
		delete strm;
		delete ptJpg; Image33->Visible = true;
	  }
		  else
		  Image33->Visible = false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{
//TXMLDocument *XMLDocument =new TXMLDocument(this);
//try
 //{
	//XMLDocument->Active = true;
	//XMLDocument->Encoding = "UTF-16";
   // XMLDocument->Options = XMLDocument->Options << doNodeAutoIndent;
   // XMLDocument->LoadFromFile("База рыб.txt");

 /*	IXMLNode *nodRoot = XMLDocument1->DocumentElement;

	IXMLNode *nodElement;
	int n=nodRoot->ChildNodes->Count;
	StringGrid1->RowCount=1;

		for (int i = 0; i < n; i++)
		{
			nodElement = nodRoot->ChildNodes->Nodes[i];
			String name = nodElement->GetAttribute("name");
			StringGrid1->Cells[0][i+1]=name;
			String vid = nodElement->GetAttribute("vid");
			StringGrid1->Cells[1][i+1]=vid;
			String ves = nodElement->GetAttribute("ves");
			StringGrid1->Cells[2][i+1]=ves;
			String sreda = nodElement->GetAttribute("sreda");
			StringGrid1->Cells[3][i+1]=sreda;
			String sem = nodElement->GetAttribute("sem");
			StringGrid1->Cells[4][i+1]=sem;
			StringGrid1->RowCount++;
		}

	StringGrid1->FixedRows=1;
	StringGrid1->RowCount--;
	MessageBox(0,L"Загрузка завершена!!!",L"Успешно.",MB_OK);          */
 //}
// __finally{ delete XMLDocument; }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::userAdminClick(TObject *Sender)
{
Application->CreateForm(__classid(TForm9),&Form9);
Form9->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::userGuestClick(TObject *Sender)
{
this->AlphaBlend=true;
Form8->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::logOffClick(TObject *Sender)
{
	AlphaBlend=true;
	ADOConnection1->Connected=false;
	ADOQuery1->Active=false;
	ADOQuery2->Active=false;
	status=false;
	userAdmin->Visible=false;

	Form8->Edit1->Text="";
	Form8->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::logOffMouseMove(TObject *Sender, TShiftState Shift, int X,
		 int Y)
{
 logOff->Font->Style = logOff->Font->Style << fsUnderline;
logOff->Font->Color=RGB(198, 30, 43);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::logOffMouseLeave(TObject *Sender)
{
 logOff->Font->Style = logOff->Font->Style >> fsUnderline;
logOff->Font->Color=RGB(70, 70, 70);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::rader1Click(TObject *Sender)
{
if(!this->Visible)Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Abort1Click(TObject *Sender)
{

try
{
	Form5->bIsTimerOn=false;
	TrayIcon1->Hint="The plan has been aborted!";
	Form5->Show();
}
catch(...)
{
	ShowMessage("No plans to abort!");
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CloseTrader1Click(TObject *Sender)
{
Show();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrayIcon1DblClick(TObject *Sender)
{
if(!this->Visible)Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image56Click(TObject *Sender)
{
if(!plan)Application->CreateForm(__classid(TForm5),&Form5);
Form5->Show();
Form5->Edit1->Text=DBEdit9->Text;
Form5->Edit2->Text=DBEdit6->Text;
Form5->Edit3->Text=DBEdit5->Text;
Form5->Edit4->Text=DBEdit3->Text;
Form5->Edit5->Text=DBEdit10->Text;
Form5->Edit6->Text=DBEdit4->Text;
Form5->Edit7->Text=DBEdit7->Text;
Form5->Edit8->Text=DBEdit2->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
//if(status){
//	String *s=new String[18];
//
//	s[1]=ADOQuery1Address->Value;
//	s[2]=ADOQuery1Comment->Value;
//	s[3]=ADOQuery1Cost->Value;
//	s[4]=ADOQuery1District->Value;
//	s[5]=ADOQuery1E_mail->Value;
//	s[6]=ADOQuery1Owner->Value;
//	s[7]=ADOQuery1Phone->Value;
//	s[8]=ADOQuery1Query->Value;
//	s[9]=ADOQuery1Reg_data->Value;
//	s[10]=ADOQuery1Rooms->Value;
//	s[11]=ADOQuery1Square->Value;
//	s[12]=ADOQuery1Status->Value;
//	s[13]=ADOQuery1Storey->Value;
//	s[14]=ADOQuery1Storeys->Value;
//	//bool s15=ADOQuery1Trading->Value;
//	s[16]=ADOQuery1Type->Value;
//	//s[17]=ADOQuery1Viewed->Value;
//
//
//	ADOQuery1->Close();
//ADOQuery1->SQL->Clear();
//ADOQuery1->SQL->Add("INSERT INTO operated (Address,Comment,Cost,District,E_mail,Owner,Phone,Query,Reg_data,Rooms,Square,Status,Storey,Storeys,Trading,Type,Viewed) values ("+s[1]+","+s[2]+","+s[3]+","+s[4]+","+s[5]+","+s[6]+","+s[7]+","+s[8]+","+s[9]+","+s[10]+","+s[11]+","+s[12]+","+s[13]+","+s[14]+","+s[16]+","+")");
////ADOQuery1->SQL->Add("INSERT INTO operated (photo1) values ")
//ADOQuery1->ExecSQL();
//ADOQuery1->Open();
//	delete s;
//																	  int rn=ADOQuery1->RecNo;
// ADOQuery1->Close();
//ADOQuery1->SQL->Clear();
//ADOQuery1->SQL->Add("INSERT INTO oper SELECT * FROM flat WHERE Id='"+IntToStr(rn)  +"' ");
//ADOQuery1->Open();
//}
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Panel6MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Panel109->Color=RGB(66,131,222);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel6MouseLeave(TObject *Sender)
{
 Panel109->Color=RGB(90,90,90);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Panel6Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm11),&Form11);
Form11->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//checkInternet();
Label78->Caption=Date().DateString();
Label79->Caption=Time().TimeString();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Panel87MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Panel87->Color=RGB(70, 70, 70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel87MouseLeave(TObject *Sender)
{
Panel87->Color=RGB(255, 135, 92);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel86MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
		 Panel86->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel86MouseLeave(TObject *Sender)
{
		 Panel86->Color=RGB(66,131,222);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel85MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	   Panel85->Color=RGB(70,70,70);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel85MouseLeave(TObject *Sender)
{
		Panel85->Color=RGB(81,206,94);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
Ini=new TIniFile(ExtractFilePath(ParamStr(0))+"settings.ini");
Ini->WriteString("Last Operation","1",Label77->Caption);
Ini->WriteString("Last Operation","2",Label76->Caption);
Ini->WriteString("Last Operation","3",Label75->Caption);
Ini->WriteString("Last Operation","4",Label58->Caption);

Ini->Free();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel87Click(TObject *Sender)
{

Application->CreateForm(__classid(TForm12),&Form12);
Form12->Show();
String s=ExtractFilePath(ParamStr(0))+"User's manual.mht";
Form12->CppWebBrowser1->Navigate(s.c_str());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel86Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm13),&Form13);
Form13->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel85Click(TObject *Sender)
{
Application->CreateForm(__classid(TForm14),&Form14);
Form14->Show();
}
//---------------------------------------------------------------------------

