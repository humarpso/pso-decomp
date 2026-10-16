#include "types.h"
#include "pso/misc/TNpcPlayer.h"
#include "pso/misc/TWindowSubTradeMain.h"
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
s32 is_script_controlled__10TObjPlayerFv(void *);
s32 get_field_828__10TObjPlayerFPv(void *);
void *get_player_by_client_id(s32);
void window_request_show(void *);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 TWindowCtrl__sub_8024B048(void *);
s32 is_slot_visible__11TWindowCtrlFv(s32);
s32 is_flag_2_set__11TWindowCtrlFPv(void *);
s32 get_width__11TWindowCtrlFv(void *);
f32 get_target_distance__13TWindowLockOnFv(s32);
extern s32 local_client_id;
extern const f32 lbl_805DCC14;
void update_party_status_rows__11TWindowCtrlFPv(Ctrl_8024BE80 *self);
}

extern "C" {

void update_party_status_rows__11TWindowCtrlFPv(Ctrl_8024BE80 *self) {
    f32 y;
    u32 i;
    void *pl;
    Win_8024BE80 *w;
    y = get_target_distance__13TWindowLockOnFv(0xAB);
    for (i = 0; i < 3; i++) {
        w = self->slots[i];
        if (w != NULL && is_flag_2_set__11TWindowCtrlFPv(w) == 0) {
            pl = get_player_by_client_id(get_width__11TWindowCtrlFv(w));
            if (pl == NULL || has_player_active_menu__11TWindowCtrlFv(local_client_id) != 0 ||
                is_slot_visible__11TWindowCtrlFv(local_client_id) != 0 || TWindowCtrl__sub_8024B048(self) != 0 ||
                is_script_controlled__10TObjPlayerFv(pl) != 0 ||
                (obj_isState3_324(pl) != 0 &&
                 (get_field_828__10TObjPlayerFPv(pl) != 0 || ((TNpcPlayer *)pl)->get_action_flags() == 0xFFFF))) {
                ((TWindowSubTradeMain *)w)->request_close();
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
