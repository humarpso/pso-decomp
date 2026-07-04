#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TBoss4Type2__sub_800874F4(s32, M2C_UNK);
M2C_UNK TItemMagGrowEff__sub_80115924(u32);
M2C_UNK __ct__7TObjectFP7TObject();
extern M2C_UNK __vt__15TItemMagGrowEff[];
extern s32 lbl_805D2C14;

void *TItemMagGrowEff__ct(void *arg0, void *arg1, u32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TItemMagGrowEff;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C14;
    if (arg2 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x24) = arg2;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = TBoss4Type2__sub_800874F4(M2C_FIELD(arg0, u32 *, 0x24) + 0xDC, 0x9D);
        TItemMagGrowEff__sub_80115924(M2C_FIELD(arg0, u32 *, 0x24));
    } else {
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

}
