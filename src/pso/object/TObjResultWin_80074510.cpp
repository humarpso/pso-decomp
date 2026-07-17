#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_window__13TObjResultWinFPv(u8 *arg0);
s32 TCameraCtrl__sub_8006B338();
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(M2C_UNK, void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8048D1A0[];
extern const f32 lbl_805D915C;
extern const f32 lbl_805D9160;

void create_window__13TObjResultWinFPv(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = set_window_mode_4__6TLobbyFPvii(TWindowSubComCard__sub_8026CBB8(0x41), lbl_8048D1A0, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        if (TCameraCtrl__sub_8006B338() == 4) {
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D915C, lbl_805D915C);
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x1C), arg0 + 0x28, 0);
        set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D9160);
    }
}

}
