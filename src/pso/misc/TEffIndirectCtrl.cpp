#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TEffIndirectCtrl__sub_802A955C(void* p);
void TEffIndirectCtrl__sub_802A9548(void* p);
u8 TEffIndirectCtrl__sub_802A9554(void* p);

void TEffIndirectCtrl__sub_802A9548(void* p) { *(s16*)((char*)p + 0x46) = 0; }
u8 TEffIndirectCtrl__sub_802A9554(void* p) { return *(u8*)((char*)p + 0x25); }
void TEffIndirectCtrl__sub_802A955C(void* p) { *(s16*)((char*)p + 0x46) = 1; }

}
#else
#if PSO_CLASS_PACKAGE == 0x802A88AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 DCFlushRange(s32, s32);
s32 copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *, s32);
s32 TEffIndirectCtrl__sub_802A8CC0(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A9234(u8);
s32 TEffIndirectCtrl__sub_802A8E4C(s32, s32, s32, s32, s32, u8);
void render__16TEffIndirectCtrlFv(void);

void render__16TEffIndirectCtrlFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A8A94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *arg0, s32 arg1);
M2C_UNK DCFlushRange(s32, M2C_UNK);
M2C_UNK memcpy(s32, s32, M2C_UNK);

void copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *arg0, s32 arg1) {
    memcpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, 0x1000);
    DCFlushRange(M2C_FIELD(arg0, s32 *, 0x1C), 0x1000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A8AD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TEffIndirectCtrlFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);
void TLobby__sub_803DA16C(void *);

extern M2C_UNK __vt__16TEffIndirectCtrl[];

void *__dt__16TEffIndirectCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TEffIndirectCtrl;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TLobby__sub_803DA16C(M2C_FIELD(arg0, void **, 0x2C)); __dl__FPv(M2C_FIELD(arg0, void **, 0x2C)); }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { __dl__FPv(M2C_FIELD(arg0, void **, 0x28)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A9284
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_all__16TEffIndirectCtrlFv(void);
M2C_UNK free_buffers__16TEffIndirectCtrlFv();
M2C_UNK TObjPlayer__sub_802A83F4();
M2C_UNK xfree__FPv(s32);

extern M2C_UNK TEffIndirectCtrl__data_80540AF0[];

void free_all__16TEffIndirectCtrlFv(void) {
    s32 var_r28;
    s32 var_r30;
    s32 var_r31;
    s32 temp_r3;

    TObjPlayer__sub_802A83F4();
    free_buffers__16TEffIndirectCtrlFv();
    var_r31 = 0;
    var_r30 = var_r31;
    var_r28 = 0;
    do {
        temp_r3 = *(TEffIndirectCtrl__data_80540AF0 + var_r31);
        if ((u32)temp_r3 != 0U) {
            xfree__FPv(temp_r3);
            *(TEffIndirectCtrl__data_80540AF0 + var_r31) = var_r30;
        }
        var_r28 += 1;
        var_r31 += 1;
    } while (var_r28 < 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A942C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_buffers__16TEffIndirectCtrlFv(void);
void xfree__FPv(void*);

extern u32 lbl_805D66A8;
extern u32 lbl_805D66B0;

void free_buffers__16TEffIndirectCtrlFv(void) {
    if ((u32) lbl_805D66A8 != 0U) {
        xfree__FPv((void*)lbl_805D66A8);
        lbl_805D66A8 = 0U;
    }
    if ((u32) lbl_805D66B0 != 0U) {
        xfree__FPv((void*)lbl_805D66B0);
        lbl_805D66B0 = 0U;
    }
}

}
#endif
#endif
