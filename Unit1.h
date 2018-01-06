//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <System.Classes.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.DBChart.hpp>
#include <VCLTee.Series.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
//---------------------------------------------------------------------------
#include <string.h>

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ComCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <Vcl.Menus.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Vcl.Outline.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <VCLTee.DBChart.hpp>
#include <VCLTee.TeCanvas.hpp>
#include <VCLTee.TeeDBCrossTab.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.Series.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <Vcl.Tabs.hpp>
#include <Vcl.CategoryButtons.hpp>
#include <Vcl.ValEdit.hpp>
#include "IniFiles.hpp"
#include <System.Bluetooth.Components.hpp>
#include <System.Bluetooth.hpp>
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include "SHDocVw_OCX.h"
#include <Vcl.OleCtrls.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.Controls.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <Vcl.Bind.Navigator.hpp>
#include <Vcl.Buttons.hpp>
#include <IWBaseControl.hpp>
#include <IWBaseHTMLControl.hpp>
#include <IWCompFlash.hpp>
#include <IWCompObject.hpp>
#include <IWControl.hpp>
#include <IWVCLBaseControl.hpp>
#include <IWBaseComponent.hpp>
#include <IWBaseHTML40Component.hpp>
#include <IWBaseHTMLComponent.hpp>
#include <IWCompExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{

