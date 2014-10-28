// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'android.speech.SpeechRecognizer.pas' rev: 28.00 (Android)

#ifndef Android_Speech_SpeechrecognizerHPP
#define Android_Speech_SpeechrecognizerHPP

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
#include <Androidapi.JNI.GraphicsContentViewText.hpp>	// Pascal unit
#include <Androidapi.Jni.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Android
{
namespace Speech
{
namespace Speechrecognizer
{
//-- type declarations -------------------------------------------------------
__interface JSpeechRecognizerClass;
typedef System::DelphiInterface<JSpeechRecognizerClass> _di_JSpeechRecognizerClass;
__interface JSpeechRecognizer;
typedef System::DelphiInterface<JSpeechRecognizer> _di_JSpeechRecognizer;
__interface JRecognitionListener;
typedef System::DelphiInterface<JRecognitionListener> _di_JRecognitionListener;
__interface  INTERFACE_UUID("{88580157-3372-4534-A141-96E730D15BE0}") JSpeechRecognizerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetCONFIDENCE_SCORES(void) = 0 ;
	virtual int __cdecl _GetERROR_AUDIO(void) = 0 ;
	virtual int __cdecl _GetERROR_CLIENT(void) = 0 ;
	virtual int __cdecl _GetERROR_INSUFFICIENT_PERMISSIONS(void) = 0 ;
	virtual int __cdecl _GetERROR_NETWORK(void) = 0 ;
	virtual int __cdecl _GetERROR_NETWORK_TIMEOUT(void) = 0 ;
	virtual int __cdecl _GetERROR_NO_MATCH(void) = 0 ;
	virtual int __cdecl _GetERROR_RECOGNIZER_BUSY(void) = 0 ;
	virtual int __cdecl _GetERROR_SERVER(void) = 0 ;
	virtual int __cdecl _GetERROR_SPEECH_TIMEOUT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetRESULTS_RECOGNITION(void) = 0 ;
	virtual _di_JSpeechRecognizer __cdecl createSpeechRecognizer(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 /* overload */;
	virtual _di_JSpeechRecognizer __cdecl createSpeechRecognizer(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, Androidapi::Jni::Graphicscontentviewtext::_di_JComponentName serviceComponent) = 0 /* overload */;
	virtual bool __cdecl isRecognitionAvailable(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
	virtual void __cdecl cancel(void) = 0 ;
	virtual void __cdecl destroy(void) = 0 ;
	virtual void __cdecl setRecognitionListener(_di_JRecognitionListener listener) = 0 ;
	virtual void __cdecl startListening(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent recognizerIntent) = 0 ;
	virtual void __cdecl stopListening(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString CONFIDENCE_SCORES = {read=_GetCONFIDENCE_SCORES};
	__property int ERROR_AUDIO = {read=_GetERROR_AUDIO};
	__property int ERROR_CLIENT = {read=_GetERROR_CLIENT};
	__property int ERROR_INSUFFICIENT_PERMISSIONS = {read=_GetERROR_INSUFFICIENT_PERMISSIONS};
	__property int ERROR_NETWORK = {read=_GetERROR_NETWORK};
	__property int ERROR_NETWORK_TIMEOUT = {read=_GetERROR_NETWORK_TIMEOUT};
	__property int ERROR_NO_MATCH = {read=_GetERROR_NO_MATCH};
	__property int ERROR_RECOGNIZER_BUSY = {read=_GetERROR_RECOGNIZER_BUSY};
	__property int ERROR_SERVER = {read=_GetERROR_SERVER};
	__property int ERROR_SPEECH_TIMEOUT = {read=_GetERROR_SPEECH_TIMEOUT};
	__property Androidapi::Jni::Javatypes::_di_JString RESULTS_RECOGNITION = {read=_GetRESULTS_RECOGNITION};
};

__interface  INTERFACE_UUID("{F76A683F-F90D-489E-A9B6-D167ED3C7658}") JSpeechRecognizer  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual void __cdecl cancel(void) = 0 ;
	virtual void __cdecl destroy(void) = 0 ;
	virtual void __cdecl setRecognitionListener(_di_JRecognitionListener listener) = 0 ;
	virtual void __cdecl startListening(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent recognizerIntent) = 0 ;
	virtual void __cdecl stopListening(void) = 0 ;
};

class DELPHICLASS TJSpeechRecognizer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSpeechRecognizer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSpeechRecognizerClass,_di_JSpeechRecognizer> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSpeechRecognizerClass,_di_JSpeechRecognizer>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJSpeechRecognizer(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSpeechRecognizerClass,_di_JSpeechRecognizer> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJSpeechRecognizer(void) { }
	
};

#pragma pack(pop)

__interface JRecognitionListenerClass;
typedef System::DelphiInterface<JRecognitionListenerClass> _di_JRecognitionListenerClass;
__interface  INTERFACE_UUID("{2D6FFE3E-233C-4DC9-819C-22C9BEF470A1}") JRecognitionListenerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual void __cdecl onBeginningOfSpeech(void) = 0 ;
	virtual void __cdecl onBufferReceived(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * TJavaArrayByteparam0) = 0 ;
	virtual void __cdecl onEndOfSpeech(void) = 0 ;
	virtual void __cdecl onError(int Integerparam0) = 0 ;
	virtual void __cdecl onEvent(int Integerparam0, Androidapi::Jni::Os::_di_JBundle JBundleparam1) = 0 ;
	virtual void __cdecl onPartialResults(Androidapi::Jni::Os::_di_JBundle JBundleparam0) = 0 ;
	virtual void __cdecl onReadyForSpeech(Androidapi::Jni::Os::_di_JBundle JBundleparam0) = 0 ;
	virtual void __cdecl onResults(Androidapi::Jni::Os::_di_JBundle JBundleparam0) = 0 ;
	virtual void __cdecl onRmsChanged(float Singleparam0) = 0 ;
};

__interface  INTERFACE_UUID("{E636176D-E6C2-405C-94C1-CC08701DFFAA}") JRecognitionListener  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual void __cdecl onBeginningOfSpeech(void) = 0 ;
	virtual void __cdecl onBufferReceived(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * TJavaArrayByteparam0) = 0 ;
	virtual void __cdecl onEndOfSpeech(void) = 0 ;
	virtual void __cdecl onError(int Integerparam0) = 0 ;
	virtual void __cdecl onEvent(int Integerparam0, Androidapi::Jni::Os::_di_JBundle JBundleparam1) = 0 ;
	virtual void __cdecl onPartialResults(Androidapi::Jni::Os::_di_JBundle JBundleparam0) = 0 ;
	virtual void __cdecl onReadyForSpeech(Androidapi::Jni::Os::_di_JBundle JBundleparam0) = 0 ;
	virtual void __cdecl onResults(Androidapi::Jni::Os::_di_JBundle JBundleparam0) = 0 ;
	virtual void __cdecl onRmsChanged(float Singleparam0) = 0 ;
};

class DELPHICLASS TJRecognitionListener;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRecognitionListener : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionListenerClass,_di_JRecognitionListener> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionListenerClass,_di_JRecognitionListener>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJRecognitionListener(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionListenerClass,_di_JRecognitionListener> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJRecognitionListener(void) { }
	
};

#pragma pack(pop)

__interface JRecognizerIntentClass;
typedef System::DelphiInterface<JRecognizerIntentClass> _di_JRecognizerIntentClass;
__interface  INTERFACE_UUID("{028F22D9-0B41-4DA7-8C4C-4E1E07E40DF0}") JRecognizerIntentClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_GET_LANGUAGE_DETAILS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_RECOGNIZE_SPEECH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_VOICE_SEARCH_HANDS_FREE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetACTION_WEB_SEARCH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetDETAILS_META_DATA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_CALLING_PACKAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_CONFIDENCE_SCORES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_LANGUAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_LANGUAGE_MODEL(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_LANGUAGE_PREFERENCE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_MAX_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_ORIGIN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_PARTIAL_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_PROMPT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_RESULTS_PENDINGINTENT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_SECURE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_SUPPORTED_LANGUAGES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetEXTRA_WEB_SEARCH_ONLY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLANGUAGE_MODEL_FREE_FORM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl _GetLANGUAGE_MODEL_WEB_SEARCH(void) = 0 ;
	virtual int __cdecl _GetRESULT_AUDIO_ERROR(void) = 0 ;
	virtual int __cdecl _GetRESULT_CLIENT_ERROR(void) = 0 ;
	virtual int __cdecl _GetRESULT_NETWORK_ERROR(void) = 0 ;
	virtual int __cdecl _GetRESULT_NO_MATCH(void) = 0 ;
	virtual int __cdecl _GetRESULT_SERVER_ERROR(void) = 0 ;
	virtual Androidapi::Jni::Graphicscontentviewtext::_di_JIntent __cdecl getVoiceDetailsIntent(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_GET_LANGUAGE_DETAILS = {read=_GetACTION_GET_LANGUAGE_DETAILS};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_RECOGNIZE_SPEECH = {read=_GetACTION_RECOGNIZE_SPEECH};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_VOICE_SEARCH_HANDS_FREE = {read=_GetACTION_VOICE_SEARCH_HANDS_FREE};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_WEB_SEARCH = {read=_GetACTION_WEB_SEARCH};
	__property Androidapi::Jni::Javatypes::_di_JString DETAILS_META_DATA = {read=_GetDETAILS_META_DATA};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_CALLING_PACKAGE = {read=_GetEXTRA_CALLING_PACKAGE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_CONFIDENCE_SCORES = {read=_GetEXTRA_CONFIDENCE_SCORES};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_LANGUAGE = {read=_GetEXTRA_LANGUAGE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_LANGUAGE_MODEL = {read=_GetEXTRA_LANGUAGE_MODEL};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_LANGUAGE_PREFERENCE = {read=_GetEXTRA_LANGUAGE_PREFERENCE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_MAX_RESULTS = {read=_GetEXTRA_MAX_RESULTS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE = {read=_GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_ORIGIN = {read=_GetEXTRA_ORIGIN};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_PARTIAL_RESULTS = {read=_GetEXTRA_PARTIAL_RESULTS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_PROMPT = {read=_GetEXTRA_PROMPT};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_RESULTS = {read=_GetEXTRA_RESULTS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_RESULTS_PENDINGINTENT = {read=_GetEXTRA_RESULTS_PENDINGINTENT};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_RESULTS_PENDINGINTENT_BUNDLE = {read=_GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_SECURE = {read=_GetEXTRA_SECURE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS = {read=_GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS = {read=_GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS = {read=_GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_SUPPORTED_LANGUAGES = {read=_GetEXTRA_SUPPORTED_LANGUAGES};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_WEB_SEARCH_ONLY = {read=_GetEXTRA_WEB_SEARCH_ONLY};
	__property Androidapi::Jni::Javatypes::_di_JString LANGUAGE_MODEL_FREE_FORM = {read=_GetLANGUAGE_MODEL_FREE_FORM};
	__property Androidapi::Jni::Javatypes::_di_JString LANGUAGE_MODEL_WEB_SEARCH = {read=_GetLANGUAGE_MODEL_WEB_SEARCH};
	__property int RESULT_AUDIO_ERROR = {read=_GetRESULT_AUDIO_ERROR};
	__property int RESULT_CLIENT_ERROR = {read=_GetRESULT_CLIENT_ERROR};
	__property int RESULT_NETWORK_ERROR = {read=_GetRESULT_NETWORK_ERROR};
	__property int RESULT_NO_MATCH = {read=_GetRESULT_NO_MATCH};
	__property int RESULT_SERVER_ERROR = {read=_GetRESULT_SERVER_ERROR};
};

__interface JRecognizerIntent;
typedef System::DelphiInterface<JRecognizerIntent> _di_JRecognizerIntent;
__interface  INTERFACE_UUID("{FE722411-65FA-4B52-A721-37330C246156}") JRecognizerIntent  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class DELPHICLASS TJRecognizerIntent;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRecognizerIntent : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognizerIntentClass,_di_JRecognizerIntent> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognizerIntentClass,_di_JRecognizerIntent>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJRecognizerIntent(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognizerIntentClass,_di_JRecognizerIntent> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJRecognizerIntent(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define TJRecognizerIntentEXTRA_CALLING_PACKAGE u"calling_package"
#define TJRecognizerIntentACTION_RECOGNIZE_SPEECH u"android.speech.action.RECOGNIZE_SPEECH"
#define TJRecognizerIntentACTION_WEB_SEARCH u"android.speech.action.WEB_SEARCH"
#define TJRecognizerIntentACTION_VOICE_SEARCH_HANDS_FREE u"android.speech.action.VOICE_SEARCH_HANDS_FREE"
#define TJRecognizerIntentEXTRA_SECURE u"android.speech.extras.EXTRA_SECURE"
#define TJRecognizerIntentEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS u"android.speech.extras.SPEECH_INPUT_MINIMUM_LENGTH_MILLIS"
#define TJRecognizerIntentEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS u"android.speech.extras.SPEECH_INPUT_COMPLETE_SILENCE_LENGTH"\
	u"_MILLIS"
#define TJRecognizerIntentEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS u"android.speech.extras.SPEECH_INPUT_POSSIBLY_COMPLETE_SILEN"\
	u"CE_LENGTH_MILLIS"
#define TJRecognizerIntentEXTRA_LANGUAGE_MODEL u"android.speech.extra.LANGUAGE_MODEL"
#define TJRecognizerIntentLANGUAGE_MODEL_FREE_FORM u"free_form"
#define TJRecognizerIntentLANGUAGE_MODEL_WEB_SEARCH u"web_search"
#define TJRecognizerIntentEXTRA_PROMPT u"android.speech.extra.PROMPT"
#define TJRecognizerIntentEXTRA_LANGUAGE u"android.speech.extra.LANGUAGE"
#define TJRecognizerIntentEXTRA_ORIGIN u"android.speech.extra.ORIGIN"
#define TJRecognizerIntentEXTRA_MAX_RESULTS u"android.speech.extra.MAX_RESULTS"
#define TJRecognizerIntentEXTRA_WEB_SEARCH_ONLY u"android.speech.extra.WEB_SEARCH_ONLY"
#define TJRecognizerIntentEXTRA_PARTIAL_RESULTS u"android.speech.extra.PARTIAL_RESULTS"
#define TJRecognizerIntentEXTRA_RESULTS_PENDINGINTENT u"android.speech.extra.RESULTS_PENDINGINTENT"
#define TJRecognizerIntentEXTRA_RESULTS_PENDINGINTENT_BUNDLE u"android.speech.extra.RESULTS_PENDINGINTENT_BUNDLE"
static constexpr System::Int8 TJRecognizerIntentRESULT_NO_MATCH = System::Int8(0x1);
static constexpr System::Int8 TJRecognizerIntentRESULT_CLIENT_ERROR = System::Int8(0x2);
static constexpr System::Int8 TJRecognizerIntentRESULT_SERVER_ERROR = System::Int8(0x3);
static constexpr System::Int8 TJRecognizerIntentRESULT_NETWORK_ERROR = System::Int8(0x4);
static constexpr System::Int8 TJRecognizerIntentRESULT_AUDIO_ERROR = System::Int8(0x5);
#define TJRecognizerIntentEXTRA_RESULTS u"android.speech.extra.RESULTS"
#define TJRecognizerIntentEXTRA_CONFIDENCE_SCORES u"android.speech.extra.CONFIDENCE_SCORES"
#define TJRecognizerIntentDETAILS_META_DATA u"android.speech.DETAILS"
#define TJRecognizerIntentACTION_GET_LANGUAGE_DETAILS u"android.speech.action.GET_LANGUAGE_DETAILS"
#define TJRecognizerIntentEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE u"android.speech.extra.ONLY_RETURN_LANGUAGE_PREFERENCE"
#define TJRecognizerIntentEXTRA_LANGUAGE_PREFERENCE u"android.speech.extra.LANGUAGE_PREFERENCE"
#define TJRecognizerIntentEXTRA_SUPPORTED_LANGUAGES u"android.speech.extra.SUPPORTED_LANGUAGES"
#define TJSpeechRecognizerRESULTS_RECOGNITION u"results_recognition"
#define TJSpeechRecognizerCONFIDENCE_SCORES u"confidence_scores"
static constexpr System::Int8 TJSpeechRecognizerERROR_NETWORK_TIMEOUT = System::Int8(0x1);
static constexpr System::Int8 TJSpeechRecognizerERROR_NETWORK = System::Int8(0x2);
static constexpr System::Int8 TJSpeechRecognizerERROR_AUDIO = System::Int8(0x3);
static constexpr System::Int8 TJSpeechRecognizerERROR_SERVER = System::Int8(0x4);
static constexpr System::Int8 TJSpeechRecognizerERROR_CLIENT = System::Int8(0x5);
static constexpr System::Int8 TJSpeechRecognizerERROR_SPEECH_TIMEOUT = System::Int8(0x6);
static constexpr System::Int8 TJSpeechRecognizerERROR_NO_MATCH = System::Int8(0x7);
static constexpr System::Int8 TJSpeechRecognizerERROR_RECOGNIZER_BUSY = System::Int8(0x8);
static constexpr System::Int8 TJSpeechRecognizerERROR_INSUFFICIENT_PERMISSIONS = System::Int8(0x9);
}	/* namespace Speechrecognizer */
}	/* namespace Speech */
}	/* namespace Android */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID_SPEECH_SPEECHRECOGNIZER)
using namespace Android::Speech::Speechrecognizer;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID_SPEECH)
using namespace Android::Speech;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROID)
using namespace Android;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Android_Speech_SpeechrecognizerHPP
