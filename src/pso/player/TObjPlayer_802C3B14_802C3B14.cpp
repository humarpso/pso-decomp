#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 begin_action_state__10TObjPlayerFPv(u8 *arg0);
s32 get_ptr_4__10TObjPlayerFPv();
s32 TObjPlayer__sub_801D8D8C(u8);
M2C_UNK init_technique_levels(s32, s32);
M2C_UNK setup_effect_slots__10TObjPlayerFii(s32, void *);
M2C_UNK set_action_state__10TObjPlayerFPvUc(void *, M2C_UNK);
s32 get_action_data__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_802C39CC(void *);
M2C_UNK fn_802C39F8(M2C_UNK, s32, s32);

extern s32 lbl_805D5544;

s32 begin_action_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;
    u8 temp_r30;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r30 = M2C_FIELD(arg0, u8 *, 0x3A1);
    M2C_FIELD(arg0, s8 *, 0) = 5;
    fn_802C39F8(5, TObjPlayer__sub_801D8D8C(temp_r30), get_ptr_4__10TObjPlayerFPv());
    set_action_state__10TObjPlayerFPvUc(arg0, 1);
    TObjPlayer__sub_802C39CC(arg0);
    setup_effect_slots__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x3A4), arg0 + 0x3C0);
    init_technique_levels(M2C_FIELD(arg0, s32 *, 0x3A4), get_action_data__10TObjPlayerFPv(arg0));
    M2C_FIELD(arg0, s8 *, 3) = (s8) lbl_805D5544;
    return 1;
}

}
