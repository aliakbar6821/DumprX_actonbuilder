// =============================================================================
// stub_mm_complete.cpp - Complete ColorOS Multimedia Service Stub Package
//
// Stubs for: libmmlistparser.so, libmmlistservice.so, 
//            libiatlasservice.so, libopluscfgpolicy.so
//
// BUILD:
//   64-bit (aarch64):
//     clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libmmlistparser.so \
//       -target aarch64-linux-android21 \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libmmlistparser.so stub_mm_complete.cpp
//
//   32-bit (armv7a):
//     clang++ -shared -fPIC -std=c++17 \
//       -Wl,--soname,libmmlistparser.so \
//       -target armv7a-linux-androideabi21 \
//       -nostdlib++ -fno-exceptions -fno-rtti -O1 \
//       -o libmmlistparser.so stub_mm_complete.cpp
//
// Change --soname for each library (libmmlistservice.so, libiatlasservice.so, etc.)
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
// libmmlistparser.so functions (CRITICAL - called by libmmlistservice.so)
// =============================================================================

extern "C" {

// Initialize MM list configuration file
__attribute__((visibility("default")))
int initMMListConfigFile(const char* /*config_path*/) {
    return 0;  // Success
}

// Update multimedia list
__attribute__((visibility("default")))
void updateMMList() {
    // Do nothing
}

// Check if process is in list by PID
__attribute__((visibility("default")))
int checkIsInListByPid(const char* /*module*/, int /*pid*/, int /*match_type*/) {
    return 0;  // Not in list
}

// Check if app is in list by name
__attribute__((visibility("default")))
int checkIsInListByName(const char* /*module*/, const char* /*name*/, int /*match_type*/) {
    return 0;  // Not in list
}

// Get list info by PID
__attribute__((visibility("default")))
int getListInfoByPid(const char* /*module*/, int /*pid*/, char* out, int outLen) {
    if (out && outLen > 0) out[0] = '\0';
    return 0;
}

// Get list info by name
__attribute__((visibility("default")))
int getListInfoByName(const char* /*module*/, const char* /*name*/, char* out, int outLen) {
    if (out && outLen > 0) out[0] = '\0';
    return 0;
}

// Get process name by PID
__attribute__((visibility("default")))
int getProcessNameByPid(int /*pid*/, char* out, int outLen) {
    if (out && outLen > 0) out[0] = '\0';
    return -1;  // Not found
}

// Additional parser functions
__attribute__((visibility("default")))
void loadMMListData() {}

__attribute__((visibility("default")))
int getMMModuleListSize() { return 0; }

__attribute__((visibility("default")))
void* getMMModuleListInfo() { return nullptr; }

__attribute__((visibility("default")))
void releaseMMList() {}

__attribute__((visibility("default")))
void dumpMMList() {}

__attribute__((visibility("default")))
int checkIsInMMList(const char* /*module*/, const char* /*name*/) { return 0; }

__attribute__((visibility("default")))
int parserData(const char* /*data*/, int /*len*/) { return 0; }

__attribute__((visibility("default")))
int getInternalMMListFile(char* out, int outLen) {
    if (out && outLen > 0) out[0] = '\0';
    return -1;
}

__attribute__((visibility("default")))
int getValue(const char* /*key*/, char* out, int outLen) {
    if (out && outLen > 0) out[0] = '\0';
    return 0;
}

__attribute__((visibility("default")))
int checkModule(const char* /*module*/) { return 0; }

__attribute__((visibility("default")))
int getModuleListSize() { return 0; }

__attribute__((visibility("default")))
int getMMListExtData(const char* /*module*/, char* out, int outLen) {
    if (out && outLen > 0) out[0] = '\0';
    return 0;
}

__attribute__((visibility("default")))
void clearList() {}

__attribute__((visibility("default")))
void dumpList() {}

} // extern "C"

// =============================================================================
// libopluscfgpolicy.so functions (called by libmmlistparser.so)
// =============================================================================

extern "C" {

__attribute__((visibility("default")))
const char* getCfgTopPriorityFile(const char* /*filename*/) {
    return nullptr;  // No config file
}

__attribute__((visibility("default")))
void* load_file(const char* /*path*/, int* out_size) {
    if (out_size) *out_size = 0;
    return nullptr;
}

} // extern "C"

// =============================================================================
// Minimal C++ ABI support (for libmmlistservice.so and libiatlasservice.so)
// These libraries have no exported functions but need basic C++ runtime
// =============================================================================

extern "C" {

__attribute__((visibility("default")))
void __cxa_pure_virtual() {
    // Pure virtual function called - shouldn't happen, but provide stub
}

} // extern "C"
