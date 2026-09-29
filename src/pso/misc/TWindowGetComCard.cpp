#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80252FCC___vt__17TWindowGetComCard {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 TLobby__sub_8001DC24();
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 init_com_card__17TWindowSubComCardFv();
s32 TWindowGetComCard__sub_8007B594();
M2C_UNK reset_equip_slots__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK get_com_card_list__6TLobbyFPv(int);
M2C_UNK TWindowSubStatusDisp__sub_80229080();
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK TObjPlayer__sub_8024ABDC(void *);
M2C_UNK fn_8024AC64(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(int, int, int);
s32 set_window_mode_4__6TLobbyFPvii(void *, void *, int);
extern M2C_UNK lbl_8044ED94[];
extern M2C_UNK lbl_8044ED9C[];
extern void *__vt__17TWindowGetComCard[];
extern s32 lbl_805D3908;
extern s32 lbl_805D53A0;
u8 *TWindowGetComCard__ct(u8 *arg0);
}

extern "C" {

void TWindowFukidasi__sub_80252C38(void* p);
void TWindowFukidasi__sub_80252C68(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1);
void clear_flag__15TWindowFukidasiFPv(void* p);
void clear_visible_flag__15TWindowFukidasiFPv(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);
int is_active__15TWindowFukidasiFPv(void* p);
int is_flag_set__15TWindowFukidasiFPv(void* p);
void render__17TWindowGetComCardFv(void);
void set_flag__15TWindowFukidasiFPv(void* p);
M2C_UNK TLobby__sub_8024AC20(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024A314();
M2C_UNK TWindowReturnCity__sub_8024ACA8(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p);
M2C_UNK init_parts__10TObjPlayerFPv();
void set_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p);

void TWindowFukidasi__sub_80252C38(void* p) { *(u8*)((char*)p + 0x71) |= 0x4; }
void clear_visible_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) &= 0xfe; }
void set_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) |= 0x1; }
void TWindowFukidasi__sub_80252C68(void* p) { *(u8*)((char*)p + 0x71) |= 0x20; }
int is_flag_set__15TWindowFukidasiFPv(void* p) { return *(u8*)((char*)p + 0x71) & 0x1; }
void TWindowFukidasi__sub_80252C84(void* p) { *(u8*)((char*)p + 0x71) &= 0xffffffdf; }
int is_active__15TWindowFukidasiFPv(void* p) { return (*(u8*)((char*)p + 0x71) >> 2) & 0x1; }
void clear_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) &= 0xfffffffb; }
int fn_80252CB0(void* p) { return (*(u8*)((char*)p + 0x71) >> 5) & 0x1; }
int fn_80252CBC(void* p) { return *(u16*)((char*)p + 0x0) & 0x10; }
void render__17TWindowGetComCardFv(void) {  }

extern void *__vt__17TWindowGetComCard[];
extern s32 lbl_805D53A0;

void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__17TWindowGetComCard;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x1C));
            M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8(lbl_805D53A0);
        TLobby__sub_8024AC20(lbl_805D53A0);
        if ((TWindowCtrl__sub_8024A314() == 0) && (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U)) {
            init_parts__10TObjPlayerFPv();
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80252FCC___vt__17TWindowGetComCard_size[sizeof(RecoveredGlobal_80252FCC___vt__17TWindowGetComCard) == 0x18 ? 1 : -1];
u8 *TWindowGetComCard__ct(u8 *arg0) {
    s32 temp_r31;
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80252FCC___vt__17TWindowGetComCard *)&__vt__17TWindowGetComCard).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3908;
    M2C_FIELD(arg0, s32 *, 0x1C) = set_window_mode_4__6TLobbyFPvii((void *) (lbl_8044ED94), (void *) (lbl_8044ED9C), (int) (1));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if (init_com_card__17TWindowSubComCardFv() != 0) {
        temp_r31 = TWindowGetComCard__sub_8007B594();
        TWindowSubStatusDisp__sub_802290E0();
        get_com_card_list__6TLobbyFPv((int) (temp_r31));
        TWindowSubStatusDisp__sub_80229080();
        get_message_10__20TWindowSubStatusDispFPv((int) (0x36));
        TWindowSubStatusDisp__sub_80229080();
        send_and_handle__6TLobbyFPvii((int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (TLobby__sub_8001DC24()), (int) (2));
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        send_and_handle__6TLobbyFPvii((int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x37))), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x28) = 0x384;
    }
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)((void *) (lbl_805D53A0))) != 0U) {
        reset_equip_slots__10TObjPlayerFPv();
    }
    TObjPlayer__sub_8024ABDC((void *) (lbl_805D53A0));
    fn_8024AC64((void *) (lbl_805D53A0));
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}

}
