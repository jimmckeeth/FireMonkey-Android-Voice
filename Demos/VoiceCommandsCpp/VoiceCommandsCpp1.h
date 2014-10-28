//---------------------------------------------------------------------------

#ifndef VoiceCommandsCpp1H
#define VoiceCommandsCpp1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AndroidTTS.hpp"
#include "SpeechRecognition.hpp"
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <System.UITypes.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TAndroidTTS *AndroidTTS1;
	TSpeechRecognition *SpeechRecognition1;
	TListBox *ListBox1;
	TListBox *ListBox2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SpeechRecognition1Command(TObject *Sender, UnicodeString Guess);
	void __fastcall SpeechRecognition1RecognitionEx(TObject *Sender, TGuesses Guesses);



private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
