#include "types.h"
typedef struct Win_8024BE80 {
    u8 pad0[0x34];
    f32 y;
    u8 pad38[0x50 - 0x38];
    s32 fade;
} Win_8024BE80;

typedef struct Ctrl_8024BE80 {
    u8 pad0[0x78];
    Win_8024BE80 *slots[3];
} Ctrl_8024BE80;

extern "C" {
s32 obj_isState3_324(void *);
s32 is_script_controlled__10TObjPlayerFPv(void *);
u16 get_action_flags__10TNpcPlayerFPv(void *);
s32 get_field_828__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32);
void TWindowSubTradeMain__sub_80244A4C(void *);
void window_request_show(void *);
s32 TWindowCtrl__sub_8024AF74(s32);
s32 TWindowCtrl__sub_8024B048(void *);
s32 TWindowCtrl__sub_8024B054(s32);
s32 is_flag_2_set__11TWindowCtrlFPv(void *);
s32 get_width__11TWindowCtrlFPv(void *);
f32 get_target_distance__13TWindowLockOnFv(s32);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DCC14;
void TWindowCtrl__sub_8024BE80(Ctrl_8024BE80 *self);
}

extern "C" {

void TWindowCtrl__sub_8024BE80(Ctrl_8024BE80 *self) {
    f32 y;
    u32 i;
    void *pl;
    Win_8024BE80 *w;
    y = get_target_distance__13TWindowLockOnFv(0xAB);
    for (i = 0; i < 3; i++) {
        w = self->slots[i];
        if (w != NULL && is_flag_2_set__11TWindowCtrlFPv(w) == 0) {
            pl = get_player_by_client_id(get_width__11TWindowCtrlFPv(w));
            if (pl == NULL || TWindowCtrl__sub_8024AF74(lbl_805D53A0) != 0 ||
                TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0 || TWindowCtrl__sub_8024B048(self) != 0 ||
                is_script_controlled__10TObjPlayerFPv(pl) != 0 ||
                (obj_isState3_324(pl) != 0 &&
                 (get_field_828__10TObjPlayerFPv(pl) != 0 || get_action_flags__10TNpcPlayerFPv(pl) == 0xFFFF))) {
                TWindowSubTradeMain__sub_80244A4C(w);
            } else {
                window_request_show(w);
                if (w->y != y) {
                    w->y = y;
                    w->fade = 0xF;
                }
                y += lbl_805DCC14;
            }
        }
    }
}

}
