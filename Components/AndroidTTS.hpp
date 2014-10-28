// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AndroidTTS.pas' rev: 28.00 (Android)

#ifndef AndroidttsHPP
#define AndroidttsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Androidapi.JNIBridge.hpp>	// Pascal unit
#include <Androidapi.JNI.TTS.hpp>	// Pascal unit
#include <Androidapi.JNI.JavaTypes.hpp>	// Pascal unit
#include <FMX.Forms.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Androidtts
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAndroidTTS;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAndroidTTS : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	class DELPHICLASS TttsOnInitListener;
	class PASCALIMPLEMENTATION TttsOnInitListener : public Androidapi::Jnibridge::TJavaLocal
	{
		typedef Androidapi::Jnibridge::TJavaLocal inherited;
		
private:
		__weak TAndroidTTS* FParent;
		
public:
		__fastcall TttsOnInitListener(TAndroidTTS* AParent);
		void __cdecl onInit(int status);
		void __cdecl onUtteranceCompleted(Androidapi::Jni::Javatypes::_di_JString utteranceID);
public:
		/* TJavaLocal.Destroy */ inline __fastcall virtual ~TttsOnInitListener(void) { }
		
private:
		void *__JTextToSpeech_OnUtteranceCompletedListener;	// Androidapi::Jni::Tts::JTextToSpeech_OnUtteranceCompletedListener 
		void *__JTextToSpeech_OnInitListener;	// Androidapi::Jni::Tts::JTextToSpeech_OnInitListener 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {00439F2B-E73C-4B93-A9E3-832AE3CC1D5F}
		operator Androidapi::Jni::Tts::_di_JTextToSpeech_OnUtteranceCompletedListener()
		{
			Androidapi::Jni::Tts::_di_JTextToSpeech_OnUtteranceCompletedListener intf;
			GetInterface(intf);
			return intf;
		}
		#else
		operator Androidapi::Jni::Tts::JTextToSpeech_OnUtteranceCompletedListener*(void) { return (Androidapi::Jni::Tts::JTextToSpeech_OnUtteranceCompletedListener*)&__JTextToSpeech_OnUtteranceCompletedListener; }
		#endif
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {027DA109-680A-4A69-905D-F62E2BD1282F}
		operator Androidapi::Jni::Tts::_di_JTextToSpeech_OnInitListener()
		{
			Androidapi::Jni::Tts::_di_JTextToSpeech_OnInitListener intf;
			GetInterface(intf);
			return intf;
		}
		#else
		operator Androidapi::Jni::Tts::JTextToSpeech_OnInitListener*(void) { return (Androidapi::Jni::Tts::JTextToSpeech_OnInitListener*)&__JTextToSpeech_OnInitListener; }
		#endif
		
	};
	
	
	
private:
	Androidapi::Jni::Tts::_di_JTextToSpeech ftts;
	TttsOnInitListener* fttsListener;
	System::Classes::TNotifyEvent FDone;
	void __fastcall Init(void);
	
public:
	__fastcall virtual TAndroidTTS(System::Classes::TComponent* AOwner);
	void __fastcall Speak(System::UnicodeString say);
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TAndroidTTS(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Androidtts */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROIDTTS)
using namespace Androidtts;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AndroidttsHPP
