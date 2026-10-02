#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 try_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 can_equip_item__10TObjPlayerFii(s32, s16);
M2C_UNK request_technique_cast__10TObjPlayerFPv(s32);
s32 TLobby__sub_800822E8(s32, M2C_UNK);
s32 canSetMenuCursorAction(s32, void *, M2C_UNK, u8);
M2C_UNK set_slot__20TWindowActionPaletteFPvUc(s32, u8);
M2C_UNK set_mode__20TWindowActionPaletteFPvUc(s32, M2C_UNK);
M2C_UNK TMainCursor__sub_8013DFC4(s32);
M2C_UNK set_technique_id__10TObjPlayerFPvs(s32, s32);

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if ((temp_r3 != 0U) && (canSetMenuCursorAction(temp_r3 + 0x520, arg0, 3, (u8) arg1) != 0)) {
        set_mode__20TWindowActionPaletteFPvUc(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, 3);
        set_slot__20TWindowActionPaletteFPvUc(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, (u8) arg1);
        TMainCursor__sub_8013DFC4(M2C_FIELD(arg0, u32 *, 0x424) + 0x520);
    }
}

s32 try_equip_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (TLobby__sub_800822E8(arg0, 0x100) == 0) {
        if (can_equip_item__10TObjPlayerFii(arg0, arg1) == 0) {
            return 0;
        }
        set_technique_id__10TObjPlayerFPvs(arg0 + 0x428, arg1);
        request_technique_cast__10TObjPlayerFPv(arg0);
        return 1;
    }
    return 0;
}

}
