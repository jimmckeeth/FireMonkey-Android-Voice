// Need RECORD_AUDIO Permission

unit android.speech.SpeechRecognizer;

interface

{$IFDEF ANDROID}
uses
  AndroidAPI.JNIBridge,
  Androidapi.JNI.JavaTypes,
  Androidapi.JNI.Os,
  Androidapi.JNI.GraphicsContentViewText;
type
  JSpeechRecognizer = interface;
  JRecognitionListener = interface;
  JRecognizerIntent = interface;

  JSpeechRecognizerClass = interface(JObjectClass)
    ['{88580157-3372-4534-A141-96E730D15BE0}']
    function _GetCONFIDENCE_SCORES : JString; cdecl;                            //  A: $19
    function _GetERROR_AUDIO : Integer; cdecl;                                  //  A: $19
    function _GetERROR_CLIENT : Integer; cdecl;                                 //  A: $19
    function _GetERROR_INSUFFICIENT_PERMISSIONS : Integer; cdecl;               //  A: $19
    function _GetERROR_NETWORK : Integer; cdecl;                                //  A: $19
    function _GetERROR_NETWORK_TIMEOUT : Integer; cdecl;                        //  A: $19
    function _GetERROR_NO_MATCH : Integer; cdecl;                               //  A: $19
    function _GetERROR_RECOGNIZER_BUSY : Integer; cdecl;                        //  A: $19
    function _GetERROR_SERVER : Integer; cdecl;                                 //  A: $19
    function _GetERROR_SPEECH_TIMEOUT : Integer; cdecl;                         //  A: $19
    function _GetRESULTS_RECOGNITION : JString; cdecl;                          //  A: $19
    function createSpeechRecognizer(context : JContext) : JSpeechRecognizer; cdecl; overload;// (Landroid/content/Context;)Landroid/speech/SpeechRecognizer; A: $9
    function createSpeechRecognizer(context : JContext; serviceComponent : JComponentName) : JSpeechRecognizer; cdecl; overload;// (Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer; A: $9
    function isRecognitionAvailable(context : JContext) : boolean; cdecl;       // (Landroid/content/Context;)Z A: $9
    procedure cancel ; cdecl;                                                   // ()V A: $1
    procedure destroy ; cdecl;                                                  // ()V A: $1
    procedure setRecognitionListener(listener : JRecognitionListener) ; cdecl;  // (Landroid/speech/RecognitionListener;)V A: $1
    procedure startListening(recognizerIntent : JIntent) ; cdecl;               // (Landroid/content/Intent;)V A: $1
    procedure stopListening ; cdecl;                                            // ()V A: $1
    property CONFIDENCE_SCORES : JString read _GetCONFIDENCE_SCORES;            // Ljava/lang/String; A: $19
    property ERROR_AUDIO : Integer read _GetERROR_AUDIO;                        // I A: $19
    property ERROR_CLIENT : Integer read _GetERROR_CLIENT;                      // I A: $19
    property ERROR_INSUFFICIENT_PERMISSIONS : Integer read _GetERROR_INSUFFICIENT_PERMISSIONS;// I A: $19
    property ERROR_NETWORK : Integer read _GetERROR_NETWORK;                    // I A: $19
    property ERROR_NETWORK_TIMEOUT : Integer read _GetERROR_NETWORK_TIMEOUT;    // I A: $19
    property ERROR_NO_MATCH : Integer read _GetERROR_NO_MATCH;                  // I A: $19
    property ERROR_RECOGNIZER_BUSY : Integer read _GetERROR_RECOGNIZER_BUSY;    // I A: $19
    property ERROR_SERVER : Integer read _GetERROR_SERVER;                      // I A: $19
    property ERROR_SPEECH_TIMEOUT : Integer read _GetERROR_SPEECH_TIMEOUT;      // I A: $19
    property RESULTS_RECOGNITION : JString read _GetRESULTS_RECOGNITION;        // Ljava/lang/String; A: $19
  end;

  [JavaSignature('android/speech/SpeechRecognizer')]
  JSpeechRecognizer = interface(JObject)
    ['{F76A683F-F90D-489E-A9B6-D167ED3C7658}']
    procedure cancel ; cdecl;                                                   // ()V A: $1
    procedure destroy ; cdecl;                                                  // ()V A: $1
    procedure setRecognitionListener(listener : JRecognitionListener) ; cdecl;  // (Landroid/speech/RecognitionListener;)V A: $1
    procedure startListening(recognizerIntent : JIntent) ; cdecl;               // (Landroid/content/Intent;)V A: $1
    procedure stopListening ; cdecl;                                            // ()V A: $1
  end;

  TJSpeechRecognizer = class(TJavaGenericImport<JSpeechRecognizerClass, JSpeechRecognizer>)
  end;

  JRecognitionListenerClass = interface(JObjectClass)
    ['{2D6FFE3E-233C-4DC9-819C-22C9BEF470A1}']
    procedure onBeginningOfSpeech ; cdecl;                                      // ()V A: $401
    procedure onBufferReceived(TJavaArrayByteparam0 : TJavaArray<Byte>) ; cdecl;// ([B)V A: $401
    procedure onEndOfSpeech ; cdecl;                                            // ()V A: $401
    procedure onError(Integerparam0 : Integer) ; cdecl;                         // (I)V A: $401
    procedure onEvent(Integerparam0 : Integer; JBundleparam1 : JBundle) ; cdecl;// (ILandroid/os/Bundle;)V A: $401
    procedure onPartialResults(JBundleparam0 : JBundle) ; cdecl;                // (Landroid/os/Bundle;)V A: $401
    procedure onReadyForSpeech(JBundleparam0 : JBundle) ; cdecl;                // (Landroid/os/Bundle;)V A: $401
    procedure onResults(JBundleparam0 : JBundle) ; cdecl;                       // (Landroid/os/Bundle;)V A: $401
    procedure onRmsChanged(Singleparam0 : Single) ; cdecl;                      // (F)V A: $401
  end;

  [JavaSignature('android/speech/RecognitionListener')]
  JRecognitionListener = interface(JObject)
    ['{E636176D-E6C2-405C-94C1-CC08701DFFAA}']
    procedure onBeginningOfSpeech ; cdecl;                                      // ()V A: $401
    procedure onBufferReceived(TJavaArrayByteparam0 : TJavaArray<Byte>) ; cdecl;// ([B)V A: $401
    procedure onEndOfSpeech ; cdecl;                                            // ()V A: $401
    procedure onError(Integerparam0 : Integer) ; cdecl;                         // (I)V A: $401
    procedure onEvent(Integerparam0 : Integer; JBundleparam1 : JBundle) ; cdecl;// (ILandroid/os/Bundle;)V A: $401
    procedure onPartialResults(JBundleparam0 : JBundle) ; cdecl;                // (Landroid/os/Bundle;)V A: $401
    procedure onReadyForSpeech(JBundleparam0 : JBundle) ; cdecl;                // (Landroid/os/Bundle;)V A: $401
    procedure onResults(JBundleparam0 : JBundle) ; cdecl;                       // (Landroid/os/Bundle;)V A: $401
    procedure onRmsChanged(Singleparam0 : Single) ; cdecl;                      // (F)V A: $401
  end;

  TJRecognitionListener = class(TJavaGenericImport<JRecognitionListenerClass, JRecognitionListener>)
  end;

  JRecognizerIntentClass = interface(JObjectClass)
    ['{028F22D9-0B41-4DA7-8C4C-4E1E07E40DF0}']
    function _GetACTION_GET_LANGUAGE_DETAILS : JString; cdecl;                  //  A: $19
    function _GetACTION_RECOGNIZE_SPEECH : JString; cdecl;                      //  A: $19
    function _GetACTION_VOICE_SEARCH_HANDS_FREE : JString; cdecl;               //  A: $19
    function _GetACTION_WEB_SEARCH : JString; cdecl;                            //  A: $19
    function _GetDETAILS_META_DATA : JString; cdecl;                            //  A: $19
    function _GetEXTRA_CALLING_PACKAGE : JString; cdecl;                        //  A: $19
    function _GetEXTRA_CONFIDENCE_SCORES : JString; cdecl;                      //  A: $19
    function _GetEXTRA_LANGUAGE : JString; cdecl;                               //  A: $19
    function _GetEXTRA_LANGUAGE_MODEL : JString; cdecl;                         //  A: $19
    function _GetEXTRA_LANGUAGE_PREFERENCE : JString; cdecl;                    //  A: $19
    function _GetEXTRA_MAX_RESULTS : JString; cdecl;                            //  A: $19
    function _GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE : JString; cdecl;        //  A: $19
    function _GetEXTRA_ORIGIN : JString; cdecl;                                 //  A: $19
    function _GetEXTRA_PARTIAL_RESULTS : JString; cdecl;                        //  A: $19
    function _GetEXTRA_PROMPT : JString; cdecl;                                 //  A: $19
    function _GetEXTRA_RESULTS : JString; cdecl;                                //  A: $19
    function _GetEXTRA_RESULTS_PENDINGINTENT : JString; cdecl;                  //  A: $19
    function _GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE : JString; cdecl;           //  A: $19
    function _GetEXTRA_SECURE : JString; cdecl;                                 //  A: $19
    function _GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS : JString; cdecl;//  A: $19
    function _GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS : JString; cdecl;     //  A: $19
    function _GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS : JString; cdecl;//  A: $19
    function _GetEXTRA_SUPPORTED_LANGUAGES : JString; cdecl;                    //  A: $19
    function _GetEXTRA_WEB_SEARCH_ONLY : JString; cdecl;                        //  A: $19
    function _GetLANGUAGE_MODEL_FREE_FORM : JString; cdecl;                     //  A: $19
    function _GetLANGUAGE_MODEL_WEB_SEARCH : JString; cdecl;                    //  A: $19
    function _GetRESULT_AUDIO_ERROR : Integer; cdecl;                           //  A: $19
    function _GetRESULT_CLIENT_ERROR : Integer; cdecl;                          //  A: $19
    function _GetRESULT_NETWORK_ERROR : Integer; cdecl;                         //  A: $19
    function _GetRESULT_NO_MATCH : Integer; cdecl;                              //  A: $19
    function _GetRESULT_SERVER_ERROR : Integer; cdecl;                          //  A: $19
    function getVoiceDetailsIntent(context : JContext) : JIntent; cdecl;        // (Landroid/content/Context;)Landroid/content/Intent; A: $19
    property ACTION_GET_LANGUAGE_DETAILS : JString read _GetACTION_GET_LANGUAGE_DETAILS;// Ljava/lang/String; A: $19
    property ACTION_RECOGNIZE_SPEECH : JString read _GetACTION_RECOGNIZE_SPEECH;// Ljava/lang/String; A: $19
    property ACTION_VOICE_SEARCH_HANDS_FREE : JString read _GetACTION_VOICE_SEARCH_HANDS_FREE;// Ljava/lang/String; A: $19
    property ACTION_WEB_SEARCH : JString read _GetACTION_WEB_SEARCH;            // Ljava/lang/String; A: $19
    property DETAILS_META_DATA : JString read _GetDETAILS_META_DATA;            // Ljava/lang/String; A: $19
    property EXTRA_CALLING_PACKAGE : JString read _GetEXTRA_CALLING_PACKAGE;    // Ljava/lang/String; A: $19
    property EXTRA_CONFIDENCE_SCORES : JString read _GetEXTRA_CONFIDENCE_SCORES;// Ljava/lang/String; A: $19
    property EXTRA_LANGUAGE : JString read _GetEXTRA_LANGUAGE;                  // Ljava/lang/String; A: $19
    property EXTRA_LANGUAGE_MODEL : JString read _GetEXTRA_LANGUAGE_MODEL;      // Ljava/lang/String; A: $19
    property EXTRA_LANGUAGE_PREFERENCE : JString read _GetEXTRA_LANGUAGE_PREFERENCE;// Ljava/lang/String; A: $19
    property EXTRA_MAX_RESULTS : JString read _GetEXTRA_MAX_RESULTS;            // Ljava/lang/String; A: $19
    property EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE : JString read _GetEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE;// Ljava/lang/String; A: $19
    property EXTRA_ORIGIN : JString read _GetEXTRA_ORIGIN;                      // Ljava/lang/String; A: $19
    property EXTRA_PARTIAL_RESULTS : JString read _GetEXTRA_PARTIAL_RESULTS;    // Ljava/lang/String; A: $19
    property EXTRA_PROMPT : JString read _GetEXTRA_PROMPT;                      // Ljava/lang/String; A: $19
    property EXTRA_RESULTS : JString read _GetEXTRA_RESULTS;                    // Ljava/lang/String; A: $19
    property EXTRA_RESULTS_PENDINGINTENT : JString read _GetEXTRA_RESULTS_PENDINGINTENT;// Ljava/lang/String; A: $19
    property EXTRA_RESULTS_PENDINGINTENT_BUNDLE : JString read _GetEXTRA_RESULTS_PENDINGINTENT_BUNDLE;// Ljava/lang/String; A: $19
    property EXTRA_SECURE : JString read _GetEXTRA_SECURE;                      // Ljava/lang/String; A: $19
    property EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS : JString read _GetEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS;// Ljava/lang/String; A: $19
    property EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS : JString read _GetEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS;// Ljava/lang/String; A: $19
    property EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS : JString read _GetEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS;// Ljava/lang/String; A: $19
    property EXTRA_SUPPORTED_LANGUAGES : JString read _GetEXTRA_SUPPORTED_LANGUAGES;// Ljava/lang/String; A: $19
    property EXTRA_WEB_SEARCH_ONLY : JString read _GetEXTRA_WEB_SEARCH_ONLY;    // Ljava/lang/String; A: $19
    property LANGUAGE_MODEL_FREE_FORM : JString read _GetLANGUAGE_MODEL_FREE_FORM;// Ljava/lang/String; A: $19
    property LANGUAGE_MODEL_WEB_SEARCH : JString read _GetLANGUAGE_MODEL_WEB_SEARCH;// Ljava/lang/String; A: $19
    property RESULT_AUDIO_ERROR : Integer read _GetRESULT_AUDIO_ERROR;          // I A: $19
    property RESULT_CLIENT_ERROR : Integer read _GetRESULT_CLIENT_ERROR;        // I A: $19
    property RESULT_NETWORK_ERROR : Integer read _GetRESULT_NETWORK_ERROR;      // I A: $19
    property RESULT_NO_MATCH : Integer read _GetRESULT_NO_MATCH;                // I A: $19
    property RESULT_SERVER_ERROR : Integer read _GetRESULT_SERVER_ERROR;        // I A: $19
  end;

  [JavaSignature('android/speech/RecognizerIntent')]
  JRecognizerIntent = interface(JObject)
    ['{FE722411-65FA-4B52-A721-37330C246156}']
  end;

  TJRecognizerIntent = class(TJavaGenericImport<JRecognizerIntentClass, JRecognizerIntent>)
  end;

