#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_section_clamped__10TObjPlayerFPv(void *arg0);
s16 get_or_init_field_4__10TObjPlayerFPv(void *arg0);
void split_capped_value__10TObjPlayerFUcPvPv(u8 arg0, u8 *arg1, s8 *arg2);
u8 get_valid_technique__10TObjPlayerFPv(void *arg0);
M2C_UNK set_technique_id__10TObjPlayerFPvs(void *, M2C_UNK);
s32 is_invalid_slot__10TObjPlayerFUc();
s32 is_valid_technique_id__10TObjPlayerFs(s16);
s32 is_valid_technique_slot__10TObjPlayerFUc(u8);

s16 get_section_clamped__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 6);
    if ((temp_r4 < 0) || (temp_r4 > 0xA)) {
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
    return M2C_FIELD(arg0, s16 *, 6);
}

s16 get_or_init_field_4__10TObjPlayerFPv(void *arg0) {
    if (is_valid_technique_id__10TObjPlayerFs(M2C_FIELD(arg0, s16 *, 4)) == 0) {
        set_technique_id__10TObjPlayerFPvs(arg0, 0);
    }
    return M2C_FIELD(arg0, s16 *, 4);
}

void split_capped_value__10TObjPlayerFUcPvPv(u8 arg0, u8 *arg1, s8 *arg2) {
    if ((is_invalid_slot__10TObjPlayerFUc() != 0) || (arg0 <= 0xEU)) {
        *arg1 = arg0;
        *arg2 = 0;
        return;
    }
    *arg1 = 0xE;
    *arg2 = arg0 - 0xE;
}

u8 get_valid_technique__10TObjPlayerFPv(void *arg0) {
    u8 var_r31;

    var_r31 = M2C_FIELD(arg0, u8 *, 1);
    if (is_valid_technique_slot__10TObjPlayerFUc(var_r31) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

}
