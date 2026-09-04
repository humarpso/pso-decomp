#ifndef PSO_CLASS_PACKAGE
#include "pso/TTecCtrl.h"

TTecCtrl::~TTecCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x801B0EE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_technique_ready__8TTecCtrlFv(void);
s32 get_player_count__10TObjPlayerFv();
s8 TObjPlayer__sub_801BE388();

u8 is_technique_ready__8TTecCtrlFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_player_count__10TObjPlayerFv() == 1) && (TObjPlayer__sub_801BE388() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022C444
#include "types.h"

extern "C" {

void TTecCtrl__sub_8022C444(void);
void TTecCtrl__sub_8022C448(void);
void TTecCtrl__sub_8022C44C(void);

void TTecCtrl__sub_8022C444(void) {  }
void TTecCtrl__sub_8022C448(void) {  }
void TTecCtrl__sub_8022C44C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022C450
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 classify_distance_band__8TTecCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
f32 TTecCtrl__sub_8022C5CC(s32, s32);
M2C_UNK TTecCtrl__sub_8022DBC4();

extern f32 lbl_805DC7D0;
extern f32 lbl_805DC7D4;

s32 classify_distance_band__8TTecCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;

    TTecCtrl__sub_8022DBC4();
    if ((arg1 == 0) || (arg1 == 1)) {
        return 0;
    }
    temp_f1 = TTecCtrl__sub_8022C5CC(arg0, arg2);
    if (temp_f1 < lbl_805DC7D0) {
        return 1;
    }
    if (temp_f1 < lbl_805DC7D4) {
        return 2;
    }
    return 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022F01C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__8TTecCtrlFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__8TTecCtrl[];
extern void *lbl_805D37A0;

void *__ct__8TTecCtrlFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TTecCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D37A0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#endif
