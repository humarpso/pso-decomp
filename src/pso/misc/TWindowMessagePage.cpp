#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int render__18TWindowMessagePageFv(void* p);
int render__14TWindowMessageFv(void*);

int render__18TWindowMessagePageFv(void* p) { return render__14TWindowMessageFv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8026AD8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__18TWindowMessagePageFPv(void *arg0);
s32 TMCFormatSequence__sub_802693B4();

s32 is_ready__18TWindowMessagePageFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        return 0;
    }
    return TMCFormatSequence__sub_802693B4() != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026ADC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_message__18TWindowMessagePageFPv(void *arg0);
s32 TLobby__sub_8001DC24();
M2C_UNK send_and_handle__6TLobbyFPvii(void *, s32, s32);
u32 TWindowSubStatusDisp__sub_80228F84(u32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();

void update_message__18TWindowMessagePageFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        TWindowSubStatusDisp__sub_802290E0();
        M2C_FIELD(arg0, u32 *, 0x94) = TWindowSubStatusDisp__sub_80228F84(M2C_FIELD(arg0, u32 *, 0x94));
        send_and_handle__6TLobbyFPvii(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x90));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026AEE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_text__18TWindowMessagePageFiii(s32 a, s32 b, s32 c);
M2C_UNK TWindowMessagePage__sub_8026AE7C(s32, s32, s32, s32);

extern s32 lbl_805D53A0;

void set_text__18TWindowMessagePageFiii(s32 a, s32 b, s32 c) {
    TWindowMessagePage__sub_8026AE7C(a, b, c, lbl_805D53A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026AFBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TWindowMessagePageFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TWindowMessageFv(void *, int);

extern M2C_UNK __vt__18TWindowMessagePage[];

void *__dt__18TWindowMessagePageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowMessagePage;
        __dt__14TWindowMessageFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
