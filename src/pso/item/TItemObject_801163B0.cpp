#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemObject__ct(void *arg0, void *arg1, void *arg2);
M2C_UNK TItemObject__sub_80115D6C(void *, s32);
M2C_UNK TItem__ct();
M2C_UNK TObjPlayer__sub_8010043C(void *, u8);
M2C_UNK TObjPlayer__sub_80102BEC(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80102BFC(void *, M2C_UNK);
void *TItemData__sub_8010EA38(void *);
s32 get_item_type_or_default__9TItemListFPv(void *);

extern void* __vt__11TItemObject[];
extern s32 lbl_805D2C28;

void *TItemObject__ct(void *arg0, void *arg1, void *arg2) {
    s16 temp_r3;

    TItem__ct();
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__11TItemObject;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C28;
    M2C_FIELD(arg0, void **, 0xF8) = TItemData__sub_8010EA38(arg2);
    M2C_FIELD(arg0, u8 *, 0x100) = (u8) M2C_FIELD(arg2, u8 *, 4);
    TItemObject__sub_80115D6C(arg0, get_item_type_or_default__9TItemListFPv(arg2));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0x10) & 1) {
        TObjPlayer__sub_80102BFC(arg0, 0x10);
    } else {
        TObjPlayer__sub_80102BEC(arg0, 0x10);
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s16 *, 4);
    if (temp_r3 != 0) {
        TObjPlayer__sub_8010043C(arg0, (u8) (temp_r3 + 4));
    }
    return arg0;
}

}
