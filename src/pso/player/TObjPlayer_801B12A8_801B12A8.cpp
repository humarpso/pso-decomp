#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u16 obj_getField1c();
extern s32 lbl_805D53A4;
u8 TObjPlayer__vt17(void *arg0, s32 arg1);
}

extern "C" {

void test_flag_2000000__10TObjPlayerFPv(void *arg0);

M2C_UNK obj_testFlags30(void *, M2C_UNK);

void test_flag_2000000__10TObjPlayerFPv(void *arg0) {
    obj_testFlags30(arg0, 0x02000000);
}
u8 TObjPlayer__vt17(void *arg0, s32 arg1) {
    return (u8) ((lbl_805D53A4 & arg1) == obj_getField1c());
}

}
