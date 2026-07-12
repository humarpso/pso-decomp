#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_with_alt_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK update_lights__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800F083C();
M2C_UNK clear_alt_model_flag__10TObjPlayerFv();
M2C_UNK set_alt_model_flag__10TObjPlayerFv();
s32 TObjPlayer__sub_800F08AC(s32, s32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);

void draw_with_alt_model__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    set_alt_model_flag__10TObjPlayerFv();
    TObjPlayer__sub_800F083C();
    M2C_FIELD(arg0, s32 *, 0x34) = TObjPlayer__sub_800F08AC(temp_r31, arg1);
    draw__16TObjEneRe7BeruraFPv(arg0);
    update_lights__10TObjPlayerFv();
    clear_alt_model_flag__10TObjPlayerFv();
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
}

}
