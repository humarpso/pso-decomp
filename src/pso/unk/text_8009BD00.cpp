#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8009BD00_lbl_80500960 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(void *, int);
M2C_UNK update_camera_sequence__9TObjEneDDFPv();
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, int);
M2C_UNK rotate_vector_by_matrix(int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
extern RecoveredGlobal_8009BD00_lbl_80500960 lbl_80500960;
extern u32 lbl_805D4FD4;
extern s32 lbl_805D4FD8;
void fn_8009BD00(void);
}

extern "C" {

typedef char RecoveredGlobal_8009BD00_lbl_80500960_size[sizeof(RecoveredGlobal_8009BD00_lbl_80500960) == 0x10 ? 1 : -1];
void fn_8009BD00(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    switch (lbl_805D4FD4) {
    case 2:
    case 3:
        TObjPlayer__sub_803D9B2C();
        update_camera_sequence__9TObjEneDDFPv();
        temp_r5 = lbl_805D4FD8;
        lbl_805D4FD8 = temp_r5 + 0xC;
        TCameraCtrl__sub_803D8934((int) (0), (void *) (&lbl_80500960.value), (int) (temp_r5));
        temp_r4 = lbl_805D4FD8;
        temp_r5_2 = temp_r4;
        lbl_805D4FD8 = temp_r4 + 0xC;
        rotate_vector_by_matrix((int) (0), (int) (temp_r4), (int) (temp_r5_2));
        pop_matrix();
        break;
    case 6:
    case 11:
    case 14:
        temp_r4_2 = lbl_805D4FD8;
        lbl_805D4FD8 = temp_r4_2 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((void *) (&lbl_80500960.value), (int) (temp_r4_2));
        break;
    }
    lbl_805D4FD4 += 1;
}

}
