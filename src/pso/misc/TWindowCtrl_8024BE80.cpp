#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowLockOn.h"
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
void *get_player_by_client_id(s32);
void window_request_show(void *);
s32 has_player_active_menu__11TWindowCtrlFv(s32);
s32 TWindowCtrl__sub_8024B048(void *);
s32 is_slot_visible__11TWindowCtrlFv(s32);
s32 get_width__19TWindowSimpleStatusFv(void *);
f32 get_target_distance__13TWindowLockOnFv(s32);
extern s32 local_client_id;
extern const f32 lbl_805DCC14;
void TWindowCtrl::update_party_status_rows() {
    f32 y;
    u32 i;
    void *pl;
    Win_8024BE80 *w;
    y = get_target_distance__13TWindowLockOnFv(0xAB);
    for (i = 0; i < 3; i++) {
        w = ((Ctrl_8024BE80 *)this)->slots[i];
        if (w != NULL && ((TWindowCtrl *)w)->is_flag_2_set() == 0) {
            pl = get_player_by_client_id(get_width__19TWindowSimpleStatusFv(w));
            if (pl == NULL || has_player_active_menu__11TWindowCtrlFv(local_client_id) != 0 ||
                is_slot_visible__11TWindowCtrlFv(local_client_id) != 0 || TWindowCtrl__sub_8024B048(((Ctrl_8024BE80 *)this)) != 0 ||
                is_script_controlled__10TObjPlayerFv(pl) != 0 ||
                (obj_isState3_324(pl) != 0 &&
                 (((TObjPlayer *)pl)->get_field_828() != 0 || ((TNpcPlayer *)pl)->get_action_flags() == 0xFFFF))) {
                ((TWindowLockOn *)w)->request_close();
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
