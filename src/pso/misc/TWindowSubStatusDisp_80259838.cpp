#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dispose__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80258058(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_804CF9B0[];

void *dispose__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    u16 temp_r3;
    u16 temp_r3_2;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9B0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3 & 0x10) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFEF);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x24));
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            temp_r3_2 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3_2 & 8) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3_2 & 0xFFFFFFF7);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
            }
        }
        TWindowSubStatusDisp__sub_80258058(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
