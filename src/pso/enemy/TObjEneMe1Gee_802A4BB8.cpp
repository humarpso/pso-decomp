#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A4CC4_lbl_804DCFF8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
u16 obj_getField1c(void *);
u8 * TNeedleShoot__ct(void *, s32, void *, void *);
extern RecoveredGlobal_802A4CC4_lbl_804DCFF8 lbl_804DCFF8;
extern s32 lbl_805D3DE0;
u8 *TObjEneMe1Gee__sub_802A4CC4(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1);
}

extern "C" {

void update_missile__13TObjEneMe1GeeFPv(void *arg0);
M2C_UNK TObjPlayer__sub_802A445C(void *, M2C_UNK);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TNeedleShoot__sub_802A4668(void *);
M2C_UNK TNeedleShoot__sub_802A4694(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);

void update_missile__13TObjEneMe1GeeFPv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x34));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) == 1) {
        TNeedleShoot__sub_802A4694(arg0);
        update_lifetime__22TObjEneMe1GiGueMissileFPv(arg0);
        TObjPlayer__sub_802A445C(arg0, 1);
        return;
    }
    TNeedleShoot__sub_802A4668(arg0);
}
typedef char RecoveredGlobal_802A4CC4_lbl_804DCFF8_size[sizeof(RecoveredGlobal_802A4CC4_lbl_804DCFF8) == 0x28 ? 1 : -1];
u8 *TObjEneMe1Gee__sub_802A4CC4(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    TNeedleShoot__ct(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804DCFF8.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DE0;
    M2C_FIELD(arg0, f32 *, 0xBC) = farg1;
    M2C_FIELD(arg0, f32 *, 0xAC) = farg0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0x96;
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x34) = obj_getField1c(temp_r3);
    }
    return arg0;
}

}
