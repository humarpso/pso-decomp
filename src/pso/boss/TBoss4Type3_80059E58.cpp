#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0);
M2C_UNK TBoss4Type3__sub_80059F04(s32, M2C_UNK, s32, s32);
f32 fn_80011014();

extern f32 lbl_805D8C8C;

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0) {
    s32 temp_r5;

    temp_r5 = (s32) (lbl_805D8C8C * fn_80011014());
    TBoss4Type3__sub_80059F04(arg0, 0xF, temp_r5, temp_r5);
}

}
