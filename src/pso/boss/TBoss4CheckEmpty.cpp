#include "pso/TBoss4CheckEmpty.h"

#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 is_active__11TBoss4Type2Fv();
s32 init_music_sequencer(int);
s32 play_area_music(void *);
s32 create__12TBoss4ThanksFv();
s32 is_door_open_and_ready__12TBoss4ThanksFPv();
extern s32 lbl_804789DC[];
void run_task__16TBoss4CheckEmptyFv(u8 *arg0);
}

extern "C" {

void render__16TBoss4CheckEmptyFv(void);

void render__16TBoss4CheckEmptyFv(void) {  }
void run_task__16TBoss4CheckEmptyFv(u8 *arg0) {
    if (is_active__11TBoss4Type2Fv() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 0x5A) {
        if (is_door_open_and_ready__12TBoss4ThanksFPv() != 0) {
            create__12TBoss4ThanksFv();
            play_area_music((void *) (lbl_804789DC));
        } else {
            init_music_sequencer((int) (4));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
TBoss4CheckEmpty::~TBoss4CheckEmpty() {}

}
