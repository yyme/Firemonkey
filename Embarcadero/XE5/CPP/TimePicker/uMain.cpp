//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::TimeEdit1TimeChanged(TObject *Sender)
{
	// update the label with the date picked from the CalendarEdit component
	ListBoxItem6->Text = "Picked " + FormatDateTime("hh:nn", TimeEdit1->Time);
}
//---------------------------------------------------------------------------
