{*******************************************************}
{                                                       }
{           CodeGear Delphi Runtime Library             }
{ Copyright(c) 2014 Embarcadero Technologies, Inc.      }
{                                                       }
{*******************************************************}

unit Androidapi.JNI.Speech;

interface

{$IFDEF ANDROID}
{$HPPEMIT LINKUNIT}

uses
  Androidapi.JNIBridge,
  Androidapi.JNI.JavaTypes,
  Androidapi.JNI.Widget,
  Androidapi.JNI.GraphicsContentViewText,
  Androidapi.JNI.Util,
  Androidapi.JNI.Os,
  Androidapi.JNI.Net,
  Androidapi.JNI.App;

type
// ===== Forward declarations =====

  JRecognitionListener = interface;//android.speech.RecognitionListener
  JRecognitionService = interface;//android.speech.RecognitionService
  JRecognitionService_Callback = interface;//android.speech.RecognitionService$Callback
  JRecognizerIntent = interface;//android.speech.RecognizerIntent
  JRecognizerResultsIntent = interface;//android.speech.RecognizerResultsIntent
  JSpeechRecognizer = interface;//android.speech.SpeechRecognizer
  JSynthesisCallback = interface;//android.speech.tts.SynthesisCallback
  JSynthesisRequest = interface;//android.speech.tts.SynthesisRequest
  JTextToSpeech = interface;//android.speech.tts.TextToSpeech
  JTextToSpeech_Engine = interface;//android.speech.tts.TextToSpeech$Engine
  JTextToSpeech_EngineInfo = interface;//android.speech.tts.TextToSpeech$EngineInfo
  JTextToSpeech_OnInitListener = interface;//android.speech.tts.TextToSpeech$OnInitListener
  JTextToSpeech_OnUtteranceCompletedListener = interface;//android.speech.tts.TextToSpeech$OnUtteranceCompletedListener
  JTextToSpeechService = interface;//android.speech.tts.TextToSpeechService
  JUtteranceProgressListener = interface;//android.speech.tts.UtteranceProgressListener

