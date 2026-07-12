#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801BAA00(u32 arg0);
s32 TObjPlayer__sub_800196F4(u32);
M2C_UNK set_flag_400000__10TObjPlayerFi();
M2C_UNK TObjPlayer__sub_801C17D0(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801C17EC(M2C_UNK *);
s16 obj_getField1c(u32);
s32 obj_isState2_324(u32);

struct Sp8Struct_801baa00 {
    s16 f0;
    s16 fA;
    s32 fC;
};

void TObjPlayer__sub_801BAA00(u32 arg0) {
    struct Sp8Struct_801baa00 sp8;

    set_flag_400000__10TObjPlayerFi();
    if ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)) {
        TObjPlayer__sub_801C17D0((M2C_UNK *)&sp8);
        sp8.fA = obj_getField1c(arg0);
        sp8.fC = TObjPlayer__sub_800196F4(arg0);
        TObjPlayer__sub_801C17EC((M2C_UNK *)&sp8);
    }
}

}
