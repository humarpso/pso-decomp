#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_f23ffb { char pad[0x18]; };

struct VObj_18_f23ffb : VBase_18_f23ffb {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual M2C_UNK m10();
};

struct VBase_802B1B80 { char pad[0x18]; };

struct VObj_802B1B80 : VBase_802B1B80 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual M2C_UNK m10();
};

extern "C" {
s32 TLobby__sub_8001DC24();
s32 get_message_10__20TWindowSubStatusDispFPv(int);
u8 *get_player_by_client_id(s32);
M2C_UNK text_builder_append();
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 get_window_layout_position(int);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(int);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK TWindowSubShortMail__sub_802A58AC(int, int, int, int, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
extern const f32 lbl_805DE298;
s32 fn_802B1AB4(u8 *arg0, s32 arg1);
s32 TLobby__sub_8001DC24();
u8 *get_player_by_client_id(s32);
M2C_UNK text_builder_append();
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK send_and_handle__6TLobbyFPvii(int, int, int);
s32 TLobby__sub_80269CC0(s32, void *, int, int);
s32 get_window_layout_position(int);
extern u8 lbl_80470AA8[];
s32 fn_802B1B80(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 fn_802B1AB4(u8 *arg0, s32 arg1) {
    s32 temp_r29;
    u8 *temp_r29_2;
    temp_r29_2 = (u8 *)(get_player_by_client_id(arg1));
    TWindowSubStatusDisp__sub_802290E0();
    if (temp_r29_2 != NULL) {
        ((VObj_18_f23ffb *)(temp_r29_2))->m10();
        text_builder_append();
    }
    get_message_10__20TWindowSubStatusDispFPv((int) (0xD6));
    text_builder_append();
    temp_r29 = TWindowMessageYesNo__sub_802A59D8((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (int) (0), (int) (0));
    TWindowSubShortMail__sub_802A58AC((int) (temp_r29), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x20))), (int) (TLobby__sub_8001DC24()), (int) (get_window_layout_position((int) (0x5B))), (f32) (lbl_805DE298));
    free_member__17TWindowSubComCardFPv((int) (temp_r29), (int) (1));
    notify_warp_flag70__19TWindowSubShortMailFPv((int) (temp_r29));
    return temp_r29;
}
s32 fn_802B1B80(u8 *arg0, s32 arg1, s32 arg2) {
    s32 r;
    VObj_802B1B80 *p;
    p = (VObj_802B1B80 *)get_player_by_client_id(arg1);
    TWindowSubStatusDisp__sub_802290E0();
    if (p != NULL) {
        ((M2C_UNK (*)(M2C_UNK))text_builder_append)(p->m10());
    }
    ((M2C_UNK (*)(s32))text_builder_append)(arg2);
    r = TLobby__sub_80269CC0(get_window_layout_position(0x5B), lbl_80470AA8, 1, M2C_FIELD(arg0, s32 *, 0x20));
    send_and_handle__6TLobbyFPvii(r, TLobby__sub_8001DC24(), 0x82);
    return r;
}

}
