#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_80263FE0(void *arg0);
void close_child_window__15TWindowMainMenuFPv(void* p);
void destroy_submenu__15TWindowMainMenuFPv(void* p);
void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0);
u32 TLobby__sub_80269CC0(u32, M2C_UNK *, M2C_UNK, s32);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
u32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
int TWindow__close(void*);
M2C_UNK call_if_split_screen(u32, s32);
M2C_UNK fn_80263A20(s32, s32);
int queue_destruction__7TObjectFv(void*);
s32 select_main_menu_item_10(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
s32 test_keyboard_card_flag4(s32);

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0) {
    if (test_keyboard_card_flag4(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x52) = 0;
        return;
    }
    TWindowMainMenu__sub_80263DBC(arg0);
}

void TWindowMainMenu__sub_80263FE0(void *arg0) {
    fn_80263A20(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
}

void close_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x24) != 0) { TWindow__close(*(void**)((char*)p + 0x24)); *(int*)((char*)p + 0x24) = 0; } }

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

void destroy_submenu__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; } }

}
