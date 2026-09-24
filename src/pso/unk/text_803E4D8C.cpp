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

extern "C" {
void TObjPlayer__sub_803E5378(s32);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0);
extern RecoveredGlobal_803E5458_lbl_8058DC00 lbl_8058DC00;
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E5458(s32 arg0);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53BC(void);
}

extern "C" {

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
    TObjPlayer__sub_803E5378(M2C_FIELD(arg0, u16 *, 0xA) & 0xFFFFFF3F);
}
#pragma pop

typedef char RecoveredGlobal_803E5458_lbl_8058DC00_size[sizeof(RecoveredGlobal_803E5458_lbl_8058DC00) == 0x48 ? 1 : -1];
void TObjPlayer__sub_803E5458(s32 arg0) {
    lbl_805D7818 = (u8 *)&lbl_8058DC00.value + (arg0 * 0x24);
}

}
