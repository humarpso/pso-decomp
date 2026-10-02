#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK clear_render_callback__8TObjFishFv(int);
M2C_UNK TObjFish__sub_800E3074(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void fn_8004F1FC(u8 *arg0);
}

extern "C" {

void fn_8004F1FC(u8 *arg0) {
    s32 var_r31;
    u8 *temp_r30;
    s32 var_r29;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) >= 0x44) {
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0xE8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xF4)));
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r30 = arg0 + var_r31;
            set_global_param__8TObjFishFi((int) (M2C_FIELD(temp_r30, s32 *, 0xC8)));
            if (var_r29 == 0) {
                TObjFish__sub_800E3074((int) (M2C_FIELD(arg0, s32 *, 0x100)));
            }
            TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(temp_r30, s32 *, 0xC4)), (int) (M2C_FIELD(temp_r30, s32 *, 0xCC)), (f32) (M2C_FIELD(arg0, f32 *, 0xFC)));
            if (var_r29 == 0) {
                clear_render_callback__8TObjFishFv((int) (M2C_FIELD(arg0, s32 *, 0x100)));
            }
            var_r29 += 1;
            var_r31 += 0xC;
        } while (var_r29 < 3);
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
    }
}

}
