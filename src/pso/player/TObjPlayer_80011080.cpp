#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80011080(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK TBoss1Dragon__sub_8014220C(void *, void *, void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_800F09E8(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern const f32 lbl_805D7D40;
extern const f32 TObjPlayer__data_805D7D44;

void TObjPlayer__sub_80011080(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 spC;
    s32 sp8;

    TObjPlayer__sub_803D9B2C();
    TBoss1Dragon__sub_8014220C((void *) (arg0 + 0x248), (void *) (&spC), (void *) (&sp8));
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (lbl_805D7D40 + M2C_FIELD(arg0, f32 *, 0x3C)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (sp8));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (spC));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (-0x4000));
    if (arg1 != NULL) {
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 8)), (f32) (TObjPlayer__data_805D7D44));
    }
    TObjPlayer__sub_800F09E8((void *) (arg2));
    TObjPlayer__sub_803D9B78();
}

}