// ===== Interface declarations =====

  JRecognitionListenerClass = interface(IJavaClass)
    ['{57171073-E9C7-49D8-AE11-323FA3855BD3}']
  end;

  [JavaSignature('android/speech/RecognitionListener')]
  JRecognitionListener = interface(IJavaInstance)
    ['{24846D38-C77E-4971-B8AC-65D1860CEB44}']
    procedure onBeginningOfSpeech; cdecl;
    procedure onBufferReceived(buffer: TJavaArray<Byte>); cdecl;
    procedure onEndOfSpeech; cdecl;
    procedure onError(error: Integer); cdecl;
    procedure onEvent(eventType: Integer; params: JBundle); cdecl;
    procedure onPartialResults(partialResults: JBundle); cdecl;
    procedure onReadyForSpeech(params: JBundle); cdecl;
    procedure onResults(results: JBundle); cdecl;
    procedure onRmsChanged(rmsdB: Single); cdecl;
  end;
  TJRecognitionListener = class(TJavaGenericImport<JRecognitionListenerClass, JRecognitionListener>) end;

  JRecognitionServiceClass = interface(JServiceClass)
    ['{38BB1897-9457-4C99-B64E-6B4CFDDC1CE2}']
    {class} function _GetSERVICE_INTERFACE: JString;
    {class} function _GetSERVICE_META_DATA: JString;
    {class} function init: JRecognitionService; cdecl;
    {class} property SERVICE_INTERFACE: JString read _GetSERVICE_INTERFACE;
    {class} property SERVICE_META_DATA: JString read _GetSERVICE_META_DATA;
  end;

  [JavaSignature('android/speech/RecognitionService')]
  JRecognitionService = interface(JService)
    ['{5A5D7D5D-CD74-4498-96B5-496207272EB2}']
    function onBind(intent: JIntent): JIBinder; cdecl;
    procedure onDestroy; cdecl;
  end;
  TJRecognitionService = class(TJavaGenericImport<JRecognitionServiceClass, JRecognitionService>) end;

  JRecognitionService_CallbackClass = interface(JObjectClass)
    ['{925781D8-028E-474D-BA6B-77929050BF14}']
  end;

  [JavaSignature('android/speech/RecognitionService$Callback')]
  JRecognitionService_Callback = interface(JObject)
    ['{80A61346-2FB7-4936-8A93-C5A64B38C75C}']
    procedure beginningOfSpeech; cdecl;
    procedure bufferReceived(buffer: TJavaArray<Byte>); cdecl;
    procedure endOfSpeech; cdecl;
    procedure error(error: Integer); cdecl;
    procedure partialResults(partialResults: JBundle); cdecl;
    procedure readyForSpeech(params: JBundle); cdecl;
    procedure results(results: JBundle); cdecl;
    procedure rmsChanged(rmsdB: Single); cdecl;
  end;
  TJRecognitionService_Callback = class(TJavaGenericImport<JRecognitionService_CallbackClass, JRecognitionService_Callback>) end;

  JRecognizerIntentClass = interface(JObjectClass)
    ['{A60D33ED-3B87-49A2-8EF9-B0E861A95205}']
    {class} function _GetACTION_GET_LANGUAGE_DETAILS: JString;
    {class} function _GetACTION_RECOGNIZE_SPEECH: JString;
    {class} function _GetACTION_VOICE_SEARCH_HANDS_FREE: JString;
    {class} function _GetACTION_WEB_SEARCH: JString;
    {class} function _GetDETAILS_META_DATA: JString;
    {class} function _GetEXTRA_CALLING_PACKAGE: JString;
    {class} function _GetEXTRA_CONFIDENCE_SCORES: JString;
    {class} function _GetEXTRA_LANGUAGE: JString;
    {class} function _GetEXTRA_LANGUAGE_MODEL: JString;
    {class} function _GetEXTRA_LANGUAGE_PREFERENCE: JString;
    {class} function _GetEXTRA_MAX_RESULTS: JString;
    {class} function _GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE: JString;
    {class} function _GetEXTRA_ORIGIN: JString;
    {class} function _GetEXTRA_PARTIAL_RESULTS: JString;
    {class} function _GetEXTRA_PROMPT: JString;
    {class} function _GetEXTRA_RESULTS: JString;
    {class} function _GetEXTRA_RESULTS_PENDINGINTENT: JString;
    {class} function _GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE: JString;
    {class} function _GetEXTRA_SECURE: JString;
    {class} function _GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS: JString;
    {class} function _GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS: JString;
    {class} function _GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS: JString;
    {class} function _GetEXTRA_SUPPORTED_LANGUAGES: JString;
    {class} function _GetEXTRA_WEB_SEARCH_ONLY: JString;
    {class} function _GetLANGUAGE_MODEL_FREE_FORM: JString;
    {class} function _GetLANGUAGE_MODEL_WEB_SEARCH: JString;
    {class} function _GetRESULT_AUDIO_ERROR: Integer;
    {class} function _GetRESULT_CLIENT_ERROR: Integer;
    {class} function _GetRESULT_NETWORK_ERROR: Integer;
    {class} function _GetRESULT_NO_MATCH: Integer;
    {class} function _GetRESULT_SERVER_ERROR: Integer;
    {class} function getVoiceDetailsIntent(context: JContext): JIntent; cdecl;
    {class} property ACTION_GET_LANGUAGE_DETAILS: JString read _GetACTION_GET_LANGUAGE_DETAILS;
    {class} property ACTION_RECOGNIZE_SPEECH: JString read _GetACTION_RECOGNIZE_SPEECH;
    {class} property ACTION_VOICE_SEARCH_HANDS_FREE: JString read _GetACTION_VOICE_SEARCH_HANDS_FREE;
    {class} property ACTION_WEB_SEARCH: JString read _GetACTION_WEB_SEARCH;
    {class} property DETAILS_META_DATA: JString read _GetDETAILS_META_DATA;
    {class} property EXTRA_CALLING_PACKAGE: JString read _GetEXTRA_CALLING_PACKAGE;
    {class} property EXTRA_CONFIDENCE_SCORES: JString read _GetEXTRA_CONFIDENCE_SCORES;
    {class} property EXTRA_LANGUAGE: JString read _GetEXTRA_LANGUAGE;
    {class} property EXTRA_LANGUAGE_MODEL: JString read _GetEXTRA_LANGUAGE_MODEL;
    {class} property EXTRA_LANGUAGE_PREFERENCE: JString read _GetEXTRA_LANGUAGE_PREFERENCE;
    {class} property EXTRA_MAX_RESULTS: JString read _GetEXTRA_MAX_RESULTS;
    {class} property EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE: JString read _GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE;
    {class} property EXTRA_ORIGIN: JString read _GetEXTRA_ORIGIN;
    {class} property EXTRA_PARTIAL_RESULTS: JString read _GetEXTRA_PARTIAL_RESULTS;
    {class} property EXTRA_PROMPT: JString read _GetEXTRA_PROMPT;
    {class} property EXTRA_RESULTS: JString read _GetEXTRA_RESULTS;
    {class} property EXTRA_RESULTS_PENDINGINTENT: JString read _GetEXTRA_RESULTS_PENDINGINTENT;
    {class} property EXTRA_RESULTS_PENDINGINTENT_BUNDLE: JString read _GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE;
    {class} property EXTRA_SECURE: JString read _GetEXTRA_SECURE;
    {class} property EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS: JString read _GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS;
    {class} property EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS: JString read _GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS;
    {class} property EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS: JString read _GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS;
    {class} property EXTRA_SUPPORTED_LANGUAGES: JString read _GetEXTRA_SUPPORTED_LANGUAGES;
    {class} property EXTRA_WEB_SEARCH_ONLY: JString read _GetEXTRA_WEB_SEARCH_ONLY;
    {class} property LANGUAGE_MODEL_FREE_FORM: JString read _GetLANGUAGE_MODEL_FREE_FORM;
    {class} property LANGUAGE_MODEL_WEB_SEARCH: JString read _GetLANGUAGE_MODEL_WEB_SEARCH;
    {class} property RESULT_AUDIO_ERROR: Integer read _GetRESULT_AUDIO_ERROR;
    {class} property RESULT_CLIENT_ERROR: Integer read _GetRESULT_CLIENT_ERROR;
    {class} property RESULT_NETWORK_ERROR: Integer read _GetRESULT_NETWORK_ERROR;
    {class} property RESULT_NO_MATCH: Integer read _GetRESULT_NO_MATCH;
    {class} property RESULT_SERVER_ERROR: Integer read _GetRESULT_SERVER_ERROR;
  end;

  [JavaSignature('android/speech/RecognizerIntent')]
  JRecognizerIntent = interface(JObject)
    ['{0432BC72-3F99-4EF0-9F02-B5E55BD974CE}']
  end;
  TJRecognizerIntent = class(TJavaGenericImport<JRecognizerIntentClass, JRecognizerIntent>) end;

  JRecognizerResultsIntentClass = interface(JObjectClass)
    ['{5F9C0F34-CE2D-4B4A-B432-49CF198F5AF2}']
    {class} function _GetACTION_VOICE_SEARCH_RESULTS: JString;
    {class} function _GetEXTRA_VOICE_SEARCH_RESULT_HTML: JString;
    {class} function _GetEXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS: JString;
    {class} function _GetEXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS: JString;
    {class} function _GetEXTRA_VOICE_SEARCH_RESULT_STRINGS: JString;
    {class} function _GetEXTRA_VOICE_SEARCH_RESULT_URLS: JString;
    {class} function _GetURI_SCHEME_INLINE: JString;
    {class} property ACTION_VOICE_SEARCH_RESULTS: JString read _GetACTION_VOICE_SEARCH_RESULTS;
    {class} property EXTRA_VOICE_SEARCH_RESULT_HTML: JString read _GetEXTRA_VOICE_SEARCH_RESULT_HTML;
    {class} property EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS: JString read _GetEXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS;
    {class} property EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS: JString read _GetEXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS;
    {class} property EXTRA_VOICE_SEARCH_RESULT_STRINGS: JString read _GetEXTRA_VOICE_SEARCH_RESULT_STRINGS;
    {class} property EXTRA_VOICE_SEARCH_RESULT_URLS: JString read _GetEXTRA_VOICE_SEARCH_RESULT_URLS;
    {class} property URI_SCHEME_INLINE: JString read _GetURI_SCHEME_INLINE;
  end;

  [JavaSignature('android/speech/RecognizerResultsIntent')]
  JRecognizerResultsIntent = interface(JObject)
    ['{ECEE440F-2767-455A-A868-81A4F4A72F24}']
  end;
  TJRecognizerResultsIntent = class(TJavaGenericImport<JRecognizerResultsIntentClass, JRecognizerResultsIntent>) end;

  JSpeechRecognizerClass = interface(JObjectClass)
    ['{256567F6-C4BF-4744-B1C9-F81311A1F18D}']
    {class} function _GetCONFIDENCE_SCORES: JString;
    {class} function _GetERROR_AUDIO: Integer;
    {class} function _GetERROR_CLIENT: Integer;
    {class} function _GetERROR_INSUFFICIENT_PERMISSIONS: Integer;
    {class} function _GetERROR_NETWORK: Integer;
    {class} function _GetERROR_NETWORK_TIMEOUT: Integer;
    {class} function _GetERROR_NO_MATCH: Integer;
    {class} function _GetERROR_RECOGNIZER_BUSY: Integer;
    {class} function _GetERROR_SERVER: Integer;
    {class} function _GetERROR_SPEECH_TIMEOUT: Integer;
    {class} function _GetRESULTS_RECOGNITION: JString;
    {class} function createSpeechRecognizer(context: JContext): JSpeechRecognizer; cdecl; overload;
    {class} function createSpeechRecognizer(context: JContext; serviceComponent: JComponentName): JSpeechRecognizer; cdecl; overload;
    {class} function isRecognitionAvailable(context: JContext): Boolean; cdecl;
    {class} property CONFIDENCE_SCORES: JString read _GetCONFIDENCE_SCORES;
    {class} property ERROR_AUDIO: Integer read _GetERROR_AUDIO;
    {class} property ERROR_CLIENT: Integer read _GetERROR_CLIENT;
    {class} property ERROR_INSUFFICIENT_PERMISSIONS: Integer read _GetERROR_INSUFFICIENT_PERMISSIONS;
    {class} property ERROR_NETWORK: Integer read _GetERROR_NETWORK;
    {class} property ERROR_NETWORK_TIMEOUT: Integer read _GetERROR_NETWORK_TIMEOUT;
    {class} property ERROR_NO_MATCH: Integer read _GetERROR_NO_MATCH;
    {class} property ERROR_RECOGNIZER_BUSY: Integer read _GetERROR_RECOGNIZER_BUSY;
    {class} property ERROR_SERVER: Integer read _GetERROR_SERVER;
    {class} property ERROR_SPEECH_TIMEOUT: Integer read _GetERROR_SPEECH_TIMEOUT;
    {class} property RESULTS_RECOGNITION: JString read _GetRESULTS_RECOGNITION;
  end;

  [JavaSignature('android/speech/SpeechRecognizer')]
  JSpeechRecognizer = interface(JObject)
    ['{A67520B9-5BB4-481E-9310-3A673D724235}']
    procedure cancel; cdecl;
    procedure destroy; cdecl;
    procedure setRecognitionListener(listener: JRecognitionListener); cdecl;
    procedure startListening(recognizerIntent: JIntent); cdecl;
    procedure stopListening; cdecl;
  end;
  TJSpeechRecognizer = class(TJavaGenericImport<JSpeechRecognizerClass, JSpeechRecognizer>) end;

  JSynthesisCallbackClass = interface(IJavaClass)
    ['{241AE5F6-F249-4B95-8D2D-1C5B068C57D2}']
  end;

  [JavaSignature('android/speech/tts/SynthesisCallback')]
  JSynthesisCallback = interface(IJavaInstance)
    ['{22155271-C2C9-4212-B0C6-01BE152D4F43}']
    function audioAvailable(buffer: TJavaArray<Byte>; offset: Integer; length: Integer): Integer; cdecl;
    function done: Integer; cdecl;
    procedure error; cdecl;
    function getMaxBufferSize: Integer; cdecl;
    function start(sampleRateInHz: Integer; audioFormat: Integer; channelCount: Integer): Integer; cdecl;
  end;
  TJSynthesisCallback = class(TJavaGenericImport<JSynthesisCallbackClass, JSynthesisCallback>) end;

  JSynthesisRequestClass = interface(JObjectClass)
    ['{6E0AE57B-6C0D-4C9D-AFE0-91676BA059C9}']
    {class} function init(text: JString; params: JBundle): JSynthesisRequest; cdecl;
  end;

  [JavaSignature('android/speech/tts/SynthesisRequest')]
  JSynthesisRequest = interface(JObject)
    ['{1E8FE9BA-9A87-40D7-9198-89C56CE2039C}']
    function getCallerUid: Integer; cdecl;
    function getCountry: JString; cdecl;
    function getLanguage: JString; cdecl;
    function getParams: JBundle; cdecl;
    function getPitch: Integer; cdecl;
    function getSpeechRate: Integer; cdecl;
    function getText: JString; cdecl;
    function getVariant: JString; cdecl;
  end;
  TJSynthesisRequest = class(TJavaGenericImport<JSynthesisRequestClass, JSynthesisRequest>) end;

  JTextToSpeechClass = interface(JObjectClass)
    ['{BE260883-0916-456E-B84C-6B237C8382DA}']
    {class} function _GetACTION_TTS_QUEUE_PROCESSING_COMPLETED: JString;
    {class} function _GetERROR: Integer;
    {class} function _GetLANG_AVAILABLE: Integer;
    {class} function _GetLANG_COUNTRY_AVAILABLE: Integer;
    {class} function _GetLANG_COUNTRY_VAR_AVAILABLE: Integer;
    {class} function _GetLANG_MISSING_DATA: Integer;
    {class} function _GetLANG_NOT_SUPPORTED: Integer;
    {class} function _GetQUEUE_ADD: Integer;
    {class} function _GetQUEUE_FLUSH: Integer;
    {class} function _GetSUCCESS: Integer;
    {class} function init(context: JContext; listener: JTextToSpeech_OnInitListener): JTextToSpeech; cdecl; overload;
    {class} function init(context: JContext; listener: JTextToSpeech_OnInitListener; engine: JString): JTextToSpeech; cdecl; overload;
    {class} function getMaxSpeechInputLength: Integer; cdecl;
    {class} property ACTION_TTS_QUEUE_PROCESSING_COMPLETED: JString read _GetACTION_TTS_QUEUE_PROCESSING_COMPLETED;
    {class} property ERROR: Integer read _GetERROR;
    {class} property LANG_AVAILABLE: Integer read _GetLANG_AVAILABLE;
    {class} property LANG_COUNTRY_AVAILABLE: Integer read _GetLANG_COUNTRY_AVAILABLE;
    {class} property LANG_COUNTRY_VAR_AVAILABLE: Integer read _GetLANG_COUNTRY_VAR_AVAILABLE;
    {class} property LANG_MISSING_DATA: Integer read _GetLANG_MISSING_DATA;
    {class} property LANG_NOT_SUPPORTED: Integer read _GetLANG_NOT_SUPPORTED;
    {class} property QUEUE_ADD: Integer read _GetQUEUE_ADD;
    {class} property QUEUE_FLUSH: Integer read _GetQUEUE_FLUSH;
    {class} property SUCCESS: Integer read _GetSUCCESS;
  end;

  [JavaSignature('android/speech/tts/TextToSpeech')]
  JTextToSpeech = interface(JObject)
    ['{38B05C3C-B672-4FEC-849B-0CF4D89AA507}']
    function addEarcon(earcon: JString; packagename: JString; resourceId: Integer): Integer; cdecl; overload;
    function addEarcon(earcon: JString; filename: JString): Integer; cdecl; overload;
    function addSpeech(text: JString; packagename: JString; resourceId: Integer): Integer; cdecl; overload;
    function addSpeech(text: JString; filename: JString): Integer; cdecl; overload;
    function areDefaultsEnforced: Boolean; cdecl;
    function getDefaultEngine: JString; cdecl;
    function getDefaultLanguage: JLocale; cdecl;
    function getEngines: JList; cdecl;
    function getFeatures(locale: JLocale): JSet; cdecl;
    function getLanguage: JLocale; cdecl;
    function isLanguageAvailable(loc: JLocale): Integer; cdecl;
    function isSpeaking: Boolean; cdecl;
    function playEarcon(earcon: JString; queueMode: Integer; params: JHashMap): Integer; cdecl;
    function playSilence(durationInMs: Int64; queueMode: Integer; params: JHashMap): Integer; cdecl;
    function setEngineByPackageName(enginePackageName: JString): Integer; cdecl;//Deprecated
    function setLanguage(loc: JLocale): Integer; cdecl;
    function setOnUtteranceCompletedListener(listener: JTextToSpeech_OnUtteranceCompletedListener): Integer; cdecl;//Deprecated
    function setOnUtteranceProgressListener(listener: JUtteranceProgressListener): Integer; cdecl;
    function setPitch(pitch: Single): Integer; cdecl;
    function setSpeechRate(speechRate: Single): Integer; cdecl;
    procedure shutdown; cdecl;
    function speak(text: JString; queueMode: Integer; params: JHashMap): Integer; cdecl;
    function stop: Integer; cdecl;
    function synthesizeToFile(text: JString; params: JHashMap; filename: JString): Integer; cdecl;
  end;
  TJTextToSpeech = class(TJavaGenericImport<JTextToSpeechClass, JTextToSpeech>) end;

  JTextToSpeech_EngineClass = interface(JObjectClass)
    ['{75457E65-C0B1-4AF3-A166-A553887479C5}']
    {class} function _GetACTION_CHECK_TTS_DATA: JString;
    {class} function _GetACTION_GET_SAMPLE_TEXT: JString;
    {class} function _GetACTION_INSTALL_TTS_DATA: JString;
    {class} function _GetACTION_TTS_DATA_INSTALLED: JString;
    {class} function _GetCHECK_VOICE_DATA_BAD_DATA: Integer;
    {class} function _GetCHECK_VOICE_DATA_FAIL: Integer;
    {class} function _GetCHECK_VOICE_DATA_MISSING_DATA: Integer;
    {class} function _GetCHECK_VOICE_DATA_MISSING_VOLUME: Integer;
    {class} function _GetCHECK_VOICE_DATA_PASS: Integer;
    {class} function _GetDEFAULT_STREAM: Integer;
    {class} function _GetEXTRA_AVAILABLE_VOICES: JString;
    {class} function _GetEXTRA_CHECK_VOICE_DATA_FOR: JString;
    {class} function _GetEXTRA_SAMPLE_TEXT: JString;
    {class} function _GetEXTRA_TTS_DATA_INSTALLED: JString;
    {class} function _GetEXTRA_UNAVAILABLE_VOICES: JString;
    {class} function _GetEXTRA_VOICE_DATA_FILES: JString;
    {class} function _GetEXTRA_VOICE_DATA_FILES_INFO: JString;
    {class} function _GetEXTRA_VOICE_DATA_ROOT_DIRECTORY: JString;
    {class} function _GetINTENT_ACTION_TTS_SERVICE: JString;
    {class} function _GetKEY_FEATURE_EMBEDDED_SYNTHESIS: JString;
    {class} function _GetKEY_FEATURE_NETWORK_SYNTHESIS: JString;
    {class} function _GetKEY_PARAM_PAN: JString;
    {class} function _GetKEY_PARAM_STREAM: JString;
    {class} function _GetKEY_PARAM_UTTERANCE_ID: JString;
    {class} function _GetKEY_PARAM_VOLUME: JString;
    {class} function _GetSERVICE_META_DATA: JString;
    {class} function init: JTextToSpeech_Engine; cdecl;
    {class} property ACTION_CHECK_TTS_DATA: JString read _GetACTION_CHECK_TTS_DATA;
    {class} property ACTION_GET_SAMPLE_TEXT: JString read _GetACTION_GET_SAMPLE_TEXT;
    {class} property ACTION_INSTALL_TTS_DATA: JString read _GetACTION_INSTALL_TTS_DATA;
    {class} property ACTION_TTS_DATA_INSTALLED: JString read _GetACTION_TTS_DATA_INSTALLED;
    {class} property CHECK_VOICE_DATA_BAD_DATA: Integer read _GetCHECK_VOICE_DATA_BAD_DATA;
    {class} property CHECK_VOICE_DATA_FAIL: Integer read _GetCHECK_VOICE_DATA_FAIL;
    {class} property CHECK_VOICE_DATA_MISSING_DATA: Integer read _GetCHECK_VOICE_DATA_MISSING_DATA;
    {class} property CHECK_VOICE_DATA_MISSING_VOLUME: Integer read _GetCHECK_VOICE_DATA_MISSING_VOLUME;
    {class} property CHECK_VOICE_DATA_PASS: Integer read _GetCHECK_VOICE_DATA_PASS;
    {class} property DEFAULT_STREAM: Integer read _GetDEFAULT_STREAM;
    {class} property EXTRA_AVAILABLE_VOICES: JString read _GetEXTRA_AVAILABLE_VOICES;
    {class} property EXTRA_CHECK_VOICE_DATA_FOR: JString read _GetEXTRA_CHECK_VOICE_DATA_FOR;
    {class} property EXTRA_SAMPLE_TEXT: JString read _GetEXTRA_SAMPLE_TEXT;
    {class} property EXTRA_TTS_DATA_INSTALLED: JString read _GetEXTRA_TTS_DATA_INSTALLED;
    {class} property EXTRA_UNAVAILABLE_VOICES: JString read _GetEXTRA_UNAVAILABLE_VOICES;
    {class} property EXTRA_VOICE_DATA_FILES: JString read _GetEXTRA_VOICE_DATA_FILES;
    {class} property EXTRA_VOICE_DATA_FILES_INFO: JString read _GetEXTRA_VOICE_DATA_FILES_INFO;
    {class} property EXTRA_VOICE_DATA_ROOT_DIRECTORY: JString read _GetEXTRA_VOICE_DATA_ROOT_DIRECTORY;
    {class} property INTENT_ACTION_TTS_SERVICE: JString read _GetINTENT_ACTION_TTS_SERVICE;
    {class} property KEY_FEATURE_EMBEDDED_SYNTHESIS: JString read _GetKEY_FEATURE_EMBEDDED_SYNTHESIS;
    {class} property KEY_FEATURE_NETWORK_SYNTHESIS: JString read _GetKEY_FEATURE_NETWORK_SYNTHESIS;
    {class} property KEY_PARAM_PAN: JString read _GetKEY_PARAM_PAN;
    {class} property KEY_PARAM_STREAM: JString read _GetKEY_PARAM_STREAM;
    {class} property KEY_PARAM_UTTERANCE_ID: JString read _GetKEY_PARAM_UTTERANCE_ID;
    {class} property KEY_PARAM_VOLUME: JString read _GetKEY_PARAM_VOLUME;
    {class} property SERVICE_META_DATA: JString read _GetSERVICE_META_DATA;
  end;

  [JavaSignature('android/speech/tts/TextToSpeech$Engine')]
  JTextToSpeech_Engine = interface(JObject)
    ['{A876F830-EEA2-4A8E-B40D-B7AA567205EE}']
  end;
  TJTextToSpeech_Engine = class(TJavaGenericImport<JTextToSpeech_EngineClass, JTextToSpeech_Engine>) end;

  JTextToSpeech_EngineInfoClass = interface(JObjectClass)
    ['{ECA80D2D-D36F-43E4-9820-90A8F2122E29}']
    {class} function init: JTextToSpeech_EngineInfo; cdecl;
  end;

  [JavaSignature('android/speech/tts/TextToSpeech$EngineInfo')]
  JTextToSpeech_EngineInfo = interface(JObject)
    ['{931C3765-0057-4A59-93EC-93CBEE991ADD}']
    function _Geticon: Integer;
    procedure _Seticon(Value: Integer);
    function _Getlabel: JString;
    procedure _Setlabel(Value: JString);
    function _Getname: JString;
    procedure _Setname(Value: JString);
    function toString: JString; cdecl;
    property icon: Integer read _Geticon write _Seticon;
    property &label: JString read _Getlabel write _Setlabel;
    property name: JString read _Getname write _Setname;
  end;
  TJTextToSpeech_EngineInfo = class(TJavaGenericImport<JTextToSpeech_EngineInfoClass, JTextToSpeech_EngineInfo>) end;

  JTextToSpeech_OnInitListenerClass = interface(IJavaClass)
    ['{B01450B5-524A-4B99-95DC-9158B7B8CC15}']
  end;

  [JavaSignature('android/speech/tts/TextToSpeech$OnInitListener')]
  JTextToSpeech_OnInitListener = interface(IJavaInstance)
    ['{94CC537C-E958-4EA5-B613-1465AEF6014B}']
    procedure onInit(status: Integer); cdecl;
  end;
  TJTextToSpeech_OnInitListener = class(TJavaGenericImport<JTextToSpeech_OnInitListenerClass, JTextToSpeech_OnInitListener>) end;

  JTextToSpeech_OnUtteranceCompletedListenerClass = interface(IJavaClass)
    ['{83D093B7-6FB6-46FE-A08E-1B0D25BDA841}']
  end;

  [JavaSignature('android/speech/tts/TextToSpeech$OnUtteranceCompletedListener')]
  JTextToSpeech_OnUtteranceCompletedListener = interface(IJavaInstance)
    ['{3EA0D21E-74E4-4204-A18F-2F68FE126E18}']
    procedure onUtteranceCompleted(utteranceId: JString); cdecl;
  end;
  TJTextToSpeech_OnUtteranceCompletedListener = class(TJavaGenericImport<JTextToSpeech_OnUtteranceCompletedListenerClass, JTextToSpeech_OnUtteranceCompletedListener>) end;

  JTextToSpeechServiceClass = interface(JServiceClass)
    ['{2A7E4DA5-50FC-43AA-8ACC-98487C02147B}']
    {class} function init: JTextToSpeechService; cdecl;
  end;

  [JavaSignature('android/speech/tts/TextToSpeechService')]
  JTextToSpeechService = interface(JService)
    ['{52D88001-D8F7-4D5B-8194-CF6AEFD0C918}']
    function onBind(intent: JIntent): JIBinder; cdecl;
    procedure onCreate; cdecl;
    procedure onDestroy; cdecl;
  end;
  TJTextToSpeechService = class(TJavaGenericImport<JTextToSpeechServiceClass, JTextToSpeechService>) end;

  JUtteranceProgressListenerClass = interface(JObjectClass)
    ['{9D335A6E-78BE-4060-B3C1-6028E603073D}']
    {class} function init: JUtteranceProgressListener; cdecl;
  end;

  [JavaSignature('android/speech/tts/UtteranceProgressListener')]
  JUtteranceProgressListener = interface(JObject)
    ['{75D1A7E1-86E7-47D6-B9EC-96F0D69DC535}']
    procedure onDone(utteranceId: JString); cdecl;
    procedure onError(utteranceId: JString); cdecl;
    procedure onStart(utteranceId: JString); cdecl;
  end;
  TJUtteranceProgressListener = class(TJavaGenericImport<JUtteranceProgressListenerClass, JUtteranceProgressListener>) end;
{$ENDIF}
implementation

