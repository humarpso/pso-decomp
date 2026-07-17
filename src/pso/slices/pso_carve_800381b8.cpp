#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);
extern M2C_UNK lbl_80482EC0[];

void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    TBoss2Mine__ct(arg0, arg1, arg2, arg3, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
    return arg0;
}

}
