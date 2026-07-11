#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_801044B8(s32 *);
M2C_UNK TItemDrop__sub_80106930(u32, s32, s32);
extern u32 item_mgr;

void fn_8011C454(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;

    sp8 = arg0;
    if ((u32) item_mgr != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106930(item_mgr, temp_r4, arg1);
    }
}

}
