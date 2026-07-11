#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_object_collisions__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_80019584(s32);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
s32 TObjPlayer__sub_801557BC(void *, void *, void *);
s32 check_flag_pair__10TObjPlayerFii(s32, s32);
void *TObjPlayer__sub_80155FBC(void *, void *, f32);

extern s32 lbl_805D586C;
extern const f32 TObjPlayer__data_805DB298;

void check_object_collisions__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    s32 var_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFB7FFFF);
        for (var_r29 = 0; var_r29 < (s32) lbl_805D586C; var_r29++) {
            temp_r3 = TObjPlayer__sub_80019584(var_r29);
            if ((temp_r3 != NULL) && ((u16) M2C_FIELD(temp_r3, u16 *, 0x1C) < 0x1000U)) {
                temp_r3_2 = TObjPlayer__sub_80155FBC(arg0, temp_r3, TObjPlayer__data_805DB298);
                if (temp_r3_2 != NULL) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0xA4);
                    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 0x80000);
                    if ((check_flag_pair__10TObjPlayerFii(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18), M2C_FIELD(temp_r3_2, s32 *, 0x18)) == 0) && (TObjPlayer__sub_801557BC(arg0, temp_r3, temp_r3_2) != 0)) {
                        temp_r3_4 = M2C_FIELD(arg0, void **, 0xA4);
                        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 0x400000);
                    }
                }
            }
        }
        if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x480000)) {
            TObjPlayer__sub_80154E3C(arg0);
        }
    }
}

}
