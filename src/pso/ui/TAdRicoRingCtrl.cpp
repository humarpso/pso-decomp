#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TAdRicoRingCtrlFPv(void *arg0);
void *__ct__11TAdRicoRingFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__15TAdRicoRingCtrlFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = __ct__11TAdRicoRingFv(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8001B984
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_fade__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0);
void start_anim__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern const f32 lbl_805D7E4C;

void start_fade__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0) {
    f32 temp_f0;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 1) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x2C, 1);
    }
    set_flags__10TObjPlayerFPvUi(arg0 + 0x2C, 2);
    if (lbl_805D7E4C != farg0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x1C)) / farg0);
        temp_f0 = (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x20)) / farg0;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_f0;
    }
}

extern const f32 lbl_805D7E4C;
extern const f32 lbl_805D7E54;

void start_anim__15TAdRicoRingCtrlFPvf(u8 *arg0, f32 farg0) {
    f32 temp_f0;

    if (TObjPlayer__sub_8001BEF8(arg0 + 0x2C, 2) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x2C, 2);
    }
    set_flags__10TObjPlayerFPvUi(arg0 + 0x2C, 1);
    if (lbl_805D7E4C != farg0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((lbl_805D7E54 - M2C_FIELD(arg0, f32 *, 0x1C)) / farg0);
        temp_f0 = (lbl_805D7E54 - M2C_FIELD(arg0, f32 *, 0x20)) / farg0;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_f0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001BE48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_global_805D4A00__15TAdRicoRingCtrlFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D4A00;

void release_global_805D4A00__15TAdRicoRingCtrlFv(void) {
    if ((u32) lbl_805D4A00 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4A00, 1);
        lbl_805D4A00 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001BED0
#include "types.h"

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void set_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_flags__11TAdRicoRingFPvUi(void* p, u32 v);
void clear_id__10TObjPlayerFPv(void* p);

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v) { *(f32*)((char*)p + 0x34) = v; }

}
#endif
#endif
