#include "types.h"
#include "pso/misc/TWindowCtrl_8024B7D4.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TWindowSimpleStatus.h"
#include "pso/player/TObjPlayer.h"
typedef struct Ctrl_8024B8A0 {
    u8 pad0[0x1E];
    s16 timer;
    u8 pad20[4];
    u32 color;
} Ctrl_8024B8A0;

typedef struct Ctrl_8024B7D4 {
    u8 pad0[0x78];
    TWindowSimpleStatus *status[3];
} Ctrl_8024B7D4;

extern "C" {
f32 cos_table_lookup(s32);
TObjPlayer *get_player_by_client_id(s16 id);
extern TWindowCtrl *TWindowCtrl__active_window;

s32 TWindowCtrl__sub_8024B7D4(s32 n) {
    s32 i;
    TWindowSimpleStatus *status;
    TObjPlayer *player;

    if (TWindowCtrl__active_window == NULL) {
        return 0;
    }
    if (TOKeyMachine01::get_global_state() == 0xF) {
        return 0;
    }
    for (i = 0; i < 3; i++) {
        status = ((Ctrl_8024B7D4 *)TWindowCtrl__active_window)->status[i];
        if (status != NULL && status->sub_80244994() != 0 && n-- == 0) {
            player = get_player_by_client_id(status->get_width());
            if (player == NULL) {
                return 0;
            }
            return player->vfunc_12();
        }
    }
    return 0;
}

#pragma push
#pragma fp_contract on
void TWindowCtrl::update_pulse_color() {
    Ctrl_8024B8A0 *o = (Ctrl_8024B8A0 *)this;
    f32 t;
    f32 a;
    t = (u32)o->timer % 100;
    if (t > 50.0f) {
        t = 100.0f - t;
    }
    t = t / 100.0f;
    a = 0.85f * (1.0f + cos_table_lookup((s32)(65536.0f * t)));
    if (a > 1.0f) {
        a = 1.0f;
    }
    o->color = (u8)(s32)(53.0f * a + 19.0f * (1.0f - a)) |
               ((((u8)(s32)(255.0f * a + 187.0f * (1.0f - a)) << 16) | 0xFF000000) |
                ((u8)(s32)(174.0f * a + 83.0f * (1.0f - a)) << 8));
}
#pragma pop

}
