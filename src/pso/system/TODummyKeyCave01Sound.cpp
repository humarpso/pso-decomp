#include "pso/TODummyKeyCave01Sound.h"

#include "types.h"

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 play_cave01_key_sound__21TODummyKeyCave01SoundFv(void *);
}

extern "C" {

void *TODummyKeyCave01Sound__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 __ct__7TObjectFP7TObject();
s32 queue_destruction__7TObjectFv(void *);

extern s32 __vt__21TODummyKeyCave01Sound[];
extern s32 TODummyKeyCave01Sound__class_name;

void TODummyKeyCave01Sound::run_task() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) - 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x20) == 0) {
        play_cave01_key_sound__21TODummyKeyCave01SoundFv((void *)(arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TODummyKeyCave01Sound::~TODummyKeyCave01Sound() {}
void *TODummyKeyCave01Sound__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TODummyKeyCave01Sound;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TODummyKeyCave01Sound__class_name;
    *(s32 *)((s8 *)arg0 + 0x20) = arg3;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg2;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x20) <= 0) {
        play_cave01_key_sound__21TODummyKeyCave01SoundFv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

}
