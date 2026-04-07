// Combined stub: libGaiaClient_vnd.so, libosenseaidlhalclient.so, libsensorndkbridge.so
// vendor.oplus.hardware.osense.client-V1-ndk_platform.so, vendor.oplus.hardware.olc2-V2-ndk_platform.so
#include "stub_macros.h"
#include <cstddef>
#include <time.h>

// ============================================================
// GAIA Client (libGaiaClient_vnd.so)
// ============================================================

__attribute__((visibility("default"))) extern "C" void _ZN4GAIA10send_eventEmmNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(uint64_t,uint64_t,void*){}
__attribute__((visibility("default"))) extern "C" void _ZN4GAIA10send_eventEmm(uint64_t,uint64_t){}
__attribute__((visibility("default"))) extern "C" void _ZN4GAIA10send_eventENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void*){}

STUB_STR(_ZN4GAIA11EventClient9sendEventENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE)
STUB_STR(_ZN4GAIA11EventClient15sendEventIntimeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE)
STUB_PTR(_ZN4GAIA12EventWrapper12baseInfoWrapEv)
STUB_PTR(_ZN4GAIA12EventWrapper16createJsonStringEv)
STUB_PTR(_ZN4GAIA12EventWrapper4wrapEv)

STUB_VTABLE(_ZTVN4GAIA10RetryQueueE)
__attribute__((visibility("default"))) extern "C" void _ZN4GAIA10RetryQueue10queueEventENSt3__110shared_ptrINS_11EventClientEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void*,void*,void*){}
STUB_VOID(_ZN4GAIA10RetryQueue14retrySendEventEv)
STUB_DATA(_ZN4GAIA9SingletonINS_10RetryQueueEE9instance_E, 8)
__attribute__((visibility("default"))) extern "C" uint64_t _ZGVN4GAIA9SingletonINS_10RetryQueueEE9instance_E = 0;

STUB_CTOR(_ZN7android17OlcHalServiceAidlC1Ev)
STUB_CTOR(_ZN7android17OlcHalServiceAidlC2Ev)
STUB_VOID(_ZN7android17OlcHalServiceAidlD1Ev)
STUB_VOID(_ZN7android17OlcHalServiceAidlD2Ev)
STUB_PTR(_ZN7android17OlcHalServiceAidl10getServiceEv)
__attribute__((visibility("default"))) extern "C" bool _ZN7android17OlcHalServiceAidl5existEv(){return false;}
__attribute__((visibility("default"))) extern "C" void _ZN7android17OlcHalServiceAidl14raiseExceptionEN4aidl6vendor5oplus8hardware4olc213ExceptionInfoE(void*,int32_t){}

STUB_CTOR(_ZN7android9SingletonINS_17OlcHalServiceAidlEEC1Ev)
STUB_CTOR(_ZN7android9SingletonINS_17OlcHalServiceAidlEEC2Ev)
STUB_VOID(_ZN7android9SingletonINS_17OlcHalServiceAidlEED1Ev)
STUB_VOID(_ZN7android9SingletonINS_17OlcHalServiceAidlEED2Ev)
STUB_PTR(_ZN7android9SingletonINS_17OlcHalServiceAidlEE11getInstanceEv)
__attribute__((visibility("default"))) extern "C" bool _ZN7android9SingletonINS_17OlcHalServiceAidlEE11hasInstanceEv(){return false;}
STUB_DATA_PTR(_ZN7android9SingletonINS_17OlcHalServiceAidlEE9sInstanceE)
STUB_DATA(_ZN7android9SingletonINS_17OlcHalServiceAidlEE5sLockE, 64)

STUB_DATA(_ZN4aidl6vendor5oplus8hardware4olc213IOplusLogCore4hashE, 24)
__attribute__((visibility("default"))) extern "C" uint64_t _ZGVN4aidl6vendor5oplus8hardware4olc213IOplusLogCore4hashE = 0;
STUB_DATA(_ZN4aidl6vendor5oplus8hardware4olc226IOplusLogCoreEventCallback4hashE, 24)
__attribute__((visibility("default"))) extern "C" uint64_t _ZGVN4aidl6vendor5oplus8hardware4olc226IOplusLogCoreEventCallback4hashE = 0;

