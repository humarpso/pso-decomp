#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubStatusDisp.h"

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
    virtual s32 m10();
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
    virtual s32 m10();
};

extern "C" {
s32 get_shared_text_buffer();
u8 *get_player_by_client_id(s32);
s32 text_builder_append();
s32 text_builder_reset();
s32 get_window_layout_position(int);
s32 free_member__17TWindowSubComCardFv(int, int);
s32 open_yes_no_prompt(int, int, int, int, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, int, int, int);
extern const f32 lbl_805DE298;
s32 open_trade_confirm_prompt(u8 *arg0, s32 arg1);
s32 get_shared_text_buffer();
u8 *get_player_by_client_id(s32);
s32 text_builder_append();
s32 text_builder_reset();
s32 create_message_window__6TLobbyFllUls(s32, void *, int, int);
s32 get_window_layout_position(int);
extern u8 lbl_80470AA8[];
s32 open_player_message_window(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 open_trade_confirm_prompt(u8 *arg0, s32 arg1) {
    s32 temp_r29;
    u8 *temp_r29_2;
    temp_r29_2 = (u8 *)(get_player_by_client_id(arg1));
    text_builder_reset();
    if (temp_r29_2 != NULL) {
        ((VObj_18_f23ffb *)(temp_r29_2))->m10();
        text_builder_append();
    }
    TWindowSubStatusDisp::get_message_10((int) (0xD6));
    text_builder_append();
    temp_r29 = create__19TWindowMessageYesNoFPvPvPvPv((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x20)), (int) (0), (int) (0));
    open_yes_no_prompt((int) (temp_r29), (int) (TWindowSubStatusDisp::get_message_10((int) (0x20))), (int) (get_shared_text_buffer()), (int) (get_window_layout_position((int) (0x5B))), (f32) (lbl_805DE298));
    free_member__17TWindowSubComCardFv((int) (temp_r29), (int) (1));
    ((TWindowSubShortMail *)temp_r29)->notify_warp_flag70();
    return temp_r29;
}
s32 open_player_message_window(u8 *arg0, s32 arg1, s32 arg2) {
    s32 r;
    VObj_802B1B80 *p;
    p = (VObj_802B1B80 *)get_player_by_client_id(arg1);
    text_builder_reset();
    if (p != NULL) {
        ((s32 (*)(s32))text_builder_append)(p->m10());
    }
    ((s32 (*)(s32))text_builder_append)(arg2);
    r = create_message_window__6TLobbyFllUls(get_window_layout_position(0x5B), lbl_80470AA8, 1, *(s32 *)((s8 *)arg0 + 0x20));
    ((TLobby *)r)->send_and_handle(get_shared_text_buffer(), 0x82);
    return r;
}

}
