#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_80269CA4_lbl_804D071C {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80269CB4_lbl_804D071C {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80269C90_lbl_804D071C {
    s32 value;
    u8 remaining[0x10];
};

struct V2_80269DA4 { f32 x; f32 y; };
struct G_80269DA4 { s32 a; s32 b; };

extern "C" {
s32 TLobby__sub_80269DA4(V2_80269DA4 size, void *arg1);
extern G_80269DA4 lbl_804D06F8[];
u8 * TWindowMessage__ct(void *, s32, u32, s16);
u8 *__nw__7TObjectFUl(s32);
extern RecoveredGlobal_80269CA4_lbl_804D071C message_window_settings;
void TLobby__sub_80269CA4(s32 arg0);
extern RecoveredGlobal_80269CA4_lbl_804D071C message_window_settings;
s32 *TLobby__sub_80269CB4(void);
extern RecoveredGlobal_80269CA4_lbl_804D071C message_window_settings;
void TLobby__sub_80269C90(void);
}

extern "C" {

int append_message_window_line(void*, int, int, int);

int TLobby::send_and_handle(int a1, int a2) { return append_message_window_line(this, a1, a2, -1); }

typedef char RecoveredGlobal_80269CA4_lbl_804D071C_size[sizeof(RecoveredGlobal_80269CA4_lbl_804D071C) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80269C90_lbl_804D071C_size[sizeof(RecoveredGlobal_80269C90_lbl_804D071C) == 0x14 ? 1 : -1];
void TLobby__sub_80269C90(void) {
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_80269C90_lbl_804D071C *)&message_window_settings).value) + 0x10) = 3;
}

void TLobby__sub_80269CA4(s32 arg0) {
    *(s32 *)((s8 *)(&message_window_settings.value) + 0x10) = arg0;
}

typedef char RecoveredGlobal_80269CB4_lbl_804D071C_size[sizeof(RecoveredGlobal_80269CB4_lbl_804D071C) == 0x14 ? 1 : -1];
s32 *TLobby__sub_80269CB4(void) {
    return &(*(RecoveredGlobal_80269CB4_lbl_804D071C *)&message_window_settings).value;
}

u8 *TLobby::create_message_window(s32 arg0, s32 arg1, u32 arg2, s16 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    ((s32 (*)(void *, void *))TLobby__sub_80269DA4)((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessage__ct(temp_r3, arg0, arg2, arg3));
    }
    return var_r0;
}

void TLobby::set_window_mode_4(void *arg0, s32 arg1, s32 arg2) {
    TLobby::create_message_window((s32)(arg0), (s32)(arg1), (u32)(arg2), (s16)(4));
}

extern const f32 lbl_805DD238;

void TLobby::update_window_mode_from_progress(void *arg1) {
    s32 arg0 = (s32)this;
    TLobby::set_window_mode_4((void *)((void *)(arg0)), (s32)((s32)(arg1)), (s32)((s32)((s32) TWindowSubStatusDisp::round_away_from_zero((*(f32 *)((s8 *)arg1 + 4) - lbl_805DD238) / lbl_805DD238) + 2)));
}

s32 TLobby__sub_80269DA4(V2_80269DA4 size, void *arg1) {
    V2_80269DA4 *dst = (V2_80269DA4 *)&message_window_settings;
    dst->x = size.x;
    dst->y = size.y;
    lbl_804D06F8[0].b = (s32)arg1;
}

}
