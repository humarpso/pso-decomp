#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Rec_801D96CC { u8 a; u8 pad[3]; s16 b; };

s16 get_or_init_field_4__10TObjPlayerFPv(void *arg0);
s16 get_section_clamped__10TObjPlayerFPv(void *arg0);
u8 get_valid_technique__10TObjPlayerFPv(void *arg0);
void split_capped_value__10TObjPlayerFUcPvPv(u8 arg0, u8 *arg1, s8 *arg2);
void update_all_units__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK set_technique_level_entry(s32, s16, s32);
M2C_UNK get_cast_technique_level(s32, s16);
s32 is_invalid_slot__10TObjPlayerFUc();
s32 is_valid_technique_id__10TObjPlayerFs(s16);
s32 is_valid_technique_slot__10TObjPlayerFUc(u8);
M2C_UNK set_technique_id__10TObjPlayerFPvs(void *, M2C_UNK);
u8 get_item_count_max__10TObjPlayerFv();
s32 check_technique_level__10TObjPlayerFiiUc(void *, int, u8);
u8 get_effective_technique_level__10TObjPlayerFPvs(void *, int);
s32 TObjPlayer__sub_801C010C(void *, s16);
s32 clamp_to_max__10TObjPlayerFiUcUc(void *, s32, s32);
u8 TObjPlayer__sub_801D96CC(Rec_801D96CC *p);
void TObjPlayer__sub_801D97C8(void *p, s32 add);

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

u8 TObjPlayer__sub_801D96CC(Rec_801D96CC *p) {
    u8 a = p->a;
    u8 t;
    if (check_technique_level__10TObjPlayerFiiUc(p, p->b, a) == 0) {
        a = 0x1D;
    }
    if (((s32 (*)(u8))is_invalid_slot__10TObjPlayerFUc)(a) != 0) {
        return a;
    }
    t = get_effective_technique_level__10TObjPlayerFPvs(p, p->b);
    if (((s32 (*)(u8))is_invalid_slot__10TObjPlayerFUc)(t) != 0) {
        return get_item_count_max__10TObjPlayerFv();
    }
    if (a > t) {
        a = t;
    }
    return a;
}

void update_all_units__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = 0;
    do {
        get_cast_technique_level(arg0, (s16) var_r31);
        if (is_invalid_slot__10TObjPlayerFUc() == 0) {
            set_technique_level_entry(arg0, (s16) var_r31, arg1);
        }
        var_r31 += 1;
    } while (var_r31 < 0x13);
}

void TObjPlayer__sub_801D97C8(void *p, s32 add) {
    s32 i = 0;
    do {
        s32 v = ((s32 (*)(void *, s16))get_cast_technique_level)(p, i);
        if (((s32 (*)(s32))is_invalid_slot__10TObjPlayerFUc)(v) == 0) {
            v += add;
            v = clamp_to_max__10TObjPlayerFiUcUc(p, v, ((s32 (*)(void *, s16))get_effective_technique_level__10TObjPlayerFPvs)(p, i));
            ((void (*)(void *, s16, s32))set_technique_level_entry)(p, i, clamp_to_max__10TObjPlayerFiUcUc(p, v, TObjPlayer__sub_801C010C(p, i)));
        }
        i++;
    } while (i < 0x13);
}

}
