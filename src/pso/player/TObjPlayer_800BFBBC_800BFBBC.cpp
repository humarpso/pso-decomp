#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800F06B4(s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern const f32 lbl_805D9F28;
extern const f32 lbl_805D9F2C;
void TObjPlayer__sub_800BFEDC(u8 *arg0);
}

extern "C" {

s32 TObjPlayer__sub_800BFC58(s32 arg0);
void clear_flags_60__10TObjPlayerFPv(u8 *arg0);
void set_flag_and_notify__10TObjPlayerFPv(void *arg0);
s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();
M2C_UNK TObjPlayer__sub_80156844(void *, void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

void clear_flags_60__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (temp_r4 & 0x60) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 & 0xFFFFFF9F);
        TObjPlayer__sub_80156844(arg0, arg0 + 0x38, 0);
        obj_setFlags30(arg0, 0x800000);
    }
}

s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        clear_flags_60__10TObjPlayerFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

s32 TObjPlayer__sub_800BFC58(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        clear_flags_60__10TObjPlayerFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

void set_flag_and_notify__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 0x80)) {
        M2C_FIELD(arg0, s16 *, 0x374) = (s16) (temp_r4 | 0x80);
        send_entity_set_flags__6TLobbyFPv();
    }
}
void TObjPlayer__sub_800BFEDC(u8 *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 3) && ((objInBand__FP7GameObjf(arg0, lbl_805D9F28) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D9F2C) != 0))) {
        TBoss3Volopt__sub_8022675C(TObjPlayer__sub_800F06B4(0x3D20C, 5), (u32) (arg0 + 0x38), 0, 0);
    }
}

}
