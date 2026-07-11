#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
s32 TObjPlayer__sub_801C2114();
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, s16);
M2C_UNK fn_801B81E8(void *, void *, s32);
M2C_UNK fn_801B826C();

u16 obj_getField1c(void *);
extern s32 lbl_805D5D84;

void init_from_source__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xD00) = 0;
    fn_801B826C();
    TKeyBoardControl__sub_801AFCF4(arg0, (s16) TObjPlayer__sub_801C2114());
    fn_801B81E8(arg0, arg1 + 0x140, M2C_FIELD(arg1, s32 *, 0x13C));
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (lbl_805D5D84 + (obj_getField1c(arg0) * 0x600));
}

}
