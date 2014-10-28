//---------------------------------------------------------------------------

#ifndef SpeechRecognizerCppUnit1H
#define SpeechRecognizerCppUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AndroidTTS.hpp"
#include "SpeechRecognition.hpp"
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.ListBox.hpp>
#include "AndroidTTS.hpp"
#include "SpeechRecognition.hpp"
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TAndroidTTS *AndroidTTS1;
	TSpeechRecognition *SpeechRecognition1;
	TLayout *Layout1;
	TButton *Button1;
	TListBox *ListBox1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SpeechRecognition1Recognition(TObject *Sender, UnicodeString Guess);
	void __fastcall SpeechRecognition1RecognitionEx(TObject *Sender, TGuesses Guesses);


private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
