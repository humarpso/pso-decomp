#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_render_flags__13TObjTombstoneFPv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK TOComputerMachine01__sub_8023DDC8(void *, int, int, int, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern u32 TObjTombstone__data_805D4E48;
extern s32 lbl_805D4E4C;

void update_render_flags__13TObjTombstoneFPv(u8 *arg0) {
    u8 *temp_r3;
    s32 *temp_r4;

    if ((u32) TObjTombstone__data_805D4E48 != 0U) {
        if ((s32) lbl_805D4E4C == 0) {
            TOComputerMachine01__sub_8023DDC8((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30), s32 *, 4)), (int) (-8), (int) (0), (int) (0), (int) (1));
            lbl_805D4E4C = 1;
            PPCSync();
        }
        temp_r3 = (unsigned char *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30), void **, 0x30));
        temp_r4 = M2C_FIELD(temp_r3, s32 **, 0x30);
        if (M2C_FIELD(arg0, s32 *, 0x230) & 0x10) {
            M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0xFFFFFFF7);
            *temp_r4 |= 8;
        } else {
            M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) | 8);
            *temp_r4 &= 0xFFFFFFF7;
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjBoss2Tunnel__sub_803DB470((void *) (M2C_FIELD(arg0, void **, 0x34)));
        TObjPlayer__sub_803D9B78();
    }
}

}
