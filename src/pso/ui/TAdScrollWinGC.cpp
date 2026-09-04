#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__14TAdScrollWinGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status_value__20TWindowSubStatusDispFPv(void*);

void render__14TAdScrollWinGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status_value__20TWindowSubStatusDispFPv(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8026A5F8
#include "types.h"

extern "C" {

void TAdScrollWinGC__sub_8026A5F8(void* a0);

    extern const float lbl_805DD240;
void TAdScrollWinGC__sub_8026A5F8(void* a0) { *(float*)((char*)a0 + 0x84) = lbl_805DD240; *(float*)((char*)a0 + 0x6c) = lbl_805DD240; *(float*)((char*)a0 + 0x94) = lbl_805DD240; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026A60C
#include "types.h"

extern "C" {

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v);

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803274D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__14TAdScrollWinGCFPv(void *arg0);
M2C_UNK close_window__14TAdScrollWinGCFPv();

void close__14TAdScrollWinGCFPv(void *arg0) {
    close_window__14TAdScrollWinGCFPv();
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80327504
#include "types.h"

extern "C" {

void close_window__14TAdScrollWinGCFPv(void* p);
int TWindow__close(void*);

void close_window__14TAdScrollWinGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindow__close(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

}
#endif
#endif
