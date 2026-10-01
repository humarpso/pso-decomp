#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void drop_item_if_state3__10TObjPlayerFPv(void* p);
void update_guarded_by_flag__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012A2EC(void *arg0);
void update_recovery_meter__10TObjPlayerFPv(void *arg0);
void update_field1fc__10TObjPlayerFPv(u8 *arg0);
int rotate_matrix_x(void*, void*);
M2C_UNK TObjPlayer__sub_80115BFC(void *, s32);
M2C_UNK TObjPlayer__sub_8011E87C(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80120908(void *);
int get_player_list__10TObjPlayerFv(void*);

void drop_item_if_state3__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 3) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1fc)); } }

void update_guarded_by_flag__10TObjPlayerFPv(void *arg0) {
    s32 *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30), s32 **, 0x30);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 |= 0x10;
        }
        TObjPlayer__sub_80120908(arg0);
        TObjPlayer__sub_8011E87C(arg0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void TObjPlayer__sub_8012A2EC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x200);
    if (temp_r4 > 0xCCC) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (temp_r4 - 0xB6);
    }
}

void update_recovery_meter__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x204) = (s32) (M2C_FIELD(arg0, s32 *, 0x204) + 1);
    if (!(M2C_FIELD(arg0, s32 *, 0x204) & 3)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x200);
        if (temp_r4 < 0x3333) {
            M2C_FIELD(arg0, s32 *, 0x200) = (s32) (temp_r4 + 0xB6);
        }
    }
}

void update_field1fc__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BFC(arg0 + 0x1FC, M2C_FIELD(arg0, s32 *, 0x200));
}

}
