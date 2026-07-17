#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_804CFA28[];

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1) {
    u16 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA28;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3 & 0x20) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFDF);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
            }
        }
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
