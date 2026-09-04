#ifndef PSO_CLASS_PACKAGE
#include "pso/TLogo.h"

TLogo::~TLogo() {}
#else
#if PSO_CLASS_PACKAGE == 0x80019A28
#include "types.h"

extern "C" {

void TLogo__sub_80019A28(void);
void TLogo__sub_80019A2C(void);
int TObject__sub_80019A60(void);

void TLogo__sub_80019A28(void) {  }

    extern int lbl_805D49C8;
void TLogo__sub_80019A2C(void) { lbl_805D49C8 = TObject__sub_80019A60(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001C134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_held_object__5TLogoFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D4A38;

void free_held_object__5TLogoFv(void) {
    if ((u32) lbl_805D4A38 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4A38);
        lbl_805D4A38 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001C19C
#include "types.h"

extern "C" {

void request_exit__5TLogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D4A50;
void request_exit__5TLogoFv(void) { queue_destruction__7TObjectFv(); lbl_805D4A50 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001C360
#include "types.h"

extern "C" {

void TLogo__sub_8001C360(void);
void TLogo__sub_8001C364(void);
int TObject__sub_80019A60(void);

void TLogo__sub_8001C360(void) {  }

    extern int lbl_805D4A48;
void TLogo__sub_8001C364(void) { lbl_805D4A48 = TObject__sub_80019A60(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F54C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__5TLogoFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__5TLogo[];
extern void *lbl_805D2CC8;

void *__ct__5TLogoFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__5TLogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2CC8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F800
#include "types.h"

extern "C" {

s32 TLogo__sub_8013F800(void* p);

s32 TLogo__sub_8013F800(void* p) { return *(s32*)((char*)p + 0x48); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F808
#include "types.h"

extern "C" {

int TLogo__sub_8013F808(void);

    extern int lbl_805D4090;
int TLogo__sub_8013F808(void) {  return lbl_805D4090; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030818C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_progressive_ready__5TLogoFv(void);
u32 OSGetProgressiveMode();
M2C_UNK disable_progressive_mode__13TAdVIConfigGCFv();
u32 fn_8037CCE8();
s32 is_on_current_screen__11TCameraCtrlFPv(void *, M2C_UNK);

extern s8 lbl_8050E3B8[];

s32 check_progressive_ready__5TLogoFv(void) {
    if (fn_8037CCE8() == 0U) {
        disable_progressive_mode__13TAdVIConfigGCFv();
        return 0;
    }
    if ((OSGetProgressiveMode() != 1U) && (is_on_current_screen__11TCameraCtrlFPv(lbl_8050E3B8 + 0x20, 2) == 0)) {
        disable_progressive_mode__13TAdVIConfigGCFv();
        return 0;
    }
    return 1;
}

}
#endif
#endif