const
  TJRecognizerIntentEXTRA_CALLING_PACKAGE = 'calling_package';
  TJRecognizerIntentACTION_RECOGNIZE_SPEECH = 'android.speech.action.RECOGNIZE_SPEECH';
  TJRecognizerIntentACTION_WEB_SEARCH = 'android.speech.action.WEB_SEARCH';
  TJRecognizerIntentACTION_VOICE_SEARCH_HANDS_FREE = 'android.speech.action.VOICE_SEARCH_HANDS_FREE';
  TJRecognizerIntentEXTRA_SECURE = 'android.speech.extras.EXTRA_SECURE';
  TJRecognizerIntentEXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS = 'android.speech.extras.SPEECH_INPUT_MINIMUM_LENGTH_MILLIS';
  TJRecognizerIntentEXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS = 'android.speech.extras.SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS';
  TJRecognizerIntentEXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS = 'android.speech.extras.SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS';
  TJRecognizerIntentEXTRA_LANGUAGE_MODEL = 'android.speech.extra.LANGUAGE_MODEL';
  TJRecognizerIntentLANGUAGE_MODEL_FREE_FORM = 'free_form';
  TJRecognizerIntentLANGUAGE_MODEL_WEB_SEARCH = 'web_search';
  TJRecognizerIntentEXTRA_PROMPT = 'android.speech.extra.PROMPT';
  TJRecognizerIntentEXTRA_LANGUAGE = 'android.speech.extra.LANGUAGE';
  TJRecognizerIntentEXTRA_ORIGIN = 'android.speech.extra.ORIGIN';
  TJRecognizerIntentEXTRA_MAX_RESULTS = 'android.speech.extra.MAX_RESULTS';
  TJRecognizerIntentEXTRA_WEB_SEARCH_ONLY = 'android.speech.extra.WEB_SEARCH_ONLY';
  TJRecognizerIntentEXTRA_PARTIAL_RESULTS = 'android.speech.extra.PARTIAL_RESULTS';
  TJRecognizerIntentEXTRA_RESULTS_PENDINGINTENT = 'android.speech.extra.RESULTS_PENDINGINTENT';
  TJRecognizerIntentEXTRA_RESULTS_PENDINGINTENT_BUNDLE = 'android.speech.extra.RESULTS_PENDINGINTENT_BUNDLE';
  TJRecognizerIntentRESULT_NO_MATCH = 1;
  TJRecognizerIntentRESULT_CLIENT_ERROR = 2;
  TJRecognizerIntentRESULT_SERVER_ERROR = 3;
  TJRecognizerIntentRESULT_NETWORK_ERROR = 4;
  TJRecognizerIntentRESULT_AUDIO_ERROR = 5;
  TJRecognizerIntentEXTRA_RESULTS = 'android.speech.extra.RESULTS';
  TJRecognizerIntentEXTRA_CONFIDENCE_SCORES = 'android.speech.extra.CONFIDENCE_SCORES';
  TJRecognizerIntentDETAILS_META_DATA = 'android.speech.DETAILS';
  TJRecognizerIntentACTION_GET_LANGUAGE_DETAILS = 'android.speech.action.GET_LANGUAGE_DETAILS';
  TJRecognizerIntentEXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE = 'android.speech.extra.ONLY_RETURN_LANGUAGE_PREFERENCE';
  TJRecognizerIntentEXTRA_LANGUAGE_PREFERENCE = 'android.speech.extra.LANGUAGE_PREFERENCE';
  TJRecognizerIntentEXTRA_SUPPORTED_LANGUAGES = 'android.speech.extra.SUPPORTED_LANGUAGES';
  TJSpeechRecognizerRESULTS_RECOGNITION = 'results_recognition';
  TJSpeechRecognizerCONFIDENCE_SCORES = 'confidence_scores';
  TJSpeechRecognizerERROR_NETWORK_TIMEOUT = 1;
  TJSpeechRecognizerERROR_NETWORK = 2;
  TJSpeechRecognizerERROR_AUDIO = 3;
  TJSpeechRecognizerERROR_SERVER = 4;
  TJSpeechRecognizerERROR_CLIENT = 5;
  TJSpeechRecognizerERROR_SPEECH_TIMEOUT = 6;
  TJSpeechRecognizerERROR_NO_MATCH = 7;
  TJSpeechRecognizerERROR_RECOGNIZER_BUSY = 8;
  TJSpeechRecognizerERROR_INSUFFICIENT_PERMISSIONS = 9;

{$ENDIF}

implementation

end.
