#include "pso/TBoss3VoloptCtrl.h"
#include "pso/boss/TUnk_80483B88.h"
#include "pso/boss/TUnk_80483B88.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TUnk_80483B88.h"

#include "types.h"
#include "pso/misc/TRaderMapCore.h"

struct RecoveredGlobal_80040D70_lbl_8043636C { s32 value; u8 remaining[0x9]; };

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
void *get_player_by_client_id(s32 i);
}
void init_music_sequencer(s32 program);
extern s32 local_client_id;
extern const f32 lbl_805D86F8;
extern "C" {
void TBoss3VoloptCtrl__sub_80040B80(s32 arg0);
s32 get_main_phase(void);
s32 get_current_floor();
s32 restore_player_cameras(void);
s32 activate_camera_mode(s32);
s32 unhide_room_set_objects(s32, s32, s32);
void TBoss3Volopt__sub_8003EA2C(s32 phase2);
void TObjPlayer__sub_801BA42C(void);
void play_area_music(char *name);
extern RecoveredGlobal_80040D70_lbl_8043636C lbl_8043636C;
extern s32 volopt_resources_loaded;
void TLobby__sub_8020C07C(s32 pl, s16 b, s16 a, s32 mask, s32 set);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void disallow_rendering__7TObjectFv(TObject *);

extern s32 __vt__13TUnk_80483B88[];

extern void *tl_02;

extern void *lbl_805D2730;

void TBoss3VoloptCtrl__sub_80040B80(s32 arg0) {
    u8 *player;
    player = (u8 *)(get_player_by_client_id(local_client_id));
    if ((player != NULL) && (*(f32 *)((s8 *)player + 0x40) >= lbl_805D86F8)) {
        init_music_sequencer(3);
        queue_destruction__7TObjectFv((void *)arg0);
    }
}
}
void *TUnk_80483B88::deleting_destructor(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = __vt__13TUnk_80483B88;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}
TUnk_80483B88::TUnk_80483B88() : TObject((TObject *)tl_02) {
    disallow_rendering__7TObjectFv(this);
}
extern "C" {
void TBoss3VoloptCtrl::dispatch_state(s32 arg0) {
    switch (arg0) {
    case 0:
        unhide_room_set_objects(get_current_floor(), 0, 1);
        unhide_room_set_objects(get_current_floor(), 0, 3);
        return;
    case 1:
        unhide_room_set_objects(get_current_floor(), 0, 3);
    case 3:
        unhide_room_set_objects(get_current_floor(), 0, 2);
        TLobby__sub_8020C07C(get_current_floor(), 0, 2, -0x11, 0);
        return;
    case 2:
        unhide_room_set_objects(get_current_floor(), 0, 3);
    case 4:
        unhide_room_set_objects(get_current_floor(), 0, 2);
        return;
    case 5:
        unhide_room_set_objects(get_current_floor(), 0, 1);
        unhide_room_set_objects(get_current_floor(), 0, 3);
        return;
    }
}
}
s32 get_story_flag(s32);
void TBoss3VoloptCtrl::run_task() {
    u8 *temp_r3;
    countdown = (countdown - 1);
    switch (phase) {
    case 0:
        phase = 1;
        break;
    case 1:
        if ((s32) countdown <= 0) {
            if ((s32) volopt_resources_loaded == 0) {
                TBoss3Volopt__sub_8003EA2C(1);
                activate_camera_mode(9);
                TObjPlayer::freeze_all_players();
                play_area_music((char *)(&lbl_8043636C.value));
                if (get_main_phase() != 0xF) {
                    if (TRaderMapCore::is_not_split_screen() == 1) {
                        unhide_room_set_objects((s32)(((s32)get_current_floor())), 0, 1);
                    } else if (get_story_flag(0x2F) != 0) {
                        TBoss3VoloptCtrl::dispatch_state(4);
                    } else {
                        TBoss3VoloptCtrl::dispatch_state(3);
                    }
                } else {
                    unhide_room_set_objects((s32)(((s32)get_current_floor())), 0, 1);
                }
                unhide_room_set_objects((s32)(((s32)get_current_floor())), 0, 3);
                temp_r3 = (u8 *)new TUnk_80483B88();
                phase = 2;
                break;
            }
            phase = -1;
            break;
        }
        break;
    case 2:
        restore_player_cameras();
        TObjPlayer__sub_801BA42C();
        queue_destruction__7TObjectFv((this));
        break;
    case -1:
        queue_destruction__7TObjectFv((this));
        break;
    }
}

TBoss3VoloptCtrl::~TBoss3VoloptCtrl() {}

TBoss3VoloptCtrl::TBoss3VoloptCtrl() : TObject((TObject *)tl_02) {
    *(void * *)&this->m_name = lbl_805D2730;
    this->phase = 0;
    *(u32 *)&this->countdown = 3;
}
