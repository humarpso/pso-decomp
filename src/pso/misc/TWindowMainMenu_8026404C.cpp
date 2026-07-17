#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
u32 TLobby__sub_80269CC0(u32, M2C_UNK *, M2C_UNK, s32);
u32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
s32 select_main_menu_item_10(s32);
M2C_UNK call_if_split_screen(u32, s32);

extern M2C_UNK lbl_8044F2E0[];
extern const f32 lbl_805DD13C;

void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
            u32 tmp = TWindowSubComCard__sub_8026CBB8(0x1B);
            M2C_FIELD(arg0, u32 *, 0x24) = TLobby__sub_80269CC0(tmp, lbl_8044F2E0, 1, M2C_FIELD(arg0, s32 *, 0x54));
            set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x24), lbl_805DD13C);
            call_if_split_screen(M2C_FIELD(arg0, u32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x24), select_main_menu_item_10(arg1), 0x80);
    }
}

}
