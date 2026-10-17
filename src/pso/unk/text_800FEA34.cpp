#include "types.h"
#include "pso/TObjEZBoneRotBase.h"
#include "pso/TObjEZBoneRotPlayer.h"

extern "C" {
f32 sin_table_lookup(s32);

void TObjEZBoneRotPlayer::calc_bone_offsets_recursive(void *arg1, s32 arg2, s32 arg3) {
    s32 k;
    f32 t;
    do {
        k = *(s32 *)((s8 *)(*(s32 **)((s8 *)this + 0x8C)) + 0);
        if (k < 0) {
            return;
        }
        if (k == *(s32 *)((s8 *)this + 0x88)) {
            t = (f32) arg3 * sin_table_lookup(arg2);
            *(s32 *)((s8 *)arg1 + 0x14) = *(s32 *)((s8 *)(*(u8 **)((s8 *)this + 0x90)) + 0) + (s32) (*(f32 *)((s8 *)(*(u8 **)((s8 *)this + 0x8C)) + 4) * t);
            *(s32 *)((s8 *)arg1 + 0x18) = *(s32 *)((s8 *)(*(u8 **)((s8 *)this + 0x90)) + 4) + (s32) (*(f32 *)((s8 *)(*(u8 **)((s8 *)this + 0x8C)) + 8) * t);
            *(s32 *)((s8 *)arg1 + 0x1C) = *(s32 *)((s8 *)(*(u8 **)((s8 *)this + 0x90)) + 8) + (s32) (*(f32 *)((s8 *)(*(u8 **)((s8 *)this + 0x8C)) + 0xC) * t);
            *(u8 **)((s8 *)this + 0x90) = *(u8 **)((s8 *)this + 0x90) + 0xC;
            *(u8 **)((s8 *)this + 0x8C) = *(u8 **)((s8 *)this + 0x8C) + 0x10;
            if (*(s32 *)((s8 *)(*(s32 **)((s8 *)this + 0x8C)) + 0) < 0) {
                return;
            }
        }
        *(s32 *)((s8 *)this + 0x88) = *(s32 *)((s8 *)this + 0x88) + 1;
        if (*(void **)((s8 *)arg1 + 0x2C) != NULL) {
            calc_bone_offsets_recursive(*(void **)((s8 *)arg1 + 0x2C), arg2 + *(s32 *)((s8 *)(*(u8 **)((s8 *)this + 0x20)) + 8), (s32) (*(f32 *)((s8 *)(*(u8 **)((s8 *)this + 0x20)) + 0xC) * (f32) arg3));
        }
        arg1 = *(void **)((s8 *)arg1 + 0x30);
    } while (arg1 != NULL);
}

void TObjEZBoneRotPlayer::start_bone_rotation_sequence(s32 arg1) {
    *(s32 *)((s8 *)((u8 *)this) + 0x88) = 0;
    *(s32 *)((s8 *)((u8 *)this) + 0x8C) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x20)) + 0x10);
    *(s32 *)((s8 *)((u8 *)this) + 0x90) = (s32) (((u8 *)this) + 0x24);
    calc_bone_offsets_recursive((void *)(*(u8 **)((s8 *)((u8 *)this) + 0x1C)), (s32)(arg1), (s32)((s32) ((f32) *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x20)) + 0) * *(f32 *)((s8 *)((u8 *)this) + 0x94))));
}

void TObjEZBoneRotBase::sub_800FEC40(u8 *arg1) {
    s32 temp_r3;
    u8 *temp_r4;
    u8 *var_r31;
    var_r31 = (u8 *)(arg1);
loop_1:
    temp_r3 = *(s32 *)((s8 *)(*(s32 **)((s8 *)((u8 *)this) + 0x8C)) + 0);
    if (temp_r3 >= 0) {
        if (temp_r3 == (s32) *(s32 *)((s8 *)((u8 *)this) + 0x88)) {
            *(s32 *)((s8 *)var_r31 + 0) = (s32) (*(s32 *)((s8 *)var_r31 + 0) & 0xFFFFFFFD);
            *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x90)) + 0) = (s32) *(s32 *)((s8 *)var_r31 + 0x14);
            *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x90)) + 4) = (s32) *(s32 *)((s8 *)var_r31 + 0x18);
            *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x90)) + 8) = (s32) *(s32 *)((s8 *)var_r31 + 0x1C);
            *(u8 **)((s8 *)((u8 *)this) + 0x90) = (unsigned char *) ((void *) ((u8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x90)) + 0xC));
            *(s32 **)((s8 *)((u8 *)this) + 0x8C) = (s32 *) ((u8 *)(*(s32 **)((s8 *)((u8 *)this) + 0x8C)) + 0x10);
            if ((s32) *(s32 *)((s8 *)(*(s32 **)((s8 *)((u8 *)this) + 0x8C)) + 0) >= 0) {
                goto block_4;
            }
        } else {
block_4:
            *(s32 *)((s8 *)((u8 *)this) + 0x88) = (s32) (*(s32 *)((s8 *)((u8 *)this) + 0x88) + 1);
            temp_r4 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0x2C));
            if (temp_r4 != NULL) {
                sub_800FEC40(temp_r4);
            }
            var_r31 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0x30));
            if (var_r31 != NULL) {
                goto loop_1;
            }
        }
    }
}

void TObjEZBoneRotBase::sub_800FED0C() {
    *(s32 *)((s8 *)((u8 *)this) + 0x88) = 0;
    *(s32 *)((s8 *)((u8 *)this) + 0x8C) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x20)) + 0x10);
    *(s32 *)((s8 *)((u8 *)this) + 0x90) = (s32) (((u8 *)this) + 0x24);
    sub_800FEC40((u8 *)(*(u8 **)((s8 *)((u8 *)this) + 0x1C)));
}

}
