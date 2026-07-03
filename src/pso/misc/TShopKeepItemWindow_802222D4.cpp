#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__15TShopWindowBaseFv(void *);

extern M2C_UNK __vt__19TShopKeepItemWindow[];
extern void *lbl_805D36E8;
void memset(void *, int, int);

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopKeepItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36E8;
    M2C_FIELD(arg0, u32 *, 0x370) = 0;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, u32 *, 0x378) = 1;
    M2C_FIELD(arg0, u32 *, 0x37C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x380) = arg2;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, u32 *, 0x388) = 0;
    M2C_FIELD(arg0, u32 *, 0x390) = 0;
    M2C_FIELD(arg0, u32 *, 0x38C) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x394) = 0;
    M2C_FIELD(arg0, u32 *, 0x398) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

}
