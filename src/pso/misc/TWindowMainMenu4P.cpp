#include "types.h"
#include "pso/misc/TWindowMainMenu4P.h"
#include "pso/misc/TWindowMainMenu.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_802889A8_lbl_804D04F8 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_802889A8_lbl_804D04F8_size[sizeof(RecoveredGlobal_802889A8_lbl_804D04F8) == 0x38 ? 1 : -1];

struct RecoveredGlobal_802889A8_lbl_804D0530 { s32 value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_802889A8_lbl_804D0530_size[sizeof(RecoveredGlobal_802889A8_lbl_804D0530) == 0x30 ? 1 : -1];

extern "C" {
s32 get_player_by_client_id(u32);
extern RecoveredGlobal_802889A8_lbl_804D04F8 lbl_804D04F8;
extern RecoveredGlobal_802889A8_lbl_804D0530 lbl_804D0530;
}

extern "C" {

void *TWindowMainMenu4P__ct(void *arg0);
void *__dt__17TWindowMainMenu4PFv(void *arg0, s16 arg1);
void TWindowMainMenu__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TWindowMainMenuFv(void *, int);
s32 close_and_clear_flags__15TWindowMainMenuFv();

void TWindowMainMenu4P::vfunc_9() { if (close_active_submenu() != 0) { ((TWindowMainMenu4P *)this)->show_child_window(); } }

void TWindowMainMenu4P::vfunc_8() {
    if (*(s32 *)((s8 *)this + 0x4C) & 1) {
        close_and_clear_flags__15TWindowMainMenuFv();
    }
}

void TWindowMainMenu4P::vfunc_6() {
    u8 *arg0 = (u8 *)this;
    u8 *player;
    if (!(*(s32 *)((s8 *)arg0 + 0x4C) & 1)) {
        player = (u8 *)(get_player_by_client_id(*(u32 *)((s8 *)arg0 + 0x54)));
        if (player != NULL) {
            if (((TObjPlayer *)player)->is_ready() != 0) {
                ((TWindowMainMenu *)arg0)->open((s32) &lbl_804D0530.value);
            } else {
                ((TWindowMainMenu *)arg0)->open((s32) &lbl_804D04F8.value);
            }
            this->vfunc_7();
        }
    }
}

void TWindowMainMenu4P::render() {  }
void TWindowMainMenu4P::run_task() { handle_menu_selection(); sub_80263FE0(); }

extern s32 __vt__17TWindowMainMenu4P[];

void *__dt__17TWindowMainMenu4PFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowMainMenu4P;
        __dt__15TWindowMainMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__17TWindowMainMenu4P[];
extern void *TWindowMainMenu4P__name;

void *TWindowMainMenu4P__ct(void *arg0) {
    TWindowMainMenu__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowMainMenu4P;
    *(void **)((s8 *)arg0 + 0x0) = TWindowMainMenu4P__name;
    return arg0;
}

}
