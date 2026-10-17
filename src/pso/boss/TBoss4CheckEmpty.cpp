#include "pso/TBoss4CheckEmpty.h"

#include "types.h"
#include "pso/boss/TBoss4Thanks.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 is_active__11TBoss4Type2Fv();
s32 init_music_sequencer(int);
s32 play_area_music(void *);
s32 is_door_open_and_ready__12TBoss4ThanksFv();
extern s32 lbl_804789DC[];
void TBoss4CheckEmpty::render() {  }
void TBoss4CheckEmpty::run_task() {
    u8 *arg0 = (u8 *)this;
    if (is_active__11TBoss4Type2Fv() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 0x5A) {
        if (is_door_open_and_ready__12TBoss4ThanksFv() != 0) {
            TBoss4Thanks::create();
            play_area_music((void *) (lbl_804789DC));
        } else {
            init_music_sequencer((int) (4));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
TBoss4CheckEmpty::~TBoss4CheckEmpty() {}

}
