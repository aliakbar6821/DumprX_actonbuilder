// =============================================================================
// stub_libimmlistservice.cpp — ABI-compatible stub for libimmlistservice.so
//
// BUILD:
//   64-bit:
//     clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libimmlistservice.so \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libimmlistservice.so stub_libimmlistservice.cpp
//
//   32-bit:
//     armv7a-linux-androideabi21-clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libimmlistservice.so \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libimmlistservice.so stub_libimmlistservice.cpp
// =============================================================================

#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cstddef>

// =============================================================================
// Custom new/delete operators (avoid libc++ dependency)
// =============================================================================
void* operator new(std::size_t size) {
    return malloc(size);
}

void* operator new[](std::size_t size) {
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    free(ptr);
}

void operator delete[](void* ptr) noexcept {
    free(ptr);
}

void operator delete(void* ptr, std::size_t) noexcept {
    free(ptr);
}

void operator delete[](void* ptr, std::size_t) noexcept {
    free(ptr);
}

// =============================================================================
// tMMListMatch enum at global scope
// =============================================================================
enum tMMListMatch {
    MM_LIST_MATCH_EXACT   = 0,
    MM_LIST_MATCH_PREFIX  = 1,
    MM_LIST_MATCH_CONTAIN = 2,
};

#pragma GCC visibility push(default)

namespace android {

class String8;

// =============================================================================
// Mutex stub — just enough bytes so Singleton<T>::sLock is a valid object.
// Android's Mutex is typically a pthread_mutex_t wrapper (~40 bytes on LP64).
// We provide a 64-byte zero-initialized block which is safe for
// PTHREAD_MUTEX_INITIALIZER (all zeros = valid unlocked mutex on Bionic).
// =============================================================================
class Mutex {
public:
    Mutex() { memset(this, 0, sizeof(*this)); }
    ~Mutex() {}
    void lock() {}
    void unlock() {}
private:
    char _padding[64];
};

// =============================================================================
// ListServiceUtils
// =============================================================================
class ListServiceUtils {
public:
    ListServiceUtils();
    virtual ~ListServiceUtils();

    int   init();
    int   reinit();
    void  serviceDied();
    void  setDebugLog(bool);
    bool  isFeaturesOn(const char*);
    void  updateMultimediaList();
    void* getService();

    int getListValueByUid(const char* module, uint32_t uid,
                           char* out, int outLen);
    int getListValueByName(const char* module, const char* name,
                            char* out, int outLen);
    int getListValueByTopActivity(const char* module, int uid,
                                   char* out, int outLen);

    int checkInListByUid(const char* module, int uid, tMMListMatch match);
    int checkInListByPid(const char* module, int pid, tMMListMatch match);
    int checkInListByName(const char* module, const char* name,
                           tMMListMatch match);
    int checkInAppVolumePackageSet(int uid);

    int getPackageNameByPid(int pid, char* out, int outLen);
    int getPackageNameByUid(int uid, char* out, int outLen);

    void* getUidPackageNameMap();
    void  clearAppVolumePackageSet();
};

ListServiceUtils::ListServiceUtils()  {}
ListServiceUtils::~ListServiceUtils() {}

int   ListServiceUtils::init()              { return 0; }
int   ListServiceUtils::reinit()            { return 0; }
void  ListServiceUtils::serviceDied()       {}
void  ListServiceUtils::setDebugLog(bool)   {}
bool  ListServiceUtils::isFeaturesOn(const char*) { return false; }
void  ListServiceUtils::updateMultimediaList()    {}
void* ListServiceUtils::getService()              { return nullptr; }

int ListServiceUtils::getListValueByUid(const char*, uint32_t,
                                         char* out, int len) {
    if (out && len > 0) out[0] = '\0';
    return 0;
}
int ListServiceUtils::getListValueByName(const char*, const char*,
                                          char* out, int len) {
    if (out && len > 0) out[0] = '\0';
    return 0;
}
int ListServiceUtils::getListValueByTopActivity(const char*, int,
                                                 char* out, int len) {
    if (out && len > 0) out[0] = '\0';
    return 0;
}
int ListServiceUtils::checkInListByUid(const char*, int, tMMListMatch) { return 0; }
int ListServiceUtils::checkInListByPid(const char*, int, tMMListMatch) { return 0; }
int ListServiceUtils::checkInListByName(const char*, const char*, tMMListMatch) { return 0; }
int ListServiceUtils::checkInAppVolumePackageSet(int)  { return 0; }

int ListServiceUtils::getPackageNameByPid(int, char* out, int len) {
    if (out && len > 0) out[0] = '\0';
    return -1;
}
int ListServiceUtils::getPackageNameByUid(int, char* out, int len) {
    if (out && len > 0) out[0] = '\0';
    return -1;
}
void* ListServiceUtils::getUidPackageNameMap()   { return nullptr; }
void  ListServiceUtils::clearAppVolumePackageSet() {}

// =============================================================================
// Singleton<ListServiceUtils> — MUST export sLock and sInstance
// =============================================================================
template<typename T> class Singleton;

template<>
class Singleton<ListServiceUtils> {
public:
    Singleton();
    ~Singleton();
    static ListServiceUtils& getInstance();
    static bool hasInstance();

