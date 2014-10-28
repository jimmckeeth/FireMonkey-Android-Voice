//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "VoiceCommandsCpp1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AndroidTTS"
#pragma link "SpeechRecognition"
#pragma resource "*.fmx"
#pragma resource "*.GearLive.fmx"

TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
  //AndroidTTS1->Speak("Say Red, Green or Blue.");
  ListBox2->Items->Clear();
  SpeechRecognition1->Prompt = "Pick a color . . .";
  SpeechRecognition1->ListenFor(ListBox1->Items);
}
//---------------------------------------------------------------------------

void __fastcall TForm8::SpeechRecognition1Command(TObject *Sender,
   UnicodeString Guess)
{
  ListBox2->Items->Add(">" + Guess + "<");
  if (Guess == "Red") {
	  Button1->TintColor = (TAlphaColor)(0xffff0000);
  }
  if (Guess == "Green") {
	  Button1->TintColor = (TAlphaColor)(0xff00ff00);
  }
  if (Guess == "Blue") {
	  Button1->TintColor = (TAlphaColor)(0xff0000ff);
  }
  if (Guess == "Yellow") {
	  Button1->TintColor = (TAlphaColor)(0xffffff00);
  }
  if (Guess == "Orange") {
	  Button1->TintColor = (TAlphaColor)(0xffffa500);
  }
  if (Guess == "Purple") {
	  Button1->TintColor = (TAlphaColor)(0xffff00ff);
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm8::SpeechRecognition1RecognitionEx(TObject *Sender, TGuesses Guesses)
          
{
  for (int i = 0; i < Guesses.Length; i++) {
	ListBox2->Items->Add(Guesses[i]);
  }	
}
//---------------------------------------------------------------------------

