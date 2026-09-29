#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803E5458_lbl_8058DC00 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Ctx_803E53BC { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; s32 f14; s32 f18; s32 f1c; };

#include <stddef.h>
struct Stack_803D6DDC {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Stack_803D6E8C {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct RecoveredGlobal_803D662C_lbl_8058D4D0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803D77C0_lbl_8047E3C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA500 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803D77C0_lbl_804FA50C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA51C {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803D78A8_lbl_8058CAB8 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct St_803D7784 { s32 a0, a4, a8, ac, b0, b4, b8, x1c; };

struct Vec_803D7CA4 { f32 x, y, z; };

struct Angles_803D7CA4 { s32 x, y, z; };

struct Quat_803D7CA4 { f32 x, y, z, w; };

extern "C" {
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0);
extern RecoveredGlobal_803E5458_lbl_8058DC00 lbl_8058DC00;
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E5458(s32 arg0);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53BC(void);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E5378(s32 n);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma opt_common_subs off
#pragma peephole off
typedef char RecoveredGlobal_803D662C_lbl_8058D4D0_size[sizeof(RecoveredGlobal_803D662C_lbl_8058D4D0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_8047E3C8_size[sizeof(RecoveredGlobal_803D77C0_lbl_8047E3C8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA500_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA500) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA50C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA50C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA51C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA51C) == 0x24 ? 1 : -1];
void TObjPlayer__sub_803E5378(s32 n) {
    s32 w = n * 4;
    s32 a;
    *(s32 *)(lbl_805D7818 + 0x4) = w;
    *(s32 *)(lbl_805D7818 + 0x8) = w + w;
    a = *(s32 *)(lbl_805D7818 + 0x0);
    *(s32 *)(lbl_805D7818 + 0xc) = a;
    *(s32 *)(lbl_805D7818 + 0x10) = a + *(s32 *)(lbl_805D7818 + 0x4);
    *(s32 *)(lbl_805D7818 + 0x1c) = 0;
}
typedef char RecoveredGlobal_803D78A8_lbl_8058CAB8_size[sizeof(RecoveredGlobal_803D78A8_lbl_8058CAB8) == 0x80 ? 1 : -1];
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E53BC(void) {
    s32 v = ((Ctx_803E53BC *)lbl_805D7818)->f0;
    v += ((Ctx_803E53BC *)lbl_805D7818)->f8;
    ((Ctx_803E53BC *)lbl_805D7818)->f0 = v;
    ((Ctx_803E53BC *)lbl_805D7818)->fc = v;
    ((Ctx_803E53BC *)lbl_805D7818)->f10 = v + ((Ctx_803E53BC *)lbl_805D7818)->f4;
    ((Ctx_803E53BC *)lbl_805D7818)->f1c = 0;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0) {
    M2C_FIELD(lbl_805D7818, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(lbl_805D7818, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(lbl_805D7818, f32 *, 0x14) = farg0;
    M2C_FIELD(lbl_805D7818, s32 *, 0x1C) = 0;
    M2C_FIELD(lbl_805D7818, s32 *, 0x20) = (s32) M2C_FIELD(arg0, u16 *, 8);
    TObjPlayer__sub_803E5378((s32)(M2C_FIELD(arg0, u16 *, 0xA) & 0xFFFFFF3F));
}
#pragma pop

typedef char RecoveredGlobal_803E5458_lbl_8058DC00_size[sizeof(RecoveredGlobal_803E5458_lbl_8058DC00) == 0x48 ? 1 : -1];
void TObjPlayer__sub_803E5458(s32 arg0) {
    lbl_805D7818 = (u8 *)&lbl_8058DC00.value + (arg0 * 0x24);
}

}
