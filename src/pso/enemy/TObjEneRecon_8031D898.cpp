#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64DC();
f32 TObjPlayer__sub_803D89C0(void *, void *);
extern s32 TObjEneRecon__data_805D6AF4;
extern const f32 lbl_805DF3CC;
extern f32 TObjEneRecon__data_805DF3D4;
s32 TObjEneRecon__sub_8031DA90(u8 *arg0);
}

extern "C" {

s32 TObjEneRecon__sub_8031DA90(u8 *arg0) {
    f32 temp_f31;
    if ((M2C_FIELD(arg0, f32 *, 0x3AC) < (TObjEneRecon__data_805DF3D4 + get_pos_x__10TObjPlayerFPv((int) (TObjEneRecon__data_805D6AF4)))) && (get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x448) - M2C_FIELD(arg0, f32 *, 0x398))) < lbl_805DF3CC)) {
        temp_f31 = TObjPlayer__sub_803D89C0((void *) (arg0 + 0x44C), (void *) (arg0 + 0x3A0));
        get_field_0c__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0x318)));
        if (temp_f31 >= TBoss8Dragon__sub_803D64DC()) {
            return 1;
        }
    }
    return 0;
}

}