STUB_VTABLE(_ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE)
STUB_VTABLE(_ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE)
__attribute__((visibility("default"))) extern "C" void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE[4] = {};
__attribute__((visibility("default"))) extern "C" void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE[8] = {};

__attribute__((visibility("default"))) extern "C" int32_t _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void*,int64_t,int32_t,uint32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void*,int32_t){return -1;}
__attribute__((visibility("default"))) extern "C" int32_t _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void*){return -1;}
__attribute__((visibility("default"))) extern "C" int32_t _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void*,int32_t){return -1;}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__110__list_impINS_4pairINS_10shared_ptrIN4GAIA11EventClientEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS9_ISC_EEE5clearEv(void*){}

// ============================================================
// Osense Client (libosenseaidlhalclient.so)
// ============================================================

STUB_VTABLE(_ZTVN6osense19OsenseAidlHalClientE)
__attribute__((visibility("default"))) extern "C" void* _ZTTN6osense19OsenseAidlHalClientE[4] = {};
__attribute__((visibility("default"))) extern "C" const char* _ZN6osense10descriptorE = "osense";
__attribute__((visibility("default"))) extern "C" const char* _ZN6osense12service_nameE = "osense";

static char sOsenseInstance[512];
__attribute__((visibility("default"))) extern "C" void* _ZN6osense19OsenseAidlHalClient3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(const void*){return sOsenseInstance;}

STUB_VOID(_ZN6osense19OsenseAidlHalClientD0Ev)
STUB_VOID(_ZN6osense19OsenseAidlHalClientD1Ev)
STUB_VOID(_ZN6osense19OsenseAidlHalClientD2Ev)
STUB_VOID(_ZTv0_n24_N6osense19OsenseAidlHalClientD0Ev)
STUB_VOID(_ZTv0_n24_N6osense19OsenseAidlHalClientD1Ev)

