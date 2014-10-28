// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Androidapi.JNI.TTS.pas' rev: 28.00 (Android)

#ifndef Androidapi_Jni_TtsHPP
#define Androidapi_Jni_TtsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Androidapi.JNIBridge.hpp>	// Pascal unit
#include <Androidapi.JNI.JavaTypes.hpp>	// Pascal unit
#include <Androidapi.JNI.Os.hpp>	// Pascal unit
#include <Androidapi.JNI.App.hpp>	// Pascal unit
#include <Androidapi.JNI.GraphicsContentViewText.hpp>	// Pascal unit
#include <Androidapi.Jni.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Androidapi
{
namespace Jni
{
namespace Tts
{
//-- type declarations -------------------------------------------------------
__interface JSynthesisCallbackClass;
typedef System::DelphiInterface<JSynthesisCallbackClass> _di_JSynthesisCallbackClass;
__interface  INTERFACE_UUID("{3B30766E-A43B-4005-BE92-472CD075F325}") JSynthesisCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface JSynthesisCallback;
typedef System::DelphiInterface<JSynthesisCallback> _di_JSynthesisCallback;
__interface  INTERFACE_UUID("{190C13DE-BC7E-44CE-94F6-4AF1A84A4612}") JSynthesisCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	
public:
	virtual int __cdecl audioAvailable(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * buffer, int offset, int length) = 0 ;
	virtual int __cdecl done(void) = 0 ;
	virtual void __cdecl error(void) = 0 ;
	virtual int __cdecl getMaxBufferSize(void) = 0 ;
	virtual int __cdecl start(int sampleRateInHz, int audioFormat, int channelCount) = 0 ;
};

class DELPHICLASS TJSynthesisCallback;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSynthesisCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSynthesisCallbackClass,_di_JSynthesisCallback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSynthesisCallbackClass,_di_JSynthesisCallback>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJSynthesisCallback(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSynthesisCallbackClass,_di_JSynthesisCallback> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJSynthesisCallback(void) { }
	
};

#pragma pack(pop)

__interface JSynthesisRequestClass;
typedef System::DelphiInterface<JSynthesisRequestClass> _di_JSynthesisRequestClass;
__interface JSynthesisRequest;
typedef System::DelphiInterface<JSynthesisRequest> _di_JSynthesisRequest;
__interface  INTERFACE_UUID("{AE41459D-42C6-4E66-B174-F6FA5216A1DA}") JSynthesisRequestClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	HIDESBASE virtual _di_JSynthesisRequest __cdecl init(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Os::_di_JBundle params) = 0 ;
};

__interface  INTERFACE_UUID("{1963DAD8-C58F-4868-BF8A-B43AE7A14145}") JSynthesisRequest  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getCountry(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getLanguage(void) = 0 ;
	virtual Androidapi::Jni::Os::_di_JBundle __cdecl getParams(void) = 0 ;
	virtual int __cdecl getPitch(void) = 0 ;
	virtual int __cdecl getSpeechRate(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getText(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getVariant(void) = 0 ;
};

class DELPHICLASS TJSynthesisRequest;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSynthesisRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSynthesisRequestClass,_di_JSynthesisRequest> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSynthesisRequestClass,_di_JSynthesisRequest>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJSynthesisRequest(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSynthesisRequestClass,_di_JSynthesisRequest> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJSynthesisRequest(void) { }
	
};

#pragma pack(pop)

__interface JTextToSpeechClass;
typedef System::DelphiInterface<JTextToSpeechClass> _di_JTextToSpeechClass;
__interface JTextToSpeech;
typedef System::DelphiInterface<JTextToSpeech> _di_JTextToSpeech;
__interface JTextToSpeech_OnInitListener;
typedef System::DelphiInterface<JTextToSpeech_OnInitListener> _di_JTextToSpeech_OnInitListener;
__interface  INTERFACE_UUID("{0E2C5E49-95BE-4F19-BCCD-21960D03E957}") JTextToSpeechClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_TTS_QUEUE_PROCESSING_COMPLETED(void) = 0 ;
	virtual int __fastcall _GetERROR(void) = 0 ;
	virtual int __fastcall _GetLANG_AVAILABLE(void) = 0 ;
	virtual int __fastcall _GetLANG_COUNTRY_AVAILABLE(void) = 0 ;
	virtual int __fastcall _GetLANG_COUNTRY_VAR_AVAILABLE(void) = 0 ;
	virtual int __fastcall _GetLANG_MISSING_DATA(void) = 0 ;
	virtual int __fastcall _GetLANG_NOT_SUPPORTED(void) = 0 ;
	virtual int __fastcall _GetQUEUE_ADD(void) = 0 ;
	virtual int __fastcall _GetQUEUE_FLUSH(void) = 0 ;
	virtual int __fastcall _GetSUCCESS(void) = 0 ;
	HIDESBASE virtual _di_JTextToSpeech __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext contect, _di_JTextToSpeech_OnInitListener listener) = 0 /* overload */;
	HIDESBASE virtual _di_JTextToSpeech __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, _di_JTextToSpeech_OnInitListener listener, Androidapi::Jni::Javatypes::_di_JString engine) = 0 /* overload */;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_TTS_QUEUE_PROCESSING_COMPLETED = {read=_GetACTION_TTS_QUEUE_PROCESSING_COMPLETED};
	__property int ERROR = {read=_GetERROR};
	__property int LANG_AVAILABLE = {read=_GetLANG_AVAILABLE};
	__property int LANG_COUNTRY_AVAILABLE = {read=_GetLANG_COUNTRY_AVAILABLE};
	__property int LANG_COUNTRY_VAR_AVAILABLE = {read=_GetLANG_COUNTRY_VAR_AVAILABLE};
	__property int LANG_MISSING_DATA = {read=_GetLANG_MISSING_DATA};
	__property int LANG_NOT_SUPPORTED = {read=_GetLANG_NOT_SUPPORTED};
	__property int QUEUE_ADD = {read=_GetQUEUE_ADD};
	__property int QUEUE_FLUSH = {read=_GetQUEUE_FLUSH};
	__property int SUCCESS = {read=_GetSUCCESS};
};

