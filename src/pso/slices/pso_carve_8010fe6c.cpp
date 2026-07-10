#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800F7D30(s32, u32, s32);
M2C_UNK fn_800F93F0(M2C_UNK *, M2C_UNK);
s32 fn_800F9C00(M2C_UNK *);
M2C_UNK fn_800F9CA4(M2C_UNK *);
s32 fn_800F9DF4(u32, s32);
M2C_UNK TItemBuff__ct();
s32 create_item_buff(s32);
u32 TOBoss4Rock__sub_80147AA8(s32);

struct Sp8Buf {
    s32 field00;
    s32 field04;
    s32 field08;
    s32 field0c;
    s32 field10;
    s32 field14;
    s32 field18;
    u32 field1c;
    s32 field20;
    s32 field24;
    s32 field28;
    s32 field2c;
    s32 field30;
    s32 field34;
    s32 field38;
    s32 field3c;
};

void *fn_8010FE6C(void *arg0, u32 arg1, s32 arg2) {
    struct Sp8Buf sp8;
    s32 temp_r31;
    s32 temp_r3;

    M2C_FIELD(arg0, u32 *, 0) = 0U;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((arg2 != 0) && (arg1 != 0U)) {
        M2C_FIELD(arg0, u32 *, 0) = TOBoss4Rock__sub_80147AA8(arg2);
        temp_r3 = create_item_buff(arg2);
        if ((temp_r3 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) && (fn_800F9DF4(arg1, temp_r3) > 0)) {
            temp_r31 = fn_800F7D30(temp_r3, M2C_FIELD(arg0, u32 *, 0), arg2);
            fn_800F9CA4((M2C_UNK *)&sp8);
            sp8.field1c = M2C_FIELD(arg0, u32 *, 0);
            sp8.field20 = temp_r31;
            M2C_FIELD(arg0, s32 *, 4) = fn_800F9C00((M2C_UNK *)&sp8);
            fn_800F93F0((M2C_UNK *)&sp8, -1);
        }
        TItemBuff__ct();
    }
    return arg0;
}

}
