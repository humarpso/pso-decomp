#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_enemy_collision_flags__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_80019584(s32);
s32 TObjPlayer__sub_801557BC(void *, s32, void *);
s32 TObjPlayer__sub_8015580C(s32, s32);
void *TObjPlayer__sub_80155FBC(void *, s32, f32);

extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805DB298;

void update_enemy_collision_flags__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r30;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFEDFFFFF);
        for (var_r30 = lbl_805D586C + lbl_805D5870; var_r30 < (s32) lbl_805D5868; var_r30++) {
            temp_r3 = TObjPlayer__sub_80019584(var_r30);
            if (temp_r3 != 0) {
                temp_r3_2 = TObjPlayer__sub_80155FBC(arg0, temp_r3, lbl_805DB298);
                if ((temp_r3_2 != NULL) && (TObjPlayer__sub_8015580C(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18), M2C_FIELD(temp_r3_2, s32 *, 0x18)) == 0) && (TObjPlayer__sub_801557BC(arg0, temp_r3, temp_r3_2) != 0)) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0xA4);
                    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 0x01200000);
                }
            }
        }
    }
}

}
