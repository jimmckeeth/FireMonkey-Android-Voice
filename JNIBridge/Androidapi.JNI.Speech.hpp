// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Androidapi.JNI.Speech.pas' rev: 28.00 (Android)

#ifndef Androidapi_Jni_SpeechHPP
#define Androidapi_Jni_SpeechHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Androidapi.JNIBridge.hpp>	// Pascal unit
#include <Androidapi.JNI.JavaTypes.hpp>	// Pascal unit
#include <Androidapi.JNI.Widget.hpp>	// Pascal unit
#include <Androidapi.JNI.GraphicsContentViewText.hpp>	// Pascal unit
#include <Androidapi.JNI.Util.hpp>	// Pascal unit
#include <Androidapi.JNI.Os.hpp>	// Pascal unit
#include <Androidapi.JNI.Net.hpp>	// Pascal unit
#include <Androidapi.JNI.App.hpp>	// Pascal unit
#include <Androidapi.Jni.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
namespace Androidapi
{
namespace Jni
{
namespace Speech
{
  _INIT_UNIT(Androidapi_Jni_Speech);
}	/* namespace Speech */
}	/* namespace Jni */
}	/* namespace Androidapi */

namespace Androidapi
{
namespace Jni
{
namespace Speech
{
//-- type declarations -------------------------------------------------------
__interface JRecognitionListenerClass;
typedef System::DelphiInterface<JRecognitionListenerClass> _di_JRecognitionListenerClass;
__interface  INTERFACE_UUID("{57171073-E9C7-49D8-AE11-323FA3855BD3}") JRecognitionListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface JRecognitionListener;
typedef System::DelphiInterface<JRecognitionListener> _di_JRecognitionListener;
__interface  INTERFACE_UUID("{24846D38-C77E-4971-B8AC-65D1860CEB44}") JRecognitionListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
public:
	virtual void __cdecl onBeginningOfSpeech(void) = 0 ;
	virtual void __cdecl onBufferReceived(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * buffer) = 0 ;
	virtual void __cdecl onEndOfSpeech(void) = 0 ;
	virtual void __cdecl onError(int error) = 0 ;
	virtual void __cdecl onEvent(int eventType, Androidapi::Jni::Os::_di_JBundle params) = 0 ;
	virtual void __cdecl onPartialResults(Androidapi::Jni::Os::_di_JBundle partialResults) = 0 ;
	virtual void __cdecl onReadyForSpeech(Androidapi::Jni::Os::_di_JBundle params) = 0 ;
	virtual void __cdecl onResults(Androidapi::Jni::Os::_di_JBundle results) = 0 ;
	virtual void __cdecl onRmsChanged(float rmsdB) = 0 ;
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

__interface JRecognitionServiceClass;
typedef System::DelphiInterface<JRecognitionServiceClass> _di_JRecognitionServiceClass;
__interface JRecognitionService;
typedef System::DelphiInterface<JRecognitionService> _di_JRecognitionService;
__interface  INTERFACE_UUID("{38BB1897-9457-4C99-B64E-6B4CFDDC1CE2}") JRecognitionServiceClass  : public Androidapi::Jni::App::JServiceClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetSERVICE_INTERFACE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetSERVICE_META_DATA(void) = 0 ;
	HIDESBASE virtual _di_JRecognitionService __cdecl init(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString SERVICE_INTERFACE = {read=_GetSERVICE_INTERFACE};
	__property Androidapi::Jni::Javatypes::_di_JString SERVICE_META_DATA = {read=_GetSERVICE_META_DATA};
};

__interface  INTERFACE_UUID("{5A5D7D5D-CD74-4498-96B5-496207272EB2}") JRecognitionService  : public Androidapi::Jni::App::JService 
{
	
public:
	HIDESBASE virtual Androidapi::Jni::Os::_di_JIBinder __cdecl onBind(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent intent) = 0 ;
	HIDESBASE virtual void __cdecl onDestroy(void) = 0 ;
};

class DELPHICLASS TJRecognitionService;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRecognitionService : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionServiceClass,_di_JRecognitionService> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionServiceClass,_di_JRecognitionService>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJRecognitionService(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionServiceClass,_di_JRecognitionService> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJRecognitionService(void) { }
	
};

#pragma pack(pop)

__interface JRecognitionService_CallbackClass;
typedef System::DelphiInterface<JRecognitionService_CallbackClass> _di_JRecognitionService_CallbackClass;
__interface  INTERFACE_UUID("{925781D8-028E-474D-BA6B-77929050BF14}") JRecognitionService_CallbackClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface JRecognitionService_Callback;
typedef System::DelphiInterface<JRecognitionService_Callback> _di_JRecognitionService_Callback;
__interface  INTERFACE_UUID("{80A61346-2FB7-4936-8A93-C5A64B38C75C}") JRecognitionService_Callback  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual void __cdecl beginningOfSpeech(void) = 0 ;
	virtual void __cdecl bufferReceived(Androidapi::Jnibridge::TJavaArray__1<System::Byte> * buffer) = 0 ;
	virtual void __cdecl endOfSpeech(void) = 0 ;
	virtual void __cdecl error(int error) = 0 ;
	virtual void __cdecl partialResults(Androidapi::Jni::Os::_di_JBundle partialResults) = 0 ;
	virtual void __cdecl readyForSpeech(Androidapi::Jni::Os::_di_JBundle params) = 0 ;
	virtual void __cdecl results(Androidapi::Jni::Os::_di_JBundle results) = 0 ;
	virtual void __cdecl rmsChanged(float rmsdB) = 0 ;
};

class DELPHICLASS TJRecognitionService_Callback;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRecognitionService_Callback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionService_CallbackClass,_di_JRecognitionService_Callback> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionService_CallbackClass,_di_JRecognitionService_Callback>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJRecognitionService_Callback(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognitionService_CallbackClass,_di_JRecognitionService_Callback> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJRecognitionService_Callback(void) { }
	
};

#pragma pack(pop)

__interface JRecognizerIntentClass;
typedef System::DelphiInterface<JRecognizerIntentClass> _di_JRecognizerIntentClass;
__interface  INTERFACE_UUID("{A60D33ED-3B87-49A2-8EF9-B0E861A95205}") JRecognizerIntentClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_GET_LANGUAGE_DETAILS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_RECOGNIZE_SPEECH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_VOICE_SEARCH_HANDS_FREE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_WEB_SEARCH(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetDETAILS_META_DATA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_CALLING_PACKAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_CONFIDENCE_SCORES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_LANGUAGE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_LANGUAGE_MODEL(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_LANGUAGE_PREFERENCE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_MAX_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_ORIGIN(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_PARTIAL_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_PROMPT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_RESULTS_PENDINGINTENT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_SECURE(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_SUPPORTED_LANGUAGES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_WEB_SEARCH_ONLY(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetLANGUAGE_MODEL_FREE_FORM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetLANGUAGE_MODEL_WEB_SEARCH(void) = 0 ;
	virtual int __fastcall _GetRESULT_AUDIO_ERROR(void) = 0 ;
	virtual int __fastcall _GetRESULT_CLIENT_ERROR(void) = 0 ;
	virtual int __fastcall _GetRESULT_NETWORK_ERROR(void) = 0 ;
	virtual int __fastcall _GetRESULT_NO_MATCH(void) = 0 ;
	virtual int __fastcall _GetRESULT_SERVER_ERROR(void) = 0 ;
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
__interface  INTERFACE_UUID("{0432BC72-3F99-4EF0-9F02-B5E55BD974CE}") JRecognizerIntent  : public Androidapi::Jni::Javatypes::JObject 
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

__interface JRecognizerResultsIntentClass;
typedef System::DelphiInterface<JRecognizerResultsIntentClass> _di_JRecognizerResultsIntentClass;
__interface  INTERFACE_UUID("{5F9C0F34-CE2D-4B4A-B432-49CF198F5AF2}") JRecognizerResultsIntentClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_VOICE_SEARCH_RESULTS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_SEARCH_RESULT_HTML(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_SEARCH_RESULT_STRINGS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_VOICE_SEARCH_RESULT_URLS(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetURI_SCHEME_INLINE(void) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_VOICE_SEARCH_RESULTS = {read=_GetACTION_VOICE_SEARCH_RESULTS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_SEARCH_RESULT_HTML = {read=_GetEXTRA_VOICE_SEARCH_RESULT_HTML};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS = {read=_GetEXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS = {read=_GetEXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_SEARCH_RESULT_STRINGS = {read=_GetEXTRA_VOICE_SEARCH_RESULT_STRINGS};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_VOICE_SEARCH_RESULT_URLS = {read=_GetEXTRA_VOICE_SEARCH_RESULT_URLS};
	__property Androidapi::Jni::Javatypes::_di_JString URI_SCHEME_INLINE = {read=_GetURI_SCHEME_INLINE};
};

__interface JRecognizerResultsIntent;
typedef System::DelphiInterface<JRecognizerResultsIntent> _di_JRecognizerResultsIntent;
__interface  INTERFACE_UUID("{ECEE440F-2767-455A-A868-81A4F4A72F24}") JRecognizerResultsIntent  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class DELPHICLASS TJRecognizerResultsIntent;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TJRecognizerResultsIntent : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognizerResultsIntentClass,_di_JRecognizerResultsIntent> 
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognizerResultsIntentClass,_di_JRecognizerResultsIntent>  inherited;
	
public:
	/* TJavaImport.Create */ inline __fastcall TJRecognizerResultsIntent(void * ID, void * ClsID, Androidapi::Jnibridge::TJavaVTable* VTable) : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JRecognizerResultsIntentClass,_di_JRecognizerResultsIntent> (ID, ClsID, VTable) { }
	/* TJavaImport.Destroy */ inline __fastcall virtual ~TJRecognizerResultsIntent(void) { }
	
};

#pragma pack(pop)

__interface JSpeechRecognizerClass;
typedef System::DelphiInterface<JSpeechRecognizerClass> _di_JSpeechRecognizerClass;
__interface JSpeechRecognizer;
typedef System::DelphiInterface<JSpeechRecognizer> _di_JSpeechRecognizer;
__interface  INTERFACE_UUID("{256567F6-C4BF-4744-B1C9-F81311A1F18D}") JSpeechRecognizerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetCONFIDENCE_SCORES(void) = 0 ;
	virtual int __fastcall _GetERROR_AUDIO(void) = 0 ;
	virtual int __fastcall _GetERROR_CLIENT(void) = 0 ;
	virtual int __fastcall _GetERROR_INSUFFICIENT_PERMISSIONS(void) = 0 ;
	virtual int __fastcall _GetERROR_NETWORK(void) = 0 ;
	virtual int __fastcall _GetERROR_NETWORK_TIMEOUT(void) = 0 ;
	virtual int __fastcall _GetERROR_NO_MATCH(void) = 0 ;
	virtual int __fastcall _GetERROR_RECOGNIZER_BUSY(void) = 0 ;
	virtual int __fastcall _GetERROR_SERVER(void) = 0 ;
	virtual int __fastcall _GetERROR_SPEECH_TIMEOUT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetRESULTS_RECOGNITION(void) = 0 ;
	virtual _di_JSpeechRecognizer __cdecl createSpeechRecognizer(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 /* overload */;
	virtual _di_JSpeechRecognizer __cdecl createSpeechRecognizer(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, Androidapi::Jni::Graphicscontentviewtext::_di_JComponentName serviceComponent) = 0 /* overload */;
	virtual bool __cdecl isRecognitionAvailable(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
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

__interface  INTERFACE_UUID("{A67520B9-5BB4-481E-9310-3A673D724235}") JSpeechRecognizer  : public Androidapi::Jni::Javatypes::JObject 
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

__interface JSynthesisCallbackClass;
typedef System::DelphiInterface<JSynthesisCallbackClass> _di_JSynthesisCallbackClass;
__interface  INTERFACE_UUID("{241AE5F6-F249-4B95-8D2D-1C5B068C57D2}") JSynthesisCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface JSynthesisCallback;
typedef System::DelphiInterface<JSynthesisCallback> _di_JSynthesisCallback;
__interface  INTERFACE_UUID("{22155271-C2C9-4212-B0C6-01BE152D4F43}") JSynthesisCallback  : public Androidapi::Jnibridge::IJavaInstance 
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
__interface  INTERFACE_UUID("{6E0AE57B-6C0D-4C9D-AFE0-91676BA059C9}") JSynthesisRequestClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	HIDESBASE virtual _di_JSynthesisRequest __cdecl init(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Os::_di_JBundle params) = 0 ;
};

__interface  INTERFACE_UUID("{1E8FE9BA-9A87-40D7-9198-89C56CE2039C}") JSynthesisRequest  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual int __cdecl getCallerUid(void) = 0 ;
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
__interface  INTERFACE_UUID("{BE260883-0916-456E-B84C-6B237C8382DA}") JTextToSpeechClass  : public Androidapi::Jni::Javatypes::JObjectClass 
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
	HIDESBASE virtual _di_JTextToSpeech __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, _di_JTextToSpeech_OnInitListener listener) = 0 /* overload */;
	HIDESBASE virtual _di_JTextToSpeech __cdecl init(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, _di_JTextToSpeech_OnInitListener listener, Androidapi::Jni::Javatypes::_di_JString engine) = 0 /* overload */;
	virtual int __cdecl getMaxSpeechInputLength(void) = 0 ;
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
__interface  INTERFACE_UUID("{38B05C3C-B672-4FEC-849B-0CF4D89AA507}") JTextToSpeech  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual int __cdecl addEarcon(Androidapi::Jni::Javatypes::_di_JString earcon, Androidapi::Jni::Javatypes::_di_JString packagename, int resourceId) = 0 /* overload */;
	virtual int __cdecl addEarcon(Androidapi::Jni::Javatypes::_di_JString earcon, Androidapi::Jni::Javatypes::_di_JString filename) = 0 /* overload */;
	virtual int __cdecl addSpeech(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Javatypes::_di_JString packagename, int resourceId) = 0 /* overload */;
	virtual int __cdecl addSpeech(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Javatypes::_di_JString filename) = 0 /* overload */;
	virtual bool __cdecl areDefaultsEnforced(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDefaultEngine(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JLocale __cdecl getDefaultLanguage(void) = 0 ;
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
	virtual int __cdecl synthesizeToFile(Androidapi::Jni::Javatypes::_di_JString text, Androidapi::Jni::Javatypes::_di_JHashMap params, Androidapi::Jni::Javatypes::_di_JString filename) = 0 ;
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
__interface  INTERFACE_UUID("{75457E65-C0B1-4AF3-A166-A553887479C5}") JTextToSpeech_EngineClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_CHECK_TTS_DATA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_GET_SAMPLE_TEXT(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_INSTALL_TTS_DATA(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_TTS_DATA_INSTALLED(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_BAD_DATA(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_FAIL(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_MISSING_DATA(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_MISSING_VOLUME(void) = 0 ;
	virtual int __fastcall _GetCHECK_VOICE_DATA_PASS(void) = 0 ;
	virtual int __fastcall _GetDEFAULT_STREAM(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_AVAILABLE_VOICES(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_CHECK_VOICE_DATA_FOR(void) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_SAMPLE_TEXT(void) = 0 ;
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
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_GET_SAMPLE_TEXT = {read=_GetACTION_GET_SAMPLE_TEXT};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_INSTALL_TTS_DATA = {read=_GetACTION_INSTALL_TTS_DATA};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_TTS_DATA_INSTALLED = {read=_GetACTION_TTS_DATA_INSTALLED};
	__property int CHECK_VOICE_DATA_BAD_DATA = {read=_GetCHECK_VOICE_DATA_BAD_DATA};
	__property int CHECK_VOICE_DATA_FAIL = {read=_GetCHECK_VOICE_DATA_FAIL};
	__property int CHECK_VOICE_DATA_MISSING_DATA = {read=_GetCHECK_VOICE_DATA_MISSING_DATA};
	__property int CHECK_VOICE_DATA_MISSING_VOLUME = {read=_GetCHECK_VOICE_DATA_MISSING_VOLUME};
	__property int CHECK_VOICE_DATA_PASS = {read=_GetCHECK_VOICE_DATA_PASS};
	__property int DEFAULT_STREAM = {read=_GetDEFAULT_STREAM};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_AVAILABLE_VOICES = {read=_GetEXTRA_AVAILABLE_VOICES};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_CHECK_VOICE_DATA_FOR = {read=_GetEXTRA_CHECK_VOICE_DATA_FOR};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_SAMPLE_TEXT = {read=_GetEXTRA_SAMPLE_TEXT};
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

__interface  INTERFACE_UUID("{A876F830-EEA2-4A8E-B40D-B7AA567205EE}") JTextToSpeech_Engine  : public Androidapi::Jni::Javatypes::JObject 
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
__interface  INTERFACE_UUID("{ECA80D2D-D36F-43E4-9820-90A8F2122E29}") JTextToSpeech_EngineInfoClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	HIDESBASE virtual _di_JTextToSpeech_EngineInfo __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{931C3765-0057-4A59-93EC-93CBEE991ADD}") JTextToSpeech_EngineInfo  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual int __fastcall _Geticon(void) = 0 ;
	virtual void __fastcall _Seticon(int Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _Getlabel(void) = 0 ;
	virtual void __fastcall _Setlabel(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _Getname(void) = 0 ;
	virtual void __fastcall _Setname(Androidapi::Jni::Javatypes::_di_JString Value) = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString(void) = 0 ;
	__property int icon = {read=_Geticon, write=_Seticon};
	__property Androidapi::Jni::Javatypes::_di_JString label = {read=_Getlabel, write=_Setlabel};
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
__interface  INTERFACE_UUID("{B01450B5-524A-4B99-95DC-9158B7B8CC15}") JTextToSpeech_OnInitListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{94CC537C-E958-4EA5-B613-1465AEF6014B}") JTextToSpeech_OnInitListener  : public Androidapi::Jnibridge::IJavaInstance 
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
__interface  INTERFACE_UUID("{83D093B7-6FB6-46FE-A08E-1B0D25BDA841}") JTextToSpeech_OnUtteranceCompletedListenerClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{3EA0D21E-74E4-4204-A18F-2F68FE126E18}") JTextToSpeech_OnUtteranceCompletedListener  : public Androidapi::Jnibridge::IJavaInstance 
{
	
public:
	virtual void __cdecl onUtteranceCompleted(Androidapi::Jni::Javatypes::_di_JString utteranceId) = 0 ;
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
__interface  INTERFACE_UUID("{2A7E4DA5-50FC-43AA-8ACC-98487C02147B}") JTextToSpeechServiceClass  : public Androidapi::Jni::App::JServiceClass 
{
	
public:
	HIDESBASE virtual _di_JTextToSpeechService __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{52D88001-D8F7-4D5B-8194-CF6AEFD0C918}") JTextToSpeechService  : public Androidapi::Jni::App::JService 
{
	
public:
	HIDESBASE virtual Androidapi::Jni::Os::_di_JIBinder __cdecl onBind(Androidapi::Jni::Graphicscontentviewtext::_di_JIntent intent) = 0 ;
	HIDESBASE virtual void __cdecl onCreate(void) = 0 ;
	HIDESBASE virtual void __cdecl onDestroy(void) = 0 ;
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
__interface  INTERFACE_UUID("{9D335A6E-78BE-4060-B3C1-6028E603073D}") JUtteranceProgressListenerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
public:
	HIDESBASE virtual _di_JUtteranceProgressListener __cdecl init(void) = 0 ;
};

__interface  INTERFACE_UUID("{75D1A7E1-86E7-47D6-B9EC-96F0D69DC535}") JUtteranceProgressListener  : public Androidapi::Jni::Javatypes::JObject 
{
	
public:
	virtual void __cdecl onDone(Androidapi::Jni::Javatypes::_di_JString utteranceId) = 0 ;
	virtual void __cdecl onError(Androidapi::Jni::Javatypes::_di_JString utteranceId) = 0 ;
	virtual void __cdecl onStart(Androidapi::Jni::Javatypes::_di_JString utteranceId) = 0 ;
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
}	/* namespace Speech */
}	/* namespace Jni */
}	/* namespace Androidapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ANDROIDAPI_JNI_SPEECH)
using namespace Androidapi::Jni::Speech;
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
#endif	// Androidapi_Jni_SpeechHPP
