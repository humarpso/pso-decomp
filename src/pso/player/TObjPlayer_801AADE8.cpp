#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801AAE6C(void* a0);
void destroy_global_buffer__10TObjPlayerFv(void);
void update_all_slots__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8015610C(void *);
M2C_UNK TObjPlayer__sub_801A720C(u16, M2C_UNK, M2C_UNK, f32);
M2C_UNK destroy_buffer_pair(void*, M2C_UNK);
u32 get_battle_param__10TObjPlayerFi(s32);
M2C_UNK init_all_slots__10TObjPlayerFv();
u32 obj_getField1c();

extern u32 lbl_805D5D30;

void destroy_global_buffer__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D30 != 0U) {
        destroy_buffer_pair((void*)lbl_805D5D30, 1);
    }
    lbl_805D5D30 = 0U;
}

    extern const float lbl_805DC158;
void TObjPlayer__sub_801AAE6C(void* a0) { *(float*)((char*)a0 + 0x184) = lbl_805DC158; *(float*)((char*)a0 + 0x188) = lbl_805DC158; *(float*)((char*)a0 + 0x18c) = lbl_805DC158; *(float*)((char*)a0 + 0x190) = lbl_805DC158; }

void update_all_slots__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;

    init_all_slots__10TObjPlayerFv();
    TObjPlayer__sub_8015610C(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (get_battle_param__10TObjPlayerFi(var_r31) != 0U) {
                TObjPlayer__sub_801A720C((u16) obj_getField1c(), 0, 0, M2C_FIELD(arg0, f32 *, 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}

}