__interface JTextToSpeech_OnUtteranceCompletedListener;
typedef System::DelphiInterface<JTextToSpeech_OnUtteranceCompletedListener> _di_JTextToSpeech_OnUtteranceCompletedListener;
__interface JUtteranceProgressListener;
typedef System::DelphiInterface<JUtteranceProgressListener> _di_JUtteranceProgressListener;
__interface  INTERFACE_UUID("{E1D06364-F967-4381-B178-EEDD42C203C7}") JTextToSpeech  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual int __cdecl addEarcon(Androidapi::Jni::Javatypes::_di_JString earcon, Androidapi::Jni::Javatypes::_di_JString filename) = 0 /* overload */;
	virtual int __cdecl addEarcon(Androidapi::Jni::Javatypes::_di_JString earcon, Androidapi::Jni::Javatypes::_di_JString packagename, int resourceID) = 0 /* overload */;
	virtual int __cdecl addSpeech(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Javatypes::_di_JString filename) = 0 /* overload */;
	virtual int __cdecl addSpeech(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Javatypes::_di_JString packagename, int resourceID) = 0 /* overload */;
	virtual bool __cdecl areDefaultsEnforced(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDefaultEngine(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getEngines(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JSet __cdecl getFeatures(Androidapi::Jni::Javatypes::_di_JLocale locale) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JLocale __cdecl getLanguage(void) = 0 ;
	virtual int __cdecl isLanguageAvailable(Androidapi::Jni::Javatypes::_di_JLocale loc) = 0 ;
	virtual bool __cdecl isSpeaking(void) = 0 ;
	virtual int __cdecl playEarcon(Androidapi::Jni::Javatypes::_di_JString earcon, int queueMode, Androidapi::Jni::Javatypes::_di_JHashMap params) = 0 ;
	virtual int __cdecl playSilence(__int64 durationInMs, int queueMode, Androidapi::Jni::Javatypes::_di_JHashMap params) = 0 ;
	virtual int __cdecl setEngineByPackageName(Androidapi::Jni::Javatypes::_di_JString enginePackageName) = 0 ;
	virtual int __cdecl setLanguage(Androidapi::Jni::Javatypes::_di_JLocale loc) = 0 ;
	virtual int __cdecl setOnUtteranceCompletedListener(_di_JTextToSpeech_OnUtteranceCompletedListener listener) = 0 ;
	virtual int __cdecl setOnUtteranceProgressListener(_di_JUtteranceProgressListener listener) = 0 ;
	virtual int __cdecl setPitch(float pitch) = 0 ;
	virtual int __cdecl setSpeechRate(float speechRate) = 0 ;
	virtual void __cdecl shutdown(void) = 0 ;
	virtual int __cdecl speak(Androidapi::Jni::Javatypes::_di_JString text, int queueMode, Androidapi::Jni::Javatypes::_di_JHashMap params) = 0 ;
	virtual int __cdecl stop(void) = 0 ;
	virtual int __cdecl synthesizeToFile(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Javatypes::_di_JHashMap params, System::UnicodeString filename) = 0 ;
};

class DELPHICLASS TJTextToSpeech;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTextToSpeech : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeechClass,_di_JTextToSpeech> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeechClass,_di_JTextToSpeech>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJTextToSpeech(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeechClass,_di_JTextToSpeech> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJTextToSpeech(void) { }
	
};

#pragma pack(pop)

__interface JTextToSpeech_EngineClass;
typedef System::DelphiInterface<JTextToSpeech_EngineClass> _di_JTextToSpeech_EngineClass;
__interface JTextToSpeech_Engine;
typedef System::DelphiInterface<JTextToSpeech_Engine> _di_JTextToSpeech_Engine;
__interface  INTERFACE_UUID("{8516EA75-A410-4EEE-8281-9ABCE1577F46}") JTextToSpeech_EngineClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual int __fastcall _GeCHECK_VOICE_DATA_PASS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_CHECK_TTS_DATA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_INSTALL_TTS_DATA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_TTS_DATA_INSTALLED(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_BAD_DATA(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_FAIL(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_MISSING_DATA(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_MISSING_VOLUME(void) = 0 ;
	virtual int __fastcall _GetDEFAULT_STREAM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_AVAILABLE_VOICES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_CHECK_VOICE_DATA_FOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_TTS_DATA_INSTALLED(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_UNAVAILABLE_VOICES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_DATA_FILES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_DATA_FILES_INFO(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_DATA_ROOT_DIRECTORY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetINTENT_ACTION_TTS_SERVICE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetKEY_FEATURE_EMBEDDED_SYNTHESIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetKEY_FEATURE_NETWORK_SYNTHESIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetKEY_PARAM_PAN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetKEY_PARAM_STREAM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetKEY_PARAM_UTTERANCE_ID(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetKEY_PARAM_VOLUME(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetSERVICE_META_DATA(void) = 0 ;
	HIDESBASE virtual _di_JTextToSpeech_Engine __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_CHECK_TTS_DATA = {read=_GetACTION_CHECK_TTS_DATA};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_INSTALL_TTS_DATA = {read=_GetACTION_INSTALL_TTS_DATA};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_TTS_DATA_INSTALLED = {read=_GetACTION_TTS_DATA_INSTALLED};
	__property int CHECK_VOICE_DATA_BAD_DATA = {read=_GetCHECK_VOICE_DATA_BAD_DATA};
	__property int CHECK_VOICE_DATA_FAIL = {read=_GetCHECK_VOICE_DATA_FAIL};
	__property int CHECK_VOICE_DATA_MISSING_DATA = {read=_GetCHECK_VOICE_DATA_MISSING_DATA};
	__property int CHECK_VOICE_DATA_MISSING_VOLUME = {read=_GetCHECK_VOICE_DATA_MISSING_VOLUME};
	__property int CHECK_VOICE_DATA_PASS = {read=_GeCHECK_VOICE_DATA_PASS};
	__property int DEFAULT_STREAM = {read=_GetDEFAULT_STREAM};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_AVAILABLE_VOICES = {read=_GetEXTRA_AVAILABLE_VOICES};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_CHECK_VOICE_DATA_FOR = {read=_GetEXTRA_CHECK_VOICE_DATA_FOR};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_TTS_DATA_INSTALLED = {read=_GetEXTRA_TTS_DATA_INSTALLED};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_UNAVAILABLE_VOICES = {read=_GetEXTRA_UNAVAILABLE_VOICES};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_DATA_FILES = {read=_GetEXTRA_VOICE_DATA_FILES};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_DATA_FILES_INFO = {read=_GetEXTRA_VOICE_DATA_FILES_INFO};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_DATA_ROOT_DIRECTORY = {read=_GetEXTRA_VOICE_DATA_ROOT_DIRECTORY};
	__property Androidapi::Jni::Javatypes::_di_JString INTENT_ACTION_TTS_SERVICE = {read=_GetINTENT_ACTION_TTS_SERVICE};
	__property Androidapi::Jni::Javatypes::_di_JString KEY_FEATURE_EMBEDDED_SYNTHESIS = {read=_GetKEY_FEATURE_EMBEDDED_SYNTHESIS};
	__property Androidapi::Jni::Javatypes::_di_JString KEY_FEATURE_NETWORK_SYNTHESIS = {read=_GetKEY_FEATURE_NETWORK_SYNTHESIS};
	__property Androidapi::Jni::Javatypes::_di_JString KEY_PARAM_PAN = {read=_GetKEY_PARAM_PAN};
	__property Androidapi::Jni::Javatypes::_di_JString KEY_PARAM_STREAM = {read=_GetKEY_PARAM_STREAM};
	__property Androidapi::Jni::Javatypes::_di_JString KEY_PARAM_UTTERANCE_ID = {read=_GetKEY_PARAM_UTTERANCE_ID};
	__property Androidapi::Jni::Javatypes::_di_JString KEY_PARAM_VOLUME = {read=_GetKEY_PARAM_VOLUME};
	__property Androidapi::Jni::Javatypes::_di_JString SERVICE_META_DATA = {read=_GetSERVICE_META_DATA};
};

__interface  INTERFACE_UUID("{5BAC3048-CB0C-4DC4-AF62-D0D9AE4394CF}") JTextToSpeech_Engine  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class DELPHICLASS TJTextToSpeech_Engine;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTextToSpeech_Engine : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_EngineClass,_di_JTextToSpeech_Engine> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_EngineClass,_di_JTextToSpeech_Engine>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJTextToSpeech_Engine(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_EngineClass,_di_JTextToSpeech_Engine> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJTextToSpeech_Engine(void) { }
	
};

#pragma pack(pop)

__interface JTextToSpeech_EngineInfoClass;
typedef System::DelphiInterface<JTextToSpeech_EngineInfoClass> _di_JTextToSpeech_EngineInfoClass;
__interface JTextToSpeech_EngineInfo;
typedef System::DelphiInterface<JTextToSpeech_EngineInfo> _di_JTextToSpeech_EngineInfo;
__interface  INTERFACE_UUID("{8297AD59-5A6F-4867-A185-CA09BAD90159}") JTextToSpeech_EngineInfoClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	HIDESBASE virtual _di_JTextToSpeech_EngineInfo __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{204B30D8-6E25-4531-847D-18588D48D9BF}") JTextToSpeech_EngineInfo  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual int __fastcall _Geticon(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _Getlabel(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _Getname(void) = 0 ;
	virtual void __fastcall _Seticon(const int Value) = 0 ;
	virtual void __fastcall _Setlabel(const Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	virtual void __fastcall _Setname(const Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	__property int icon = {read=_Geticon, write=_Seticon};
	__property Androidapi::Jni::Javatypes::_di_JString _label = {read=_Getlabel, write=_Setlabel};
	__property Androidapi::Jni::Javatypes::_di_JString name = {read=_Getname, write=_Setname};
};

class DELPHICLASS TJTextToSpeech_EngineInfo;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTextToSpeech_EngineInfo : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_EngineInfoClass,_di_JTextToSpeech_EngineInfo> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_EngineInfoClass,_di_JTextToSpeech_EngineInfo>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJTextToSpeech_EngineInfo(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_EngineInfoClass,_di_JTextToSpeech_EngineInfo> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJTextToSpeech_EngineInfo(void) { }
	
};

#pragma pack(pop)

__interface JTextToSpeech_OnInitListenerClass;
typedef System::DelphiInterface<JTextToSpeech_OnInitListenerClass> _di_JTextToSpeech_OnInitListenerClass;
__interface  INTERFACE_UUID("{58D32EFB-6528-4EC6-BA4F-28B22FE8E573}") JTextToSpeech_OnInitListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{027DA109-680A-4A69-905D-F62E2BD1282F}") JTextToSpeech_OnInitListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
public:
	virtual void __cdecl onInit(int status) = 0 ;
};

class DELPHICLASS TJTextToSpeech_OnInitListener;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTextToSpeech_OnInitListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_OnInitListenerClass,_di_JTextToSpeech_OnInitListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_OnInitListenerClass,_di_JTextToSpeech_OnInitListener>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJTextToSpeech_OnInitListener(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_OnInitListenerClass,_di_JTextToSpeech_OnInitListener> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJTextToSpeech_OnInitListener(void) { }
	
};

#pragma pack(pop)

__interface JTextToSpeech_OnUtteranceCompletedListenerClass;
typedef System::DelphiInterface<JTextToSpeech_OnUtteranceCompletedListenerClass> _di_JTextToSpeech_OnUtteranceCompletedListenerClass;
__interface  INTERFACE_UUID("{0A608BB9-A6BF-4746-8419-9317AD625DFA}") JTextToSpeech_OnUtteranceCompletedListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{00439F2B-E73C-4B93-A9E3-832AE3CC1D5F}") JTextToSpeech_OnUtteranceCompletedListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
public:
	virtual void __cdecl onUtteranceCompleted(Androidapi::Jni::Javatypes::_di_JString utteranceID) = 0 ;
};

class DELPHICLASS TJTextToSpeech_OnUtteranceCompletedListener;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTextToSpeech_OnUtteranceCompletedListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_OnUtteranceCompletedListenerClass,_di_JTextToSpeech_OnUtteranceCompletedListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_OnUtteranceCompletedListenerClass,_di_JTextToSpeech_OnUtteranceCompletedListener>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJTextToSpeech_OnUtteranceCompletedListener(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeech_OnUtteranceCompletedListenerClass,_di_JTextToSpeech_OnUtteranceCompletedListener> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJTextToSpeech_OnUtteranceCompletedListener(void) { }
	
};

#pragma pack(pop)

__interface JTextToSpeechServiceClass;
typedef System::DelphiInterface<JTextToSpeechServiceClass> _di_JTextToSpeechServiceClass;
__interface JTextToSpeechService;
typedef System::DelphiInterface<JTextToSpeechService> _di_JTextToSpeechService;
__interface  INTERFACE_UUID("{6BCC6ADC-CBCB-4515-A5C3-E33F9787EEC2}") JTextToSpeechServiceClass  : public Androidapi::Jni::App::JServiceClass 
{
	
public:
	HIDESBASE virtual _di_JTextToSpeechService __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{EE3943B6-88DC-488B-9E10-E0FA9914708D}") JTextToSpeechService  : public Androidapi::Jni::App::JService 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JSet __cdecl onGetFeaturesForLanguage(Androidapi::Jni::Javatypes::_di_JString lang, Androidapi::Jni::Javatypes::_di_JString country, Androidapi::Jni::Javatypes::_di_JString variant) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<Androidapi::Jni::Javatypes::_di_JString> * __cdecl onGetLanguage(void) = 0 ;
	virtual int __cdecl onIsLanguageAvailable(Androidapi::Jni::Javatypes::_di_JString lang, Androidapi::Jni::Javatypes::_di_JString country, Androidapi::Jni::Javatypes::_di_JString variant) = 0 ;
	virtual int __cdecl onLoadLanguage(Androidapi::Jni::Javatypes::_di_JString lang, Androidapi::Jni::Javatypes::_di_JString country, Androidapi::Jni::Javatypes::_di_JString variant) = 0 ;
	virtual void __cdecl onStop(void) = 0 ;
	virtual void __cdecl onSynthesizeText(_di_JSynthesisRequest request, _di_JSynthesisCallback callback) = 0 ;
};

class DELPHICLASS TJTextToSpeechService;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJTextToSpeechService : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeechServiceClass,_di_JTextToSpeechService> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeechServiceClass,_di_JTextToSpeechService>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJTextToSpeechService(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JTextToSpeechServiceClass,_di_JTextToSpeechService> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJTextToSpeechService(void) { }
	
};

#pragma pack(pop)

__interface JUtteranceProgressListenerClass;
typedef System::DelphiInterface<JUtteranceProgressListenerClass> _di_JUtteranceProgressListenerClass;
__interface  INTERFACE_UUID("{0870532F-6FD7-4B1F-9DEF-B53F0095C98A}") JUtteranceProgressListenerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	HIDESBASE virtual _di_JUtteranceProgressListener __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{8B03499D-0B26-4F36-90E8-F724BD78DB0C}") JUtteranceProgressListener  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual void __cdecl onDone(Androidapi::Jni::Javatypes::_di_JString utteranceID) = 0 ;
	virtual void __cdecl onError(Androidapi::Jni::Javatypes::_di_JString utteranceID) = 0 ;
	virtual void __cdecl onStart(Androidapi::Jni::Javatypes::_di_JString utteranceID) = 0 ;
};

class DELPHICLASS TJUtteranceProgressListener;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJUtteranceProgressListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtteranceProgressListenerClass,_di_JUtteranceProgressListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtteranceProgressListenerClass,_di_JUtteranceProgressListener>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJUtteranceProgressListener(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUtteranceProgressListenerClass,_di_JUtteranceProgressListener> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJUtteranceProgressListener(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tts */
}	/* namespace Jni */
}	/* namespace Androidapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROIDAPI_JNI_TTS)
using namespace Androidapi::Jni::Tts;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROIDAPI_JNI)
using namespace Androidapi::Jni;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROIDAPI)
using namespace Androidapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Androidapi_Jni_TtsHPP
