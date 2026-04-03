// =============================================================================
// stub_libatlasservice.cpp — Stub for libatlasservice.so
//
// BUILD:
//   64-bit:
//     aarch64-linux-android21-clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libatlasservice.so \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libatlasservice.so stub_libatlasservice.cpp
//
//   32-bit:
//     armv7a-linux-androideabi21-clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libatlasservice.so \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libatlasservice.so stub_libatlasservice.cpp
// =============================================================================

#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cstddef>

// =============================================================================
// Custom new/delete operators
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

#pragma GCC visibility push(default)

namespace android {

class String8;

// =============================================================================
// DisplayKevent — stub for display kernel event handling
// =============================================================================
class DisplayKevent {
public:
    DisplayKevent(void*, const char*, bool (*)(void*, void*));
    ~DisplayKevent();
};

DisplayKevent::DisplayKevent(void*, const char*, bool (*)(void*, void*)) {}
DisplayKevent::~DisplayKevent() {}

// =============================================================================
// IAtlasService — binder interface stub
// =============================================================================
class IAtlasService {
public:
    IAtlasService();
    virtual ~IAtlasService();
    
    static void* asInterface(const void*);
    static void* getDefaultImpl();
    static void  setDefaultImpl(void*);
    virtual const char* getInterfaceDescriptor() const;
};

IAtlasService::IAtlasService()  {}
IAtlasService::~IAtlasService() {}
void* IAtlasService::asInterface(const void*) { return nullptr; }
void* IAtlasService::getDefaultImpl()         { return nullptr; }
void  IAtlasService::setDefaultImpl(void*)    {}
const char* IAtlasService::getInterfaceDescriptor() const {
    return "android.IAtlasService";
}

// =============================================================================
// BnAtlasService
// =============================================================================
class BnAtlasService : public IAtlasService {
public:
    BnAtlasService();
    virtual ~BnAtlasService();
    virtual int onTransact(uint32_t, const void*, void*, uint32_t);
};

BnAtlasService::BnAtlasService()  {}
BnAtlasService::~BnAtlasService() {}
int BnAtlasService::onTransact(uint32_t, const void*, void*, uint32_t) {
    return -1;
}

} // namespace android

#pragma GCC visibility pop

// =============================================================================
// extern "C" section — only symbols that compiler can't generate
// =============================================================================
extern "C" {

// ── BnAtlasService thunks ─────────────────────────────────────────────────
__attribute__((visibility("default")))
int _ZN7android14BnAtlasService10onTransactEjRKNS_6ParcelEPS1_j(
    void* /*thiz*/, uint32_t /*code*/, const void* /*data*/,
    void* /*reply*/, uint32_t /*flags*/) {
    return -1;
}

__attribute__((visibility("default")))
int _ZThn8_N7android14BnAtlasService10onTransactEjRKNS_6ParcelEPS1_j(
    void* /*thiz*/, uint32_t /*code*/, const void* /*data*/,
    void* /*reply*/, uint32_t /*flags*/) {
    return -1;
}

// ── DisplayKevent constructor ─────────────────────────────────────────────
__attribute__((visibility("default")))
void _ZN7android13DisplayKeventC1EPvPKcPFbS1_PNS_16mm_kevent_packetEE(
    void* /*thiz*/, void* /*arg1*/, const char* /*arg2*/, void* /*callback*/) {
}

__attribute__((visibility("default")))
void _ZN7android13DisplayKeventC2EPvPKcPFbS1_PNS_16mm_kevent_packetEE(
    void* /*thiz*/, void* /*arg1*/, const char* /*arg2*/, void* /*callback*/) {
}

} // extern "C"
