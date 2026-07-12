#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_window__13TObjResultWinFPv(u8 *arg0);
s32 TCameraCtrl__sub_8006B338();
M2C_UNK fn_8024422C(u32, f32, f32);
M2C_UNK TLobby__sub_80244D2C(u32, f32);
M2C_UNK TLobby__sub_80269C6C(u32, void *, M2C_UNK);
u32 TLobby__sub_80269D24(M2C_UNK, void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_8048D1A0[];
extern const f32 lbl_805D915C;
extern const f32 lbl_805D9160;

void create_window__13TObjResultWinFPv(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = TLobby__sub_80269D24(TWindowSubComCard__sub_8026CBB8(0x41), lbl_8048D1A0, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        if (TCameraCtrl__sub_8006B338() == 4) {
            fn_8024422C(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D915C, lbl_805D915C);
        }
        TLobby__sub_80269C6C(M2C_FIELD(arg0, u32 *, 0x1C), arg0 + 0x28, 0);
        TLobby__sub_80244D2C(M2C_FIELD(arg0, u32 *, 0x1C), lbl_805D9160);
    }
}

}
