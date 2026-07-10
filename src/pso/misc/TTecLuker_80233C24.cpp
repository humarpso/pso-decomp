#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_player_target__9TTecLukerFPv(u8 *arg0);
s32 TObjLuker__sub_801A0F34(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

s32 is_split_screen();
extern const f32 lbl_805DC858;

void update_player_target__9TTecLukerFPv(u8 *arg0) {
    if (is_split_screen() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
            return;
        }
        if (TObjLuker__sub_801A0F34(arg0 + 0x38, 0, lbl_805DC858) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    } else {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
}

}
