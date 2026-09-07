#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029914C_lbl_805409C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8029916C_lbl_805409C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 *TObjCMProportion__sub_80298F08();
f32 TObjCMProportion__sub_80298FF4(void);
extern RecoveredGlobal_8029914C_lbl_805409C8 lbl_805409C8;
u8 TObjCMProportion__sub_8029914C(s32 arg0);
extern RecoveredGlobal_8029914C_lbl_805409C8 lbl_805409C8;
u8 TObjCMProportion__sub_8029916C(s32 arg0);
}

extern "C" {

f32 get_ratio__16TObjCMProportionFv(void);
u8 *TObjCMProportion__sub_80298F08();

extern M2C_UNK lbl_80465168;
extern const f32 lbl_805DDC20;

f32 get_ratio__16TObjCMProportionFv(void) {
    return (f32) M2C_FIELD(TObjCMProportion__sub_80298F08(), u16 *, 0x18) / lbl_805DDC20;
}
f32 TObjCMProportion__sub_80298FF4(void) {
    return (f32) M2C_FIELD(TObjCMProportion__sub_80298F08(), u16 *, 0x1A) / lbl_805DDC20;
}
typedef char RecoveredGlobal_8029914C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029914C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TObjCMProportion__sub_8029914C(s32 arg0) {
    return (u8) ((M2C_FIELD(&lbl_805409C8.value, s32 *, 0xC) & arg0) != 0);
}
typedef char RecoveredGlobal_8029916C_lbl_805409C8_size[sizeof(RecoveredGlobal_8029916C_lbl_805409C8) == 0x18 ? 1 : -1];
u8 TObjCMProportion__sub_8029916C(s32 arg0) {
    return (u8) ((M2C_FIELD(&(*(RecoveredGlobal_8029916C_lbl_805409C8 *)&lbl_805409C8).value, s32 *, 0x10) & arg0) != 0);
}

}