{$IFDEF ANDROID}

procedure RegisterTypes;
begin
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JRecognitionListener', TypeInfo(Androidapi.JNI.Speech.JRecognitionListener));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JRecognitionService', TypeInfo(Androidapi.JNI.Speech.JRecognitionService));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JRecognitionService_Callback', TypeInfo(Androidapi.JNI.Speech.JRecognitionService_Callback));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JRecognizerIntent', TypeInfo(Androidapi.JNI.Speech.JRecognizerIntent));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JRecognizerResultsIntent', TypeInfo(Androidapi.JNI.Speech.JRecognizerResultsIntent));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JSpeechRecognizer', TypeInfo(Androidapi.JNI.Speech.JSpeechRecognizer));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JSynthesisCallback', TypeInfo(Androidapi.JNI.Speech.JSynthesisCallback));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JSynthesisRequest', TypeInfo(Androidapi.JNI.Speech.JSynthesisRequest));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JTextToSpeech', TypeInfo(Androidapi.JNI.Speech.JTextToSpeech));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JTextToSpeech_Engine', TypeInfo(Androidapi.JNI.Speech.JTextToSpeech_Engine));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JTextToSpeech_EngineInfo', TypeInfo(Androidapi.JNI.Speech.JTextToSpeech_EngineInfo));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JTextToSpeech_OnInitListener', TypeInfo(Androidapi.JNI.Speech.JTextToSpeech_OnInitListener));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JTextToSpeech_OnUtteranceCompletedListener', TypeInfo(Androidapi.JNI.Speech.JTextToSpeech_OnUtteranceCompletedListener));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JTextToSpeechService', TypeInfo(Androidapi.JNI.Speech.JTextToSpeechService));
  TRegTypes.RegisterType('Androidapi.JNI.Speech.JUtteranceProgressListener', TypeInfo(Androidapi.JNI.Speech.JUtteranceProgressListener));
end;

initialization
  RegisterTypes;

{$ENDIF}

end.


