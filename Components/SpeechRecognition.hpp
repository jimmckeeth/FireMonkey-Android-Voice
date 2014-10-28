// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SpeechRecognition.pas' rev: 28.00 (Android)

#ifndef SpeechrecognitionHPP
#define SpeechrecognitionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.Messaging.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Speechrecognition
{
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::UnicodeString> TGuesses;

typedef void __fastcall (__closure *TRecognitionEventEx)(System::TObject* Sender, TGuesses Guesses);

typedef void __fastcall (__closure *TRecognitionEvent)(System::TObject* Sender, System::UnicodeString Guess);

class DELPHICLASS TSpeechRecognition;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TSpeechRecognition : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	static constexpr int RecognizerRequestCode = int(0x9da672f);
	
	#define TSpeechRecognition_DefaultPrompt u"Speak now"
	
	#define TSpeechRecognition_DefaultLanguage u"en-US"
	
	bool FListening;
	System::UnicodeString FLanguage;
	TRecognitionEvent FOnRecognition;
	TRecognitionEventEx FOnRecognitionEx;
	System::UnicodeString FPrompt;
	System::Classes::TStrings* FTempCommands;
	TRecognitionEvent FOnCommand;
	bool FAlwaysGuesses;
	void __fastcall IntentCallback(System::TObject* const Sender, System::Messaging::TMessage* const M);
	void __fastcall DoListen(void);
	void __fastcall ProcessesGuesses(TGuesses AGuesses);
	bool __fastcall StorePrompt(void);
	bool __fastcall StoreLanguage(void);
	
public:
	void __fastcall Listen(void)/* overload */;
	void __fastcall ListenFor(System::Classes::TStrings* const ACommands)/* overload */;
	void __fastcall ListenFor(const TGuesses ACommands)/* overload */;
	__fastcall virtual TSpeechRecognition(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSpeechRecognition(void);
	
__published:
	__property System::UnicodeString Prompt = {read=FPrompt, write=FPrompt, stored=StorePrompt};
	__property bool AlwaysGuesses = {read=FAlwaysGuesses, write=FAlwaysGuesses, default=1};
	__property System::UnicodeString Language = {read=FLanguage, write=FLanguage, stored=StoreLanguage};
	__property TRecognitionEvent OnRecognition = {read=FOnRecognition, write=FOnRecognition};
	__property TRecognitionEventEx OnRecognitionEx = {read=FOnRecognitionEx, write=FOnRecognitionEx};
	__property TRecognitionEvent OnCommand = {read=FOnCommand, write=FOnCommand};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Speechrecognition */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SPEECHRECOGNITION)
using namespace Speechrecognition;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SpeechrecognitionHPP
