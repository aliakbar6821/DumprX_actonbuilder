// =============================================================================
// stub_libimmlistservice.cpp — ABI-compatible stub for libimmlistservice.so
//
// Replaces the OPlus IMM list service library that blocks every call for 5
// seconds waiting for "MMListService" which never registers on ported ROMs.
//
// BUILD:
//   64-bit (aarch64):
//     clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libimmlistservice.so \
//       -target aarch64-linux-android21 \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libimmlistservice.so stub_libimmlistservice.cpp
//
//   32-bit (armv7a):
//     clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libimmlistservice.so \
//       -target armv7a-linux-androideabi21 \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libimmlistservice.so stub_libimmlistservice.cpp
// =============================================================================

#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cstddef>

// =============================================================================
// Provide our own new/delete operators to avoid libc++ dependency
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
// Main stub code starts here
// =============================================================================

// Export everything in this file as visible
// tMMListMatch at GLOBAL scope — gives "12tMMListMatch" mangling (not "NS_12tMMListMatchE")
enum tMMListMatch {
    MM_LIST_MATCH_EXACT   = 0,
    MM_LIST_MATCH_PREFIX  = 1,
    MM_LIST_MATCH_CONTAIN = 2,
};

#pragma GCC visibility push(default)

namespace android {

// ─────────────────────────────────────────────────────────────────────────────
// String8 forward declaration only — we do NOT define String8 here.
// The real String8 is in libutils.so. We receive String8 by value in some
// functions but ignore it completely. The String8-taking functions are
// defined below as extern "C" with exact mangled names to avoid defining
// String8 (which would cause symbol conflicts with libutils.so).
// ─────────────────────────────────────────────────────────────────────────────
class String8;  // incomplete — only used as a reference size hint below

// ─────────────────────────────────────────────────────────────────────────────
// ListServiceUtils — all methods declared here, defined out-of-line below.
// Out-of-line definitions force the compiler to emit non-inline symbols.
// Virtual destructor → vtable generated (required by callers).
// ─────────────────────────────────────────────────────────────────────────────
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

    // ── The 5-second blockers ──────────────────────────────────────────────
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
    // NOTE: String8-taking methods defined as extern "C" below
};

// ── Out-of-line definitions ───────────────────────────────────────────────────

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

// ─────────────────────────────────────────────────────────────────────────────
// Singleton<ListServiceUtils> — full template specialization.
// We declare the template first, then specialize it explicitly.
// Specialization with out-of-line definitions forces symbol emission.
// ─────────────────────────────────────────────────────────────────────────────
template<typename T> class Singleton;

template<>
class Singleton<ListServiceUtils> {
public:
    Singleton();
    ~Singleton();
    static ListServiceUtils& getInstance();
    static bool hasInstance();
};

Singleton<ListServiceUtils>::Singleton()  {}
Singleton<ListServiceUtils>::~Singleton() {}

ListServiceUtils& Singleton<ListServiceUtils>::getInstance() {
    static ListServiceUtils sInstance;  // thread-safe C++11 static init
    return sInstance;
}

bool Singleton<ListServiceUtils>::hasInstance() { return true; }

// ─────────────────────────────────────────────────────────────────────────────
// IMMListService — binder interface stub
// ─────────────────────────────────────────────────────────────────────────────
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

// ─────────────────────────────────────────────────────────────────────────────
// BnMMListService
// ─────────────────────────────────────────────────────────────────────────────
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

// ─────────────────────────────────────────────────────────────────────────────
// BpMMListService
// ─────────────────────────────────────────────────────────────────────────────
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
// extern "C" section — exact mangled names for:
//   1. String8-taking methods (avoids defining String8 class → no libutils conflict)
//   2. Vtable thunks (compiler can't generate these without multiple inheritance)
//   3. BnMMListService::onTransact thunk (needs Parcel type in signature)
// =============================================================================
extern "C" {

// ── String8-taking ListServiceUtils methods ────────────────────────────────
// Original signatures: addUidPackageMap(android::String8)
// AArch64 ABI: this=x0, String8_value=x1 (or on stack if >16 bytes)
// We ignore the String8 entirely — caller's String8 destructor handles cleanup.

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
// Original ListServiceUtils inherits from Singleton + IBinder::DeathRecipient
// (two bases). Multiple inheritance creates vtable thunks for the secondary
// base's destructors. _ZTv0_n24_ = adjust this by -24 then call destructor.

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

// _ZThn8_ = non-virtual thunk, adjust this by -8 (secondary base at +8)

__attribute__((visibility("default")))
void _ZThn8_N7android15BpMMListServiceD0Ev(void* thiz) {
    ::operator delete(static_cast<char*>(thiz) - 8);
}
__attribute__((visibility("default")))
void _ZThn8_N7android15BpMMListServiceD1Ev(void* /*thiz*/) {}

// BnMMListService::onTransact thunk — signature uses Parcel which we don't
// define, so provide the exact mangled symbol via extern "C" instead.
__attribute__((visibility("default")))
int _ZThn8_N7android15BnMMListService10onTransactEjRKNS_6ParcelEPS1_j(
    void* /*thiz*/, uint32_t /*code*/, const void* /*data*/,
    void* /*reply*/, uint32_t /*flags*/) {
    return -1;
}


// setDefaultImpl(sp<IMMListService>) — sp<T> is 8 bytes (just a T* wrapped)
// We receive it but do nothing. The sp destructor (decRefcount) runs at caller side.
__attribute__((visibility("default")))
void _ZN7android14IMMListService14setDefaultImplENS_2spIS0_EE(void* /*thiz*/, void* /*sp*/) {}

// BnMMListService::onTransact — takes Parcel by reference (which we forward-declare
// as void* since we do not have the Parcel header)
__attribute__((visibility("default")))
int _ZN7android15BnMMListService10onTransactEjRKNS_6ParcelEPS1_j(
    void* /*thiz*/, uint32_t /*code*/, const void* /*data*/,
    void* /*reply*/, uint32_t /*flags*/) {
    return -1;
}

} // extern "C"
