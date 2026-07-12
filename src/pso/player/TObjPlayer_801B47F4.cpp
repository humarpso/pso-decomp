#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target__10TObjPlayerFi(s32 arg0);
s32 can_use_action__10TObjPlayerFi(s32);
M2C_UNK fn_801C1F1C(s32);
s32 get_current_target_id__10TObjPlayerFv();
M2C_UNK TFontSmallLobby__sub_801D6158(s32);
M2C_UNK draw_party_label__15TFontSmallLobbyFiUis(s32, s32, s32);

u16 obj_getField1c(s32);

void update_target__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_current_target_id__10TObjPlayerFv();
    if (((u16)temp_r3 == 0xFFFF) || ((u16)temp_r3 == obj_getField1c(arg0))) {
        TFontSmallLobby__sub_801D6158(arg0 + 0x4AC);
        return;
    }
    fn_801C1F1C(arg0 + 0x4AC);
    if (can_use_action__10TObjPlayerFi(arg0) != 0) {
        draw_party_label__15TFontSmallLobbyFiUis(arg0 + 0x4AC, arg0, temp_r3);
    }
}

}
