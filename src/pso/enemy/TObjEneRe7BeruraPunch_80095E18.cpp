#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1);
int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p);
M2C_UNK TObjEneDD__sub_800BA438(s32, s32);
s32 is_player_entity_id();
s32 find_entity_by_id(u16);
M2C_UNK apply_hit_if_active__10TObjPlayerFPvPvPv();
f32 calc_boss4_scale__10TObjPlayerFi();
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK obj_getField1c(s32);

int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p) { return (*(u32*)((char*)p + 0xb0) >> 2) & 0x1; }

extern f32 lbl_805D9790;

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1) {
    s32 temp_r3;

    apply_hit_if_active__10TObjPlayerFPvPvPv();
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        obj_getField1c(arg1);
        if (is_player_entity_id() != 0) {
            temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xB0));
            if ((temp_r3 != 0) && (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9790)) {
                TObjEneDD__sub_800BA438(temp_r3, arg1);
            }
        }
    }
}

}