__attribute__((visibility("default"))) extern "C" void _ZN6osense19OsenseAidlHalClient20osenseSetSceneActionERKNS_10sa_requestE(void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZN6osense19OsenseAidlHalClient20osenseClrSceneActionEl(void*,int64_t){}
__attribute__((visibility("default"))) extern "C" void _ZN6osense19OsenseAidlHalClient21osenseSetNotificationERKNS_14notify_requestE(void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZN6osense19OsenseAidlHalClient17osenseSetCtrlDataERKN7android8String16ERKNS_19osense_control_infoE(void*,const void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZN6osense19OsenseAidlHalClient19osenseResetCtrlDataERKN7android8String16E(void*,const void*){}
__attribute__((visibility("default"))) extern "C" int32_t _ZN6osense19OsenseAidlHalClient21checkAccessPermissionERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void*,const void*){return 0;}
STUB_VOID(_ZN6osense19OsenseAidlHalClient32connOsenseAidlHalReporterServiceEv)
STUB_VOID(_ZN6osense19OsenseAidlHalClient17handleBinderDeathEv)
__attribute__((visibility("default"))) extern "C" void _ZN6osense19OsenseAidlHalClient12onBinderDiedEPv(void*){}
__attribute__((visibility("default"))) extern "C" int32_t _ZN6osense19OsenseAidlHalClient18obtainRandomHandleEv(void*){return 0;}
STUB_DATA(_ZN6osense19OsenseAidlHalClient12dynCreateMapE, 64)

// UahLibCall functions
__attribute__((visibility("default"))) extern "C" void _ZN10UahLibCall10loadLibUahEv(){}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall10UahRuleCtlEiiRNSt3__16vectorINS_8ResourceENS0_9allocatorIS2_EEEE(int32_t,int32_t,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall10UahReleaseEi(int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall9UahNotifyEiiRNSt3__16vectorIiNS0_9allocatorIiEEEE(int32_t,int32_t,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall15UahEventAcquireEiRNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_iRNS0_6vectorINS_8ResourceENS4_IS9_EEEE(int32_t,void*,void*,int32_t,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall13UahResAcquireERNSt3__16vectorINS_8ResourceENS0_9allocatorIS2_EEEEiRNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEEi(void*,int32_t,void*,int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall13UahGetHistoryERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall18UahPlatformReleaseEi(int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall25UahPlatformRegisterHandleEii(int32_t,int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall17setRelatedSysInfoEiRNSt3__16vectorIhNS0_9allocatorIhEEEE(int32_t,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall21UahPlatformResAcquireERNSt3__16vectorINS_8ResourceENS0_9allocatorIS2_EEEEiRNS0_12basic_stringIcNS0_11char_traitsIcEENS3_IcEEEESC_i(void*,int32_t,void*,void*,int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall16UahNotifyWrapperENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEiiiiiS6_(void*,int32_t,int32_t,int32_t,int32_t,int32_t,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall22UahEventAcquireWrapperENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERS6_S7_i(void*,void*,void*,int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int32_t _ZN10UahLibCall17UahReleaseWrapperEi(int32_t){return 0;}

STUB_DATA_PTR(_ZN10UahLibCall16gUahEventAcquireE)
STUB_DATA_PTR(_ZN10UahLibCall23gUahEventAcquireWrapperE)
STUB_DATA_PTR(_ZN10UahLibCall11gUahReleaseE)
STUB_DATA_PTR(_ZN10UahLibCall16gUahReleaseWappeE)
STUB_DATA_PTR(_ZN10UahLibCall10gUahNotifyE)
STUB_DATA_PTR(_ZN10UahLibCall16gUahNotifyWapperE)
STUB_DATA_PTR(_ZN10UahLibCall14gUahResAcquireE)
STUB_DATA_PTR(_ZN10UahLibCall14gUahGetHistoryE)
STUB_DATA_PTR(_ZN10UahLibCall11gUahRuleCtlE)
STUB_DATA_PTR(_ZN10UahLibCall18gSetRelatedSysInfoE)
STUB_DATA_PTR(_ZN10UahLibCall22gUahPlatformResAcquireE)
STUB_DATA(_ZN10UahLibCall13gPlatHd2UahHdE, 64)
STUB_DATA(_ZN10UahLibCall13gUahLibStatusE, 4)

STUB_DATA(_ZN4aidl6vendor5oplus8hardware6osense6client22IOsenseAidlHalReporter4hashE, 24)
__attribute__((visibility("default"))) extern "C" uint64_t _ZGVN4aidl6vendor5oplus8hardware6osense6client22IOsenseAidlHalReporter4hashE = 0;

__attribute__((visibility("default"))) extern "C" void _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void*,void*){}
__attribute__((visibility("default"))) extern "C" void* _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6osense19OsenseAidlHalClientEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void*,void*,void*,void*){return nullptr;}
__attribute__((visibility("default"))) extern "C" void* _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6osense19OsenseAidlHalClientEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEERKT_(void*,void*){static char buf[64];return buf;}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6osense19OsenseAidlHalClientEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorIN4aidl6vendor5oplus8hardware6osense6client20OsenseCpuControlDataENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorIN4aidl6vendor5oplus8hardware6osense6client16OsenseCpuMIGDataENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorIN4aidl6vendor5oplus8hardware6osense6client20OsenseGpuControlDataENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorIN4aidl6vendor5oplus8hardware6osense6client20OsenseCpuControlDataENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void*,void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorIN4aidl6vendor5oplus8hardware6osense6client16OsenseCpuMIGDataENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void*,void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorIN4aidl6vendor5oplus8hardware6osense6client20OsenseGpuControlDataENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void*,void*,void*){}
__attribute__((visibility("default"))) extern "C" void* _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void* stream,const char*,size_t){return stream;}
__attribute__((visibility("default"))) extern "C" void* _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void* stream,const void*){return stream;}

// ============================================================
// Sensor Bridge (libsensorndkbridge.so)
// ============================================================

static char sFakeSensorMgr[256];
static char sFakeQueue[256];
static char sFakeSensor[64];
static char sFakeLooper[64];

__attribute__((visibility("default"))) extern "C" void* ASensorManager_getInstance(){return sFakeSensorMgr;}
__attribute__((visibility("default"))) extern "C" void* ASensorManager_getInstanceForPackage(const char*){return sFakeSensorMgr;}
__attribute__((visibility("default"))) extern "C" int ASensorManager_getSensorList(void*,const void**){return 0;}
__attribute__((visibility("default"))) extern "C" void* ASensorManager_getDefaultSensor(void*,int){return sFakeSensor;}
__attribute__((visibility("default"))) extern "C" void* ASensorManager_createEventQueue(void*,void*,int,void*,void*){return sFakeQueue;}
__attribute__((visibility("default"))) extern "C" int ASensorManager_destroyEventQueue(void*,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensorEventQueue_enableSensor(void*,const void*){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensorEventQueue_disableSensor(void*,const void*){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensorEventQueue_setEventRate(void*,const void*,int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensorEventQueue_hasEvents(void*){return 0;}
__attribute__((visibility("default"))) extern "C" ssize_t ASensorEventQueue_getEvents(void*,void*,size_t){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensorEventQueue_requestAdditionalInfoEvents(void*,bool){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensorEventQueue_registerSensor(void*,const void*,int32_t,int64_t){return 0;}
__attribute__((visibility("default"))) extern "C" int ASensor_getType(const void*){return 1;}
__attribute__((visibility("default"))) extern "C" const char* ASensor_getName(const void*){return "stub";}
__attribute__((visibility("default"))) extern "C" const char* ASensor_getVendor(const void*){return "stub";}
__attribute__((visibility("default"))) extern "C" const char* ASensor_getStringType(const void*){return "android.sensor.accelerometer";}
__attribute__((visibility("default"))) extern "C" float ASensor_getResolution(const void*){return 0.01f;}
__attribute__((visibility("default"))) extern "C" int ASensor_getMinDelay(const void*){return 10000;}
__attribute__((visibility("default"))) extern "C" float ASensor_getMaxRange(const void*){return 39.2f;}
__attribute__((visibility("default"))) extern "C" int ASensor_getHandle(const void*){return 1;}
__attribute__((visibility("default"))) extern "C" size_t ASensor_getFifoMaxEventCount(const void*){return 0;}
__attribute__((visibility("default"))) extern "C" size_t ASensor_getFifoReservedEventCount(const void*){return 0;}

__attribute__((visibility("default"))) extern "C" void* ALooper_prepare(int){return sFakeLooper;}
__attribute__((visibility("default"))) extern "C" void* ALooper_forThread(){return sFakeLooper;}
__attribute__((visibility("default"))) extern "C" int ALooper_pollOnce(int timeout,int*,int*,void**){if(timeout>0){struct timespec ts={timeout/1000,(timeout%1000)*1000000L};nanosleep(&ts,nullptr);}return -3;}
__attribute__((visibility("default"))) extern "C" void ALooper_wake(void*){}

STUB_DATA_PTR(_ZN14ASensorManager9sInstanceE)
STUB_CTOR(_ZN14ASensorManagerC1Ev)
STUB_CTOR(_ZN14ASensorManagerC2Ev)
__attribute__((visibility("default"))) extern "C" void* _ZN14ASensorManager16createEventQueueEP7ALooperiPFiiiPvES2_(void*,void*,int,void*,void*){return sFakeQueue;}
__attribute__((visibility("default"))) extern "C" int _ZN14ASensorManager17destroyEventQueueEP17ASensorEventQueue(void*,void*){return 0;}
__attribute__((visibility("default"))) extern "C" void* _ZN14ASensorManager16getDefaultSensorEi(void*,int){return sFakeSensor;}
__attribute__((visibility("default"))) extern "C" void* _ZN14ASensorManager18getDefaultSensorExEib(void*,int,bool){return sFakeSensor;}
__attribute__((visibility("default"))) extern "C" int _ZN14ASensorManager13getSensorListEPPKPK7ASensor(void*,void*){return 0;}
__attribute__((visibility("default"))) extern "C" int _ZNK14ASensorManager9initCheckEv(void*){return 0;}

STUB_VTABLE(_ZTVN14ASensorManager20SensorDeathRecipientE)
__attribute__((visibility("default"))) extern "C" void* _ZTTN14ASensorManager20SensorDeathRecipientE[4] = {};
__attribute__((visibility("default"))) extern "C" void* _ZTCN14ASensorManager20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE[8] = {};
__attribute__((visibility("default"))) extern "C" void _ZN14ASensorManager20SensorDeathRecipient11serviceDiedEmRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE(void*,uint64_t,const void*){}

STUB_VTABLE(_ZTV17ASensorEventQueue)
__attribute__((visibility("default"))) extern "C" void* _ZTT17ASensorEventQueue[4] = {};
__attribute__((visibility("default"))) extern "C" void* _ZTC17ASensorEventQueue0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE[8] = {};
__attribute__((visibility("default"))) extern "C" void* _ZTC17ASensorEventQueue0_N7android4hidl4base4V1_05IBaseE[8] = {};
STUB_CTOR(_ZN17ASensorEventQueueC1EP7ALooperPFiiiPvES2_)
STUB_CTOR(_ZN17ASensorEventQueueC2EP7ALooperPFiiiPvES2_)
__attribute__((visibility("default"))) extern "C" int _ZN17ASensorEventQueue12enableSensorEPK7ASensor(void*,const void*){return 0;}
__attribute__((visibility("default"))) extern "C" int _ZN17ASensorEventQueue13disableSensorEPK7ASensor(void*,const void*){return 0;}
__attribute__((visibility("default"))) extern "C" int _ZN17ASensorEventQueue12setEventRateEPK7ASensori(void*,const void*,int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" ssize_t _ZN17ASensorEventQueue9getEventsEP12ASensorEventm(void*,void*,size_t){return 0;}
__attribute__((visibility("default"))) extern "C" int _ZNK17ASensorEventQueue9hasEventsEv(void*){return 0;}
__attribute__((visibility("default"))) extern "C" void _ZN17ASensorEventQueue10invalidateEv(void*){}
__attribute__((visibility("default"))) extern "C" void _ZN17ASensorEventQueue16dispatchCallbackEv(void*){}
__attribute__((visibility("default"))) extern "C" int _ZN17ASensorEventQueue7onEventERKN7android8hardware7sensors4V1_05EventE(void*,const void*){return 0;}
__attribute__((visibility("default"))) extern "C" void _ZN17ASensorEventQueue7setImplERKN7android2spINS0_10frameworks13sensorservice4V1_011IEventQueueEEE(void*,const void*){}
__attribute__((visibility("default"))) extern "C" int _ZN17ASensorEventQueue14registerSensorEPK7ASensoril(void*,const void*,int32_t,int64_t){return 0;}
__attribute__((visibility("default"))) extern "C" void _ZN17ASensorEventQueue27requestAdditionalInfoEventsEb(void*,bool){}

STUB_CTOR(_ZN7ALooperC1Ev)
STUB_CTOR(_ZN7ALooperC2Ev)
__attribute__((visibility("default"))) extern "C" int _ZN7ALooper8pollOnceEiPiS0_PPv(void*,int timeout,int*,int*,void**){if(timeout>0){struct timespec ts={timeout/1000,(timeout%1000)*1000000L};nanosleep(&ts,nullptr);}return -3;}
__attribute__((visibility("default"))) extern "C" void _ZN7ALooper4wakeEv(void*){}
__attribute__((visibility("default"))) extern "C" void _ZN7ALooper18signalSensorEventsEN7android2wpI17ASensorEventQueueEE(void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZN7ALooper21invalidateSensorQueueEN7android2wpI17ASensorEventQueueEE(void*,void*){}

__attribute__((visibility("default"))) extern "C" void _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t(const void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE(const void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t(const void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE(const void*,void*){}
__attribute__((visibility("default"))) extern "C" int32_t _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE(int32_t){return 0;}
__attribute__((visibility("default"))) extern "C" void _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t(const void*,void*){}

__attribute__((visibility("default"))) extern "C" void _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS4_JRKS4_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_(void*,const void*,const void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void*,void*){}
__attribute__((visibility("default"))) extern "C" void _ZNSt3__16vectorI15sensors_event_tNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJEEEvDpOT_(void*){}
