#include "pso/TBoss4CheckEmpty.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_active__11TBoss4Type2Fv();
M2C_UNK init_music_sequencer(int);
M2C_UNK play_area_music(void *);
M2C_UNK create__12TBoss4ThanksFv();
s32 is_door_open_and_ready__12TBoss4ThanksFPv();
extern M2C_UNK lbl_804789DC[];
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
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0x5A) {
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