    // *** CRITICAL: These static data members must be exported ***
    static Mutex sLock;
    static ListServiceUtils* sInstance;
};

// *** CRITICAL: Define the static members at namespace scope ***
Mutex Singleton<ListServiceUtils>::sLock;
ListServiceUtils* Singleton<ListServiceUtils>::sInstance = nullptr;

Singleton<ListServiceUtils>::Singleton()  {}
Singleton<ListServiceUtils>::~Singleton() {}

ListServiceUtils& Singleton<ListServiceUtils>::getInstance() {
    if (!sInstance) {
        static ListServiceUtils inst;
        sInstance = &inst;
    }
    return *sInstance;
}

bool Singleton<ListServiceUtils>::hasInstance() { return sInstance != nullptr; }

// =============================================================================
// AtlasEventUploadUtils — needed by surfaceflinger via liboplus_display_watchcall.so
// =============================================================================
class AtlasEventUploadUtils {
public:
    AtlasEventUploadUtils();
    virtual ~AtlasEventUploadUtils();
};

AtlasEventUploadUtils::AtlasEventUploadUtils()  {}
AtlasEventUploadUtils::~AtlasEventUploadUtils() {}

// =============================================================================
// Singleton<AtlasEventUploadUtils> — MUST export sLock and sInstance
// =============================================================================
template<>
class Singleton<AtlasEventUploadUtils> {
public:
    Singleton();
    ~Singleton();
    static AtlasEventUploadUtils& getInstance();
    static bool hasInstance();

    // *** CRITICAL: These static data members must be exported ***
    static Mutex sLock;
    static AtlasEventUploadUtils* sInstance;
};

// *** CRITICAL: Define the static members at namespace scope ***
Mutex Singleton<AtlasEventUploadUtils>::sLock;
AtlasEventUploadUtils* Singleton<AtlasEventUploadUtils>::sInstance = nullptr;

Singleton<AtlasEventUploadUtils>::Singleton()  {}
Singleton<AtlasEventUploadUtils>::~Singleton() {}

AtlasEventUploadUtils& Singleton<AtlasEventUploadUtils>::getInstance() {
    if (!sInstance) {
        static AtlasEventUploadUtils inst;
        sInstance = &inst;
    }
    return *sInstance;
}

bool Singleton<AtlasEventUploadUtils>::hasInstance() { return sInstance != nullptr; }

// =============================================================================
// IMMListService — binder interface stub
// =============================================================================
class IMMListService {
public:
    IMMListService();
    virtual ~IMMListService();

