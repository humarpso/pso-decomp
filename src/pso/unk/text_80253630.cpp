#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * TLobby__sub_80101AB0(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
void fn_80253630(u8 *arg0);
}

extern "C" {

void fn_80253630(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_r3 != -1) {
        temp_r3_2 = (u8 *)(TLobby__sub_80101AB0(temp_r3));
        if (temp_r3_2 != NULL) {
            copy_to_item_data__5TItemFPvPv(temp_r3_2, arg0 + 0x74);
        }
    }
    temp_r3_3 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r3_3 != -1) {
        temp_r3_4 = (u8 *)(TLobby__sub_80101AB0(temp_r3_3));
        if (temp_r3_4 != NULL) {
            copy_to_item_data__5TItemFPvPv(temp_r3_4, arg0 + 0x88);
        }
    }
}

}
