#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_grabbed_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TCameraCtrl__sub_8006A044(M2C_UNK, f32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
M2C_UNK set_grabbed_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);

extern s32 lbl_805D53A0;
extern const f32 lbl_805D86D8;

void update_grabbed_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        if (obj_testFlags30(arg0, 0x02000000) != 0) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x40000);
        }
        obj_clearFlags30(arg0, 0x02200200);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        TBoss3Volopt__sub_8022675C(0x4003A81F, 0, 0, 0);
        TBoss3Volopt__sub_8022675C(0x4003BC20, 0, 0, 0);
        if ((s32) lbl_805D53A0 == (s32) M2C_FIELD(arg0, u16 *, 0x2D4)) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805D86D8);
        }
        M2C_FIELD(arg0, s32 *, 0x3C8) = 0x14;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
                set_grabbed_state__10TObjPlayerFi(0xF);
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, M2C_FIELD(arg0, s32 *, 0x380));
            }
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        break;
    }
}

}
