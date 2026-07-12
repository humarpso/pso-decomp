#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEffEquip__sub_80108920(void *arg0);
M2C_UNK fn_80108860(void *, s32);
M2C_UNK request_destroy__11TBoss4Type2FUi(s32);

void TItemEffEquip__sub_80108920(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) != -1)) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, s32 *, 0x20));
        fn_80108860(arg0, M2C_FIELD(arg0, s32 *, 0x24));
    }
}

}
