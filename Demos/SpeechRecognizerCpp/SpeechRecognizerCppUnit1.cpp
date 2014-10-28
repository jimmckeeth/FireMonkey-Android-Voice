//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "SpeechRecognizerCppUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AndroidTTS"
#pragma link "SpeechRecognition"
#pragma link "AndroidTTS"
#pragma link "SpeechRecognition"
#pragma resource "*.fmx"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
  SpeechRecognition1->Listen();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::SpeechRecognition1Recognition(TObject *Sender, UnicodeString Guess)

{
  ListBox1->Items->Add(Guess);
  AndroidTTS1->Speak(Guess);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::SpeechRecognition1RecognitionEx(TObject *Sender, TGuesses Guesses)

{
  for (int i = 0; i < Guesses.Length; i++) {
    ListBox1->Items->Add(Guesses[i]);
  }
}
//---------------------------------------------------------------------------

