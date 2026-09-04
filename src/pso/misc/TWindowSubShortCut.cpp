#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2);
void *__dt__18TWindowSubShortCutFv(void *arg0, s16 arg1);
int is_shortcut_active__18TWindowSubShortCutFPv(void* p);
void open_com_card_list__18TWindowSubShortCutFPv(void *arg0);
s32 open_confirm_message__18TWindowSubShortCutFPv(void *arg0);
s32 open_menu__18TWindowSubShortCutFPv(void *arg0);
void render__18TWindowSubShortCutFv(void);
void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p);
u32 *TWindowKeyBoardSoft__sub_80076E2C();
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
s32 TWindowSubComCard__sub_8026CBB8(s32 a0 = 0);
s32 TWindowSubShortCutList__sub_8027E3B4(s32 a0 = 0, s32 a1 = 0);
M2C_UNK TWindowSubShortMail__sub_802A58AC(s32, s32, s32, s32, f32);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
s32 draw_card_icon__17TWindowSubComCardFiii(M2C_UNK, s32, s32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
void queue_destruction__7TObjectFv(void *);
M2C_UNK select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);

int is_shortcut_active__18TWindowSubShortCutFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x4; }

extern const f32 lbl_805DD6C0;

s32 open_confirm_message__18TWindowSubShortCutFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3e), TWindowSubComCard__sub_8026CBB8((s32)(0x76)), lbl_805DD6C0);
    free_member__17TWindowSubComCardFPv(temp_r29, 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 lbl_805DD6C0;

s32 open_menu__18TWindowSubShortCutFPv(void *arg0) {
    s32 temp_r31;
    u32 *temp_r30;

    select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x2C));
    temp_r30 = TWindowKeyBoardSoft__sub_80076E2C();
    temp_r31 = draw_card_icon__17TWindowSubComCardFiii(TWindowSubComCard__sub_8026CBB8((s32)(0x74)), 2, get_message_10__20TWindowSubStatusDispFPv(0x2C));
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x7E), 6, 5);
    if ((u32) *temp_r30 != 0U) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 9);
    } else {
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x5A), 6, 9);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD6C0);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

void open_com_card_list__18TWindowSubShortCutFPv(void *arg0) {
    s32 tmp = TWindowSubComCard__sub_8026CBB8((s32)(0x72));
    TWindowSubShortCutList__sub_8027E3B4(tmp, M2C_FIELD(arg0, s32 *, 0x24));
}
void render__18TWindowSubShortCutFv(void) {  }

extern M2C_UNK __vt__18TWindowSubShortCut[];

void *__dt__18TWindowSubShortCutFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowSubShortCut;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TWindowSubShortCut[];
extern void *lbl_805D3A88;

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowSubShortCut;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A88;
    M2C_FIELD(arg0, void **, 0x28) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

void set_flag1e_bit80__18TWindowSubShortCutFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x80; }

}
