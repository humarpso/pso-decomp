#include "types.h"
#include "pso/object/TObjEZBoneRotPlayer_800FE834.h"
#include "pso/TObjEZBoneRotPlayer.h"

struct RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
u8 * TObjEZBoneRotBase__ct(void *, s32, void *);
extern RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer __vt__19TObjEZBoneRotPlayer;
extern s32 TObjEZBoneRotPlayer__name;
void *__nw__7TObjectFUl(int);
extern const f32 lbl_805DAA4C;
extern const f32 lbl_805DAA40;
extern const f32 lbl_805DAA44;
extern const f32 lbl_805DAA48;
extern const f32 lbl_805DAA50;

void TObjEZBoneRotPlayer::run_task() {
    f32 temp_f1;
    s32 temp_r4;
    void *temp_r6;

    temp_r6 = *(void **)((s8 *)this + 0x98);
    temp_r4 = *(s32 *)((s8 *)temp_r6 + 0x320) & 0xDF7FF;
    if (temp_r4 & 0x99003) {
        *(f32 *)((s8 *)this + 0x94) = (f32) (*(f32 *)((s8 *)this + 0x94) + lbl_805DAA40);
    } else if ((temp_r4 & 0x1E0) || ((s32) *(s32 *)((s8 *)this + 0x9C) != (s32) *(s32 *)((s8 *)temp_r6 + 0x60))) {
        *(f32 *)((s8 *)this + 0x94) = (f32) (*(f32 *)((s8 *)this + 0x94) + lbl_805DAA44);
    } else if (temp_r4 & 0x4661C) {
        *(f32 *)((s8 *)this + 0x94) = (f32) (*(f32 *)((s8 *)this + 0x94) + lbl_805DAA48);
    } else {
        *(f32 *)((s8 *)this + 0x94) = (f32) (*(f32 *)((s8 *)this + 0x94) + lbl_805DAA40);
    }
    temp_f1 = *(f32 *)((s8 *)this + 0x94);
    if (temp_f1 < lbl_805DAA4C) {
        *(f32 *)((s8 *)this + 0x94) = (f32) lbl_805DAA4C;
    } else if (temp_f1 > lbl_805DAA50) {
        *(f32 *)((s8 *)this + 0x94) = (f32) lbl_805DAA50;
    }
    advance_bone_rotation();
    *(s32 *)((s8 *)this + 0x9C) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)this + 0x98)) + 0x60);
}
typedef char RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer_size[sizeof(RecoveredGlobal_800FE930___vt__19TObjEZBoneRotPlayer) == 0x18 ? 1 : -1];
u8 *__ct__19TObjEZBoneRotPlayerFv(u8 *arg0, s32 arg1, u8 *arg2, void * _w3) {
    TObjEZBoneRotBase__ct(arg0, arg1, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__19TObjEZBoneRotPlayer.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEZBoneRotPlayer__name;
    *(s32 *)((s8 *)arg0 + 0x98) = arg1;
    *(s32 *)((s8 *)arg0 + 0x9C) = (s32) *(s32 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0x98)) + 0x60);
    return arg0;
}
void *TObjEZBoneRotPlayer::create(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = ((void *)__ct__19TObjEZBoneRotPlayerFv((u8 *)o, (s32)arg0, (u8 *)arg1, (void *)arg2));
    }
    return o;
}
void TObjEZBoneRotPlayer::advance_bone_rotation() {
    start_bone_rotation_sequence(*(s32 *)((s8 *)this + 0x84));
    if (*(f32 *)((s8 *)this + 0x94) > (*(f32 *)&lbl_805DAA4C)) {
        *(s32 *)((s8 *)this + 0x84) = (s32) (*(s32 *)((s8 *)this + 0x84) + *(s32 *)((s8 *)(*(void **)((s8 *)this + 0x20)) + 4));
    }
}

}
