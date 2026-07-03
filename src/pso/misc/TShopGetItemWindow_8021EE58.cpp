#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__15TShopWindowBaseFv(void *);
void init__9TItemDataFv(void *);

extern M2C_UNK __vt__18TShopGetItemWindow[];
extern void *lbl_805D36C8;

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TShopGetItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36C8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x54) = 1;
    M2C_FIELD(arg0, u8 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, void **, 0x5C) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 56));
    return arg0;
}

}