    static void* asInterface(const void*);
    static void* getDefaultImpl();
    static void  setDefaultImpl(void*);
    virtual const char* getInterfaceDescriptor() const;
};

IMMListService::IMMListService()  {}
IMMListService::~IMMListService() {}
void* IMMListService::asInterface(const void*) { return nullptr; }
void* IMMListService::getDefaultImpl()         { return nullptr; }
void  IMMListService::setDefaultImpl(void*)    {}
const char* IMMListService::getInterfaceDescriptor() const {
    return "android.IMMListService";
}

// =============================================================================
// BnMMListService
// =============================================================================
class BnMMListService : public IMMListService {
public:
    BnMMListService();
    virtual ~BnMMListService();
    virtual int onTransact(uint32_t, const void*, void*, uint32_t);
};

BnMMListService::BnMMListService()  {}
BnMMListService::~BnMMListService() {}
int BnMMListService::onTransact(uint32_t, const void*, void*, uint32_t) {
    return -1;
}

// =============================================================================
// BpMMListService
// =============================================================================
class BpMMListService : public IMMListService {
public:
    BpMMListService();
    virtual ~BpMMListService();
};

BpMMListService::BpMMListService()  {}
BpMMListService::~BpMMListService() {}

} // namespace android

#pragma GCC visibility pop

// =============================================================================
// extern "C" section — mangled names for symbols compiler can't generate
// =============================================================================
extern "C" {

// ── String8-taking ListServiceUtils methods ────────────────────────────────
__attribute__((visibility("default")))
void _ZN7android16ListServiceUtils16addUidPackageMapENS_7String8E(
    void* /*this*/, void* /*string8*/) {}

__attribute__((visibility("default")))
void _ZN7android16ListServiceUtils19removeUidPackageMapENS_7String8E(
    void* /*this*/, void* /*string8*/) {}

__attribute__((visibility("default")))
void _ZN7android16ListServiceUtils19updateUidPackageMapENS_7String8E(
    void* /*this*/, void* /*string8*/) {}

__attribute__((visibility("default")))
void _ZN7android16ListServiceUtils22addAppVolumePackageSetENS_7String8E(
    void* /*this*/, void* /*string8*/) {}

// ── Vtable thunks ─────────────────────────────────────────────────────────
__attribute__((visibility("default")))
void _ZTv0_n24_N7android16ListServiceUtilsD0Ev(void* thiz) {
    ::operator delete(thiz);
}
__attribute__((visibility("default")))
void _ZTv0_n24_N7android16ListServiceUtilsD1Ev(void* /*thiz*/) {}

__attribute__((visibility("default")))
void _ZTv0_n24_N7android14IMMListServiceD0Ev(void* thiz) {
    ::operator delete(thiz);
}
__attribute__((visibility("default")))
void _ZTv0_n24_N7android14IMMListServiceD1Ev(void* /*thiz*/) {}

__attribute__((visibility("default")))
void _ZTv0_n24_N7android15BpMMListServiceD0Ev(void* thiz) {
    ::operator delete(thiz);
}
__attribute__((visibility("default")))
void _ZTv0_n24_N7android15BpMMListServiceD1Ev(void* /*thiz*/) {}

__attribute__((visibility("default")))
void _ZThn8_N7android15BpMMListServiceD0Ev(void* thiz) {
    ::operator delete(static_cast<char*>(thiz) - 8);
}
__attribute__((visibility("default")))
void _ZThn8_N7android15BpMMListServiceD1Ev(void* /*thiz*/) {}

__attribute__((visibility("default")))
int _ZThn8_N7android15BnMMListService10onTransactEjRKNS_6ParcelEPS1_j(
    void* /*thiz*/, uint32_t /*code*/, const void* /*data*/,
    void* /*reply*/, uint32_t /*flags*/) {
    return -1;
}

__attribute__((visibility("default")))
void _ZN7android14IMMListService14setDefaultImplENS_2spIS0_EE(void* /*thiz*/, void* /*sp*/) {}

__attribute__((visibility("default")))
int _ZN7android15BnMMListService10onTransactEjRKNS_6ParcelEPS1_j(
    void* /*thiz*/, uint32_t /*code*/, const void* /*data*/,
    void* /*reply*/, uint32_t /*flags*/) {
    return -1;
}

// ── AtlasEventUploadUtils vtable thunks ───────────────────────────────────
__attribute__((visibility("default")))
void _ZTv0_n24_N7android21AtlasEventUploadUtilsD0Ev(void* thiz) {
    ::operator delete(thiz);
}
__attribute__((visibility("default")))
void _ZTv0_n24_N7android21AtlasEventUploadUtilsD1Ev(void* /*thiz*/) {}

} // extern "C"
