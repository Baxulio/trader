//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

 // Таймер включён?

int iHours; // Текущий час.

int iMinutes; // Текущая минута.

int iAlarmHours; // Час оповещения.

int iAlarmMinutes; // Минута оповещения.

//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}

//ЧАСЫ-------------------------------------------------------------------------
void __fastcall TForm5::Timer1Timer(TObject *Sender)
{
	  StaticText1->Caption=Now().TimeString();
}
//СТАРТ-------------------------------------------------------------------------

void __fastcall TForm5::AlarmBttnClick(TObject *Sender)
{
Hide();

iAlarmHours=StrToInt(FormatDateTime("h", TimePicker->Time));

iAlarmMinutes=StrToInt(FormatDateTime("n", TimePicker->Time));
Form1->TrayIcon1->Hint="Alarm set to : "+IntToStr(iAlarmHours)+" : "+IntToStr(iAlarmMinutes);
Form1->Label46->Caption="Alarm set to:";
Form1->Label50->Caption=IntToStr(iAlarmHours)+" : "+IntToStr(iAlarmMinutes);
bIsTimerOn=true; // Таймер будильника запущен.
Timer2->Enabled=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer2Timer(TObject *Sender)
{
StaticText1->Caption=TimeToStr(Time());

if(bIsTimerOn)
{

iHours=StrToInt(FormatDateTime("h", Time()));

iMinutes=StrToInt(FormatDateTime("n", Time()));                        // …получим текущее время…

if(((iHours==iAlarmHours) && (iMinutes>=iAlarmMinutes))|| iHours>iAlarmHours)                   // …и если оно совпало с заданным пользователем…
{
	String q="\n";
	String cap=Memo1->Lines->Text+q+q+"Name :"+Edit1->Text+" Address: "+Edit4->Text+q+"Phone : "+Edit2->Text+q+"E-mail: "+Edit3->Text+q+"Price: "+Edit5->Text+q+"Storey: "+Edit6->Text+" Storeys: "+Edit7->Text+" Rooms: "+Edit8->Text;
	wchar_t *temp=new wchar_t[cap.Length()+1];
	StringToWideChar(cap,temp,cap.Length()+1);

	MediaPlayer->Play();

	Timer2->Enabled=false;
	while(Application->MessageBox(temp, L"Planner", MB_OK+MB_ICONWARNING)!=idOK)
		{
	   //	if(MediaPlayer->Mode==mpStopped){MediaPlayer->Stop(); MediaPlayer->Play();}

				}

	bIsTimerOn=false;
if(MediaPlayer->Mode==mpPlaying) MediaPlayer->Stop();

TimePicker->Time=StrToTime("0:00:00"); // Сброс на ноль.
Form1->TrayIcon1->Hint="Job done!";
Form1->Label46->Caption="Job";
Form1->Label50->Caption="DONE";
Form1->plan=false;
Free();

}

}

}

//СТОП-------------------------------------------------------------------------


void __fastcall TForm5::FormActivate(TObject *Sender)
{
bIsTimerOn=false; // Будильник выключен
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------




void __fastcall TForm5::Image6Click(TObject *Sender)
{
 if(AlarmOpenDialog->Execute())
		{
			MediaPlayer->Close();
			if(AlarmOpenDialog->FileName!="")
								MediaPlayer->FileName=AlarmOpenDialog->FileName;
			MediaPlayer->Open();
		}
}
//---------------------------------------------------------------------------






void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->plan=false;
Free();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CancelAlarmBttnClick(TObject *Sender)
{
Form1->plan=false;
}
//---------------------------------------------------------------------------

