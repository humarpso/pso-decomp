#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* init_vtable_and_field200__10TObjPlayerFPv(void* a0);
void spawn_item__10TObjPlayerFi(s32 arg0);
s32 TObjEneDellBiter__sub_80087350(M2C_UNK, s32);
M2C_UNK TObjFish__sub_800660D4(s32, s32, s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK get_data_entry__9TItemLoadFiPv(M2C_UNK, s32 *);
int init_state_445__10TObjPlayerFPv(void);
M2C_UNK lookup_item_data__9TItemLoadFiPv(M2C_UNK, s32 *);
M2C_UNK set_position_xy__10TObjPlayerFPvff(s32, f32, f32);

    extern unsigned char lbl_804E1E08[];
    extern const float lbl_805DE790;
void* init_vtable_and_field200__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1E08; *(float*)((char*)a0 + 0x200) = lbl_805DE790; return a0; }

extern f32 lbl_805DE78C;
extern f32 lbl_805DE79C;

void spawn_item__10TObjPlayerFi(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;

    temp_r3 = TObjEneDellBiter__sub_80087350(arg0, 0x1BF);
    if (temp_r3 != 0) {
        lookup_item_data__9TItemLoadFiPv(0xD, &spC);
        get_data_entry__9TItemLoadFiPv(0xD, &sp8);
        TObjFish__sub_800660D4(temp_r3, spC, sp8, 0, 0, lbl_805DE78C);
        set_position_xy__10TObjPlayerFPvff(temp_r3, lbl_805DE79C, lbl_805DE79C);
    }
}

}
