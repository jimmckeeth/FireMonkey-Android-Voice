//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "GlassVoiceTriggerCpp1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AndroidTTS"
#pragma link "SpeechRecognition"
#pragma resource "*.fmx"
#pragma resource ("*.GGlass.fmx", _PLAT_ANDROID)
#pragma link "Androidapi.JNI.Speech"

TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormShow(TObject *Sender)
{
  _di_JIntent intent;
  intent = Androidapi::Helpers::SharedActivity()->getIntent();
  if (intent != NULL)
  {
	  _di_JBundle bundle;
	  bundle = intent->getExtras();
	  if (bundle != NULL) {
		  _di_JArrayList extras;
		  extras = bundle->getStringArrayList(
			 TJRecognizerIntent::JavaClass->EXTRA_RESULTS);
		  if (extras != NULL) {
			  for (int i = 0; i < extras->size(); i++) {
				  _di_JObject extra = extras->get(i);
				  ListBox1->Items->Add(JStringToString(extra->toString()));
			  }
		  }

	  }
 }
}
//---------------------------------------------------------------------------

