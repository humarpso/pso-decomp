#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_split_screen_camera__6TLobbyFv(void);
M2C_UNK TObjPlayer__sub_80071BC0(s32);
M2C_UNK TLobby__sub_80292730(s32);

s32 is_split_screen(void);
struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 TLobby__data_80512220;

void update_split_screen_camera__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220.field0;
    if (is_split_screen() == 1) {
        TLobby__sub_80292730(temp_r31);
        return;
    }
    TObjPlayer__sub_80071BC0(temp_r31);
}

}
