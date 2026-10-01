#include "pso/TODummyKeyCave01Sound.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK play_cave01_key_sound(void *);
void run_task__21TODummyKeyCave01SoundFv(u8 *arg0);
}

extern "C" {

void *TODummyKeyCave01Sound__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__21TODummyKeyCave01Sound[];
extern s32 lbl_805D2FAC;

void run_task__21TODummyKeyCave01SoundFv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        play_cave01_key_sound((void *)(arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TODummyKeyCave01Sound::~TODummyKeyCave01Sound() {}
void *TODummyKeyCave01Sound__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TODummyKeyCave01Sound;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FAC;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) <= 0) {
        play_cave01_key_sound(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

}
