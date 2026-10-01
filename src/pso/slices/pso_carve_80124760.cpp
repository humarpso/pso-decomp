#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C(int);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
extern const f32 lbl_805DAD28;
extern const f32 lbl_805DAD2C;

void reset_owner_target__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;

    if (is_owner_alive__10TObjPlayerFPv() != 0) {
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x58));
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
            temp_r3_2 = (unsigned char *) (M2C_FIELD(temp_r3, void **, 0x2C));
            temp_r31 = (unsigned char *) (M2C_FIELD(temp_r3_2, void **, 0x30));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFB);
            M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD28;
            TObjPlayer__sub_803D9B2C((int) (temp_r3_2));
            notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, u32 *, 0x5C)));
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
            rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28) - 0x4000));
            TObjBoss2Tunnel__sub_803DB470((void *) (M2C_FIELD(arg0, void **, 0x58)));
            TObjPlayer__sub_803D9B78();
            M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD2C;
        }
    }
}

}
