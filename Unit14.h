//---------------------------------------------------------------------------

#ifndef Unit14H
#define Unit14H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm14 : public TForm
{
__published:	// IDE-managed Components
	TPanel *downBorder;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TPanel *leftBorder;
	TPanel *Panel1;
	TPanel *rightBorder;
	TPanel *topBorder;
	void __fastcall FormDeactivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm14(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm14 *Form14;
//---------------------------------------------------------------------------
#endif
