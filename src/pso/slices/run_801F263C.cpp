#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D5E98;

void qst_op_sync(void) { lbl_805D5E98 = 1; }

void qst_op_exit(void) { lbl_805D5E98 = 3; }

s32 TLobby__sub_801F2BCC();
extern s32 lbl_805D5E8C;
extern s32 lbl_805D5E90;

void qst_op_ret(void) {
    u32 temp_r31;

    temp_r31 = (u32) (-lbl_805D5E8C & ~lbl_805D5E8C) >> 0x1FU;
    if (temp_r31 != 0) {
        lbl_805D5E90 = TLobby__sub_801F2BCC();
    }
    if (temp_r31 == 0) {
        lbl_805D5E98 = 2;
    }
}

void qst_op_nop(void);

void qst_op_nop(void) {  }

}