__published:	// IDE-managed Components

	TImageList *ImageList1;
	TPanel *Panel1;
	TADOConnection *ADOConnection1;
	TPanel *header;
	TPanel *navigation;
	TPanel *footer;
	TImage *Image1;
	TLabel *Label1;
	TPanel *Panel5;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TPanel *leftBorder;
	TPanel *client;
	TPanel *topBorder;
	TPanel *rightBorder;
	TPanel *downBorder;
	TImage *Image2;
	TImage *SettingsOn;
	TImage *Calc;
	TImage *Image6;
	TPanel *Panel8;
	TImage *Image7;
	TLabel *Label2;
	TImage *Image14;
	TLabel *Label3;
	TPanel *Panel11;
	TImage *Image15;
	TLabel *Label4;
	TImage *Image16;
	TLabel *Label5;
	TPanel *Panel13;
	TImage *Image17;
	TLabel *Label6;
	TImage *Image18;
	TPanel *Panel14;
	TPanel *Panel15;
	TPanel *Panel16;
	TImage *SettingsOff;
	TImage *SettingsOver;
	TPanel *Panel17;
	TLabel *Label7;
	TImage *Image3;
	TLabel *Label8;
	TImage *Image19;
	TPanel *Panel18;
	TLabel *Label9;
	TImage *Image22;
	TLabel *Label10;
	TImage *Image23;
	TPanel *Panel19;
	TPanel *Panel20;
	TImage *Image24;
	TImage *Image25;
	TImage *Image26;
	TPopupMenu *PopupMenu1;
	TMenuItem *Sort1;
	TMenuItem *Sortbyregion1;
	TMenuItem *Sortbyetaj1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *Rent;
	TEdit *Edit1;
	TImage *Image27;
	TComboBox *ComboBox1;
	TImage *Image28;
	TPanel *base;
	TPanel *Panel23;
	TPanel *Panel24;
	TPanel *Panel25;
	TPanel *Panel26;
	TDBEdit *DBEdit5;
	TDBEdit *DBEdit6;
	TDBEdit *DBEdit10;
	TLabel *Label15;
	TPanel *Panel27;
	TDBEdit *DBEdit1;
	TPanel *Panel28;
	TImage *Image30;
	TImage *Image31;
	TImage *Image32;
	TTabSheet *TabSheet3;
	TPanel *Panel29;
	TDBEdit *DBEdit3;
	TPanel *Panel30;
	TImage *Image36;
	TImage *Image37;
	TImage *Image38;
	TPanel *Panel31;
	TPanel *Panel32;
	TImage *Image39;
	TImage *Image40;
	TImage *Image41;
	TOpenPictureDialog *OpenPictureDialog1;
	TPanel *Panel33;
	TPanel *Panel34;
	TPanel *Panel35;
	TPanel *Panel36;
	TPanel *Panel37;
	TPanel *stat;
	TDBChart *DBChart1;
	TPieSeries *Series1;
	TDBChart *DBChart2;
	TBarSeries *Series2;
	TPanel *notarius;
	TPanel *Panel39;
	TPanel *Panel40;
	TPanel *Panel41;
	TPanel *Panel42;
	TPanel *Panel43;
	TPanel *Panel44;
	TPanel *Panel45;
	TPanel *Panel46;
	TPanel *Panel47;
	TPanel *Panel48;
	TPanel *Panel49;
	TImage *Image42;
	TImage *Image43;
	TImage *Image44;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label17;
	TLabel *Label24;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label29;
	TLabel *Label30;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label16;
	TPanel *Panel50;
	TImage *Image45;
	TImage *Image46;
	TImage *Image47;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TLabel *Label31;
	TLabel *Label34;
	TPanel *Panel2;
	TPanel *Panel6;
	TPanel *Panel12;
	TPanel *Panel21;
	TPanel *Panel22;
	TImage *Image49;
	TLabel *Label35;
	TPanel *Panel38;
	TPanel *Panel51;
	TImage *Image50;
	TLabel *Label36;
	TPanel *Panel52;
	TPanel *Panel53;
	TImage *Image51;
	TLabel *Label37;
	TPanel *Panel54;
	TPanel *Panel55;
	TImage *Image52;
	TLabel *Label38;
	TPanel *Panel56;
	TPanel *Panel57;
	TImage *Image53;
	TLabel *Label39;
	TCheckBox *CheckBox17;
	TCheckBox *CheckBox18;
	TCheckBox *CheckBox19;
	TCheckBox *CheckBox20;
	TCheckBox *CheckBox13;
	TCheckBox *CheckBox16;
	TCheckBox *CheckBox9;
	TCheckBox *CheckBox10;
	TCheckBox *CheckBox11;
	TCheckBox *CheckBox5;
	TCheckBox *CheckBox6;
	TCheckBox *CheckBox7;
	TCheckBox *CheckBox8;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox4;
	TPanel *Panel58;
	TPanel *Panel59;
	TImage *Image54;
	TPanel *Panel64;
	TPanel *Panel10;
	TImage *Image48;
	TLabel *Label40;
	TPanel *Panel62;
	TPanel *Panel63;
	TPanel *Panel65;
	TImage *Image55;
	TLabel *Label41;
	TPanel *Panel66;
	TPanel *Panel67;
	TPanel *Panel69;
	TImage *Image56;
	TPanel *Panel68;
	TImage *Image57;
	TImage *Image58;
	TImage *Image59;
	TDBEdit *DBEdit2;
	TDBEdit *DBEdit4;
	TDBEdit *DBEdit7;
	TPanel *Panel70;
	TPanel *Panel72;
	TImage *Image33;
	TPanel *Panel77;
	TPanel *Panel78;
	TPanel *Panel81;
	TPanel *Panel71;
	TImage *Image29;
	TLabel *Label42;
	TDBEdit *DBEdit8;
	TPanel *Panel74;
	TPanel *Panel75;
	TImage *Image34;
	TDBEdit *DBEdit9;
	TImage *Image35;
	TImage *Image60;
	TLabel *Label11;
	TIdHTTP *IdHTTP1;
	TPanel *Main;
	TPanel *Panel76;
	TImage *Image61;
	TPanel *Panel73;
	TPanel *Panel79;
	TLabel *Label12;
	TPanel *Panel80;
	TPanel *Panel82;
	TLabel *Label13;
	TLabel *Label14;
	TPanel *Panel83;
	TMemo *Memo1;
	TPanel *Panel84;
	TPanel *Panel85;
	TPanel *Panel86;
	TPanel *Panel87;
	TImage *Image62;
	TImage *Image63;
	TImage *Image64;
	TLabel *Label43;
	TLabel *Label44;
	TLabel *Label45;
	TPanel *Panel88;
	TPanel *Panel89;
	TPanel *Panel91;
	TLabel *Label48;
	TPanel *Panel90;
	TLabel *Label47;
	TPanel *Panel92;
	TLabel *Label49;
	TImage *Image66;
	TPanel *Panel98;
	TPanel *Panel99;
	TPanel *Panel100;
	TLabel *Label55;
	TPanel *Panel101;
	TPanel *Panel102;
	TLabel *Label57;
	TPanel *Panel94;
	TPanel *Panel95;
	TPanel *Panel96;
	TLabel *Label51;
	TPanel *Panel104;
	TPanel *Panel105;
	TLabel *Label58;
	TPanel *Panel106;
	TLabel *Label59;
	TImage *Image69;
	TPanel *Panel93;
	TImage *Image70;
	TLabel *Label53;
	TLabel *Label54;
	TLabel *Label60;
	TLabel *Label61;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label64;
	TPanel *Panel97;
	TImage *Image71;
	TLabel *Label52;
	TLabel *Label56;
	TLabel *Label65;
	TLabel *Label66;
	TLabel *Label67;
	TDBChart *DBChart3;
	TPieSeries *PieSeries1;
	TImage *Image65;
	TLabel *Label46;
	TLabel *Label50;
	TImage *Image68;
	TImage *Image73;
	TImage *Image74;
	TImage *Image75;
	TImage *Image76;
	TImage *Image67;
	TImage *userGuest;
	TLabel *Label68;
	TImage *Image78;
	TImage *userAdmin;
	TTeeGDIPlus *TeeGDIPlus1;
	TLabel *logOff;
	TDBGrid *DBGrid4;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TDBGrid *DBGrid3;
	TADOQuery *ADOQuery1;
	TAutoIncField *ADOQuery1Id;
	TWideStringField *ADOQuery1District;
	TWideStringField *ADOQuery1Address;
	TIntegerField *ADOQuery1Storey;
	TIntegerField *ADOQuery1Storeys;
	TIntegerField *ADOQuery1Rooms;
	TWideStringField *ADOQuery1Owner;
	TWideStringField *ADOQuery1Phone;
	TWideStringField *ADOQuery1Status;
	TDateTimeField *ADOQuery1Reg_data;
	TBooleanField *ADOQuery1Viewed;
	TIntegerField *ADOQuery1Square;
	TWideStringField *ADOQuery1Comment;
	TWideStringField *ADOQuery1Type;
	TBCDField *ADOQuery1Cost;
	TBooleanField *ADOQuery1Trading;
	TWideStringField *ADOQuery1E_mail;
	TWideStringField *ADOQuery1Query;
	TBlobField *ADOQuery1photo1;
	TBlobField *ADOQuery1photo2;
	TBlobField *ADOQuery1photo3;
	TBlobField *ADOQuery1photo4;
	TBlobField *ADOQuery1photo5;
	TImage *Image4;
	TTrayIcon *TrayIcon1;
	TPopupMenu *PopupMenu2;
	TMenuItem *rader1;
	TMenuItem *N1;
	TMenuItem *Abort1;
	TMenuItem *N2;
	TMenuItem *CloseTrader1;
	TADOQuery *ADOQuery2;
	TScrollBar *ScrollBar1;
	TPanel *Panel103;
	TDBGrid *DBGrid5;
	TDataSource *DataSource2;
	TDataSource *DataSource1;
	TAutoIncField *ADOQuery2Id;
	TWideStringField *ADOQuery2Name;
	TWideStringField *ADOQuery2Location;
	TWideStringField *ADOQuery2Responsible;
	TWideStringField *ADOQuery2Mobile_phone;
	TWideStringField *ADOQuery2Office_phone;
	TPanel *Panel60;
	TLabel *Label69;
	TPanel *Panel108;
	TImage *Image5;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel7;
	TImage *Image20;
	TPanel *Panel9;
	TDBText *DBText2;
	TPanel *Panel61;
	TDBText *DBText1;
	TDBText *DBText5;
	TLabel *Label70;
	TPanel *Panel107;
	TDBText *DBText6;
	TLabel *Label71;
	TImage *Image21;
	TPanel *Panel109;
	TPanel *Panel110;
	TDBText *DBText3;
	TLabel *Label72;
	TPanel *Panel111;
	TImage *Image77;
	TImage *Image79;
	TImage *Image80;
	TImage *Image81;
	TTimer *Timer1;
	TLabel *Label73;
	TPanel *Panel112;
	TPanel *Panel113;
	TPanel *Panel114;
	TLabel *Label74;
	TLabel *Label75;
	TLabel *Label76;
	TLabel *Label77;
	TImage *Image72;
	TLabel *Label78;
	TLabel *Label79;
	void __fastcall Image8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image8MouseLeave(TObject *Sender);
	void __fastcall Image7MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image7MouseLeave(TObject *Sender);
	void __fastcall Image12MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image12MouseLeave(TObject *Sender);
	void __fastcall Image13MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image13MouseLeave(TObject *Sender);
	void __fastcall Image12Click(TObject *Sender);
	void __fastcall Image13Click(TObject *Sender);
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SettingsOverMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall SettingsOverMouseLeave(TObject *Sender);
	void __fastcall CalcClick(TObject *Sender);
	void __fastcall Image6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image6MouseLeave(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image18MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image18MouseLeave(TObject *Sender);
	void __fastcall Image18Click(TObject *Sender);
	void __fastcall Image16Click(TObject *Sender);
	void __fastcall Image16MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image16MouseLeave(TObject *Sender);
	void __fastcall Image23MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image23MouseLeave(TObject *Sender);
	void __fastcall Image19MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image19MouseLeave(TObject *Sender);
	void __fastcall Image26MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image26MouseLeave(TObject *Sender);
	void __fastcall Image26Click(TObject *Sender);
	void __fastcall Image19Click(TObject *Sender);
	void __fastcall PageControl1Change(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Image32MouseLeave(TObject *Sender);
	void __fastcall Image32MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image38MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image38MouseLeave(TObject *Sender);
	void __fastcall Image38Click(TObject *Sender);
	void __fastcall Image32Click(TObject *Sender);
	void __fastcall Image41MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image41MouseLeave(TObject *Sender);
	void __fastcall Image41Click(TObject *Sender);
	void __fastcall Image35Click(TObject *Sender);
	void __fastcall Image34Click(TObject *Sender);
	void __fastcall Image33Click(TObject *Sender);
	void __fastcall Image23Click(TObject *Sender);
	void __fastcall Image60MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image60MouseLeave(TObject *Sender);
	void __fastcall Image60Click(TObject *Sender);
	void __fastcall DBGrid4CellClick(TColumn *Column);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall userAdminClick(TObject *Sender);
	void __fastcall userGuestClick(TObject *Sender);
	void __fastcall logOffClick(TObject *Sender);
	void __fastcall logOffMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall logOffMouseLeave(TObject *Sender);
	void __fastcall rader1Click(TObject *Sender);
	void __fastcall Abort1Click(TObject *Sender);
	void __fastcall CloseTrader1Click(TObject *Sender);
	void __fastcall TrayIcon1DblClick(TObject *Sender);
	void __fastcall Image56Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Panel6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel6MouseLeave(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Panel87MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel87MouseLeave(TObject *Sender);
	void __fastcall Panel86MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel86MouseLeave(TObject *Sender);
	void __fastcall Panel85MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel85MouseLeave(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Panel87Click(TObject *Sender);
	void __fastcall Panel86Click(TObject *Sender);
	void __fastcall Panel85Click(TObject *Sender);
























private:	// User declarations
			TIniFile *Ini;

public:		// User declarations

	bool status;
	bool main;
	bool Base;
	bool plan;
	bool Notarius;
	bool templMaker;
	bool webApp;
	__fastcall TForm1(TComponent* Owner);
	__fastcall bool checkInternet();
	__fastcall void setTotalCount_Prince_Char();
	__fastcall void setNotarius();
	__fastcall void setPlanner();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
