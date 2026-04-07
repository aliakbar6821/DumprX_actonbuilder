#pragma once
#include <cstdint>
#include <cstring>
#include <cstddef>

#define STUB_INT(name) \
    __attribute__((visibility("default"))) \
    extern "C" int32_t name(void*, int32_t* out) { if(out) *out = 0; return 0; }

#define STUB_STR(name) \
    __attribute__((visibility("default"))) \
    extern "C" int32_t name(void*, void*) { return 0; }

#define STUB_SET_S(name) \
    __attribute__((visibility("default"))) \
    extern "C" int32_t name(void*, const void*, int32_t* out) { if(out) *out = 0; return 0; }

#define STUB_SET_I(name) \
    __attribute__((visibility("default"))) \
    extern "C" int32_t name(void*, int32_t, int32_t* out) { if(out) *out = 0; return 0; }

#define STUB_VOID(name) \
    __attribute__((visibility("default"))) \
    extern "C" void name(void*) {}

#define STUB_PTR(name) \
    __attribute__((visibility("default"))) \
    extern "C" void* name(void*) { return nullptr; }

#define STUB_CTOR(name) \
    __attribute__((visibility("default"))) \
    extern "C" void name(void* self, ...) { memset(self, 0, 256); }

#define STUB_BOOL_F(name) \
    __attribute__((visibility("default"))) \
    extern "C" bool name(void*) { return false; }

#define STUB_BOOL_T(name) \
    __attribute__((visibility("default"))) \
    extern "C" bool name(void*) { return true; }

#define STUB_DATA(name, size) \
    __attribute__((visibility("default"))) \
    extern "C" char name[size] = {};

#define STUB_DATA_PTR(name) \
    __attribute__((visibility("default"))) \
    extern "C" void* name = nullptr;

#define STUB_VTABLE(name) \
    __attribute__((visibility("default"))) \
    extern "C" void* name[32] = {};

#define STUB_STRING(name, val) \
    __attribute__((visibility("default"))) \
    extern "C" const char* name = val;
